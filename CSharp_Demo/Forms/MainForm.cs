using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using System.Threading;
using TapTradeAPI;

namespace TapAPITest_GUI
{
    public partial class MainForm : Form
    {
        TradeController m_TradeCtrl;
        QuoteController m_QuoteCtrl;
        ServerSettingForm m_ServerSettingForm;
        QuoteSelectForm m_QuoteSelectForm;
        InsertOrderPanel m_InsertOrderPanel;

        private bool m_bIsQuoteLogin = false;
        public bool IsQuoteLogin
        {
            set { m_bIsQuoteLogin = value; UpdateButtonStatus(); }
            get { return m_bIsQuoteLogin; }
        }
        private bool m_bIsTradeLogin = false;
        public bool IsTradeLogin
        {
            set { m_bIsTradeLogin = value; UpdateButtonStatus(); }
            get { return m_bIsTradeLogin; }
        }  
        private bool m_bIsQuoteReady = false;
        public bool IsQuoteReady
        {
            set { m_bIsQuoteReady = value; UpdateButtonStatus(); }
            get { return m_bIsQuoteReady; }
        }
        private bool m_bIsTradeReady = false;
        public bool IsTradeReady
        {
            set { m_bIsTradeReady = value; UpdateButtonStatus(); }
            get { return m_bIsTradeReady; }
        }      
        private bool m_bIsQuoteSubed = false;
        public bool IsQuoteSubed
        {
            set { m_bIsQuoteSubed = value; UpdateButtonStatus(); }
            get { return m_bIsQuoteSubed; }
        }      
        
        //初始化
        public MainForm()
        {
            InitializeComponent();
            m_ServerSettingForm = new ServerSettingForm();
            m_QuoteSelectForm = new QuoteSelectForm();
            m_InsertOrderPanel = new InsertOrderPanel();
            m_InsertOrderPanel.Dock = DockStyle.Fill;
            MainFormInsertOrderPanel.Controls.Add(m_InsertOrderPanel);
            QuoteView.DataSource = DataManager.Quote.QuoteWholeMgr.QuoteDict;
            OrderView.DataSource = DataManager.Trade.OrderInfoMgr.OrderDict;
            QuoteView.AutoSizeColumnsMode = DataGridViewAutoSizeColumnsMode.Fill;
            OrderView.AutoSizeColumnsMode = DataGridViewAutoSizeColumnsMode.Fill;
            UpdateButtonStatus();
        }

        private void MainForm_Load(object sender, EventArgs e)
        {
            m_QuoteCtrl = new QuoteController();
            m_TradeCtrl = new TradeController();

            int iInitAPIRst = m_QuoteCtrl.InitQuoteAPI();
            if (0 != iInitAPIRst)
            {
                MessageBox.Show("初始化行情API失败，错误码：" + iInitAPIRst);
                this.Close();
            }

            iInitAPIRst = m_TradeCtrl.InitTradeAPI();
            if (0 != iInitAPIRst)
            {
                MessageBox.Show("初始化交易API失败，错误码：" + iInitAPIRst);
                this.Close();
            }

            InitHandler();
        }

        private void InitHandler()
        {
            m_QuoteCtrl.OnRspLoginEvent += m_QuoteCtrl_OnRspQuoteLoginEvent;
            m_QuoteCtrl.OnDisconnectEvent += m_QuoteCtrl_OnDisconnectEvent;
            m_QuoteCtrl.OnQryContractFinishEvent += m_QuoteCtrl_OnQryContractFinishEvent;
            m_QuoteCtrl.OnQuoteUpdateEvent += m_QuoteCtrl_OnQuoteUpdateEvent;
            m_TradeCtrl.OnRspLoginEvent += m_TradeCtrl_OnRspLoginEvent;
            m_TradeCtrl.OnDisconnectEvent += m_TradeCtrl_OnDisconnectEvent;
            m_TradeCtrl.OnOrderUpdateEvent += m_TradeCtrl_OnOrderUpdateEvent;
            m_TradeCtrl.OnAccountNoReadyEvent += m_TradeCtrl_OnAccountNoReadyEvent;

            m_InsertOrderPanel.InsertOrderClicked += m_InsertOrderPanel_InsertOrderClicked;
        }

        void UpdateButtonStatus()
        {
            btnConnectQuote.Text = m_bIsQuoteLogin?"断开行情":"连接行情";
            btnConnectTrade.Text = m_bIsTradeLogin ? "断开交易" : "连接交易";
            btnSubQuote.Enabled = m_bIsQuoteReady;
            m_InsertOrderPanel.Enabled = m_bIsQuoteSubed && m_bIsTradeReady;
        }

        //UI触发事件
        void m_InsertOrderPanel_InsertOrderClicked(InsertOrderPanel.InsertOrderParams order)
        {
            TapAPINewOrder newOrder = new TapAPINewOrder();
            newOrder.AccountNo = order.AccountNo;
            TapQuoteAPI.TapAPIContract con = DataManager.Quote.ContractMgr.GetContractByID(order.ContractID);
            if (null == con)
            {
                MessageBox.Show("ContractID Error!");
                return;
            }

            newOrder.ExchangeNo = con.Commodity.ExchangeNo;
            newOrder.CommodityType = con.Commodity.CommodityType;
            newOrder.CommodityNo = con.Commodity.CommodityNo;
            newOrder.ContractNo = con.ContractNo1;
            newOrder.CallOrPutFlag = con.CallOrPutFlag1;
            newOrder.StrikePrice = con.StrikePrice1;
            newOrder.ContractNo2 = con.ContractNo2;
            newOrder.CallOrPutFlag2 = con.CallOrPutFlag2;
            newOrder.StrikePrice2 = con.StrikePrice2;


            newOrder.OrderQty = order.OrderQty;
            newOrder.OrderPrice = order.OrderPrice;
            newOrder.OrderType = order.OrderType;
            newOrder.OrderSide = order.OrderSide;
            newOrder.PositionEffect = order.OpenCloseMode;

            char YNFLAG_NO = 'N';
            newOrder.AddOneIsValid = YNFLAG_NO;
            newOrder.IsRiskOrder = YNFLAG_NO;
            newOrder.TriggerCondition = YNFLAG_NO;
            newOrder.TriggerPriceType = YNFLAG_NO;
            newOrder.TacticsType = YNFLAG_NO;
            newOrder.PositionEffect2 = YNFLAG_NO;
            newOrder.OrderSource = TapTrade.TAPI_ORDER_SOURCE_ESUNNY_API;
            newOrder.TimeInForce = TapTrade.TAPI_ORDER_TIMEINFORCE_GFD;
            newOrder.HedgeFlag = TapTrade.TAPI_HEDGEFLAG_T;
            newOrder.HedgeFlag2 = TapTrade.TAPI_HEDGEFLAG_NONE;


            if (!m_TradeCtrl.InsertOrder(newOrder))
            {
                MessageBox.Show("InsertFailed");
            }
        }
        private void btnSubQuote_Click(object sender, EventArgs e)
        {
            if (DialogResult.OK == m_QuoteSelectForm.ShowDialog())
            {
                List<string> subList = DataManager.Quote.ContractMgr.GetSubscribedContractList();
                foreach (string sub in subList)
                {
                    if (!DataManager.Quote.QuoteWholeMgr.IsQuoteSubscribed(sub))
                    {
                        TapQuoteAPI.TapAPIContract con = DataManager.Quote.ContractMgr.ContractDict[sub].Contract.Contract;
                        m_QuoteCtrl.SubQuote(con);
                    }
                }
                //TODO:退订
                m_InsertOrderPanel.UpdateContractIDList(subList.ToArray());


                if (!IsQuoteSubed && subList.Count > 0)
                {
                    IsQuoteSubed = true;
                }
                else
                {
                    if (subList.Count == 0)
                    {
                        IsQuoteSubed = false;
                    }
                }
            }
        }
        private void btnConfig_Click(object sender, EventArgs e)
        {
            m_ServerSettingForm.ShowDialog();
        }
        private void btnConnectQuote_Click(object sender, EventArgs e)
        {
            if (!m_bIsQuoteLogin)
            {
                Config.ServerSetting cfg = Config.QuoteServerSetting;
                try
                {
                    if (!m_QuoteCtrl.Login(cfg.IP, UInt16.Parse(cfg.Port), cfg.UserName, cfg.Password))
                    {
                        MessageBox.Show("LoginFailed");
                    }
                }
                catch
                {
                    MessageBox.Show("登陆参数有误");
                }
            }
            else
            {
                m_QuoteCtrl.Disconnect();
            }
        }
        private void btnConnectTrade_Click(object sender, EventArgs e)
        {
            if (!m_bIsTradeLogin)
            {
                Config.ServerSetting cfg = Config.TradeServerSetting;
                try
                {
	                if (!m_TradeCtrl.Login(cfg.IP, UInt16.Parse(cfg.Port), cfg.UserName, cfg.Password))
	                {
	                    MessageBox.Show("LoginFailed");
	                }
                }
                catch
                {
                    MessageBox.Show("登陆参数有误");
                }
            }
            else
            {
                m_TradeCtrl.Disconnect();
            }
        }

        //API回调事件
        delegate void UpdateHandler();
        void m_QuoteCtrl_OnQuoteUpdateEvent()
        {
            UpdateHandler d = new UpdateHandler(OnQuoteUpdated);
            try
            {
            	this.Invoke(d);
            }
            catch (System.Exception)
            {
            	
            }
        }
        void m_QuoteCtrl_OnQryContractFinishEvent()
        {
            UpdateHandler d = new UpdateHandler(OnQryContractFinish);
            try
            {
            	this.Invoke(d);
            }
            catch (System.Exception)
            {
            	
            }
        }
        void m_TradeCtrl_OnOrderUpdateEvent()
        {
            UpdateHandler d = new UpdateHandler(UpdateOrderView);
            try
            {
            	this.Invoke(d);
            }
            catch (System.Exception)
            {
            	
            }
        }
        void m_TradeCtrl_OnAccountNoReadyEvent()
        {
            UpdateHandler d = new UpdateHandler(UpdateAccountNo);
            try
            {
            	this.Invoke(d);
            }
            catch (System.Exception)
            {
            	
            }
        }
        private void OnQryContractFinish()
        {
            IsQuoteReady = true;
        }
        private void OnQuoteUpdated()
        {
            int oldRowSelectIndex = 0;
            bool bIsSelected = false;
            if (null != QuoteView.CurrentRow)
            {
                oldRowSelectIndex = QuoteView.CurrentRow.Index;
                bIsSelected = true;
            }

            QuoteView.DataSource = DataManager.Quote.QuoteWholeMgr.QuoteDict.Values.ToList();
            QuoteView.AutoResizeColumns(DataGridViewAutoSizeColumnsMode.AllCells);
            if (bIsSelected)
            {
                QuoteView.CurrentCell = QuoteView[0, oldRowSelectIndex];
            }
            QuoteView.Refresh();

        }
        private void UpdateAccountNo()
        {
            m_InsertOrderPanel.UpdateAccountNoList(DataManager.Trade.AccountMgr.GetAllAccountNo());
        }       
        private void UpdateOrderView()
        {
            List<TradeDataManager.GUI_OrderInfo> tmpList = DataManager.Trade.OrderInfoMgr.OrderDict.Values.ToList();
            tmpList.Sort();
            int oldRowSelectIndex = 0;
            int oldRowsCount = OrderView.Rows.Count;
            bool bIsSelected = false;
            if(null != OrderView.CurrentRow)
            {
                oldRowSelectIndex = OrderView.CurrentRow.Index;
                bIsSelected = true;
            }

            OrderView.DataSource = tmpList;
            OrderView.AutoResizeColumns(DataGridViewAutoSizeColumnsMode.AllCells);
           
            if (bIsSelected)
            {
                int newRowIndex = oldRowSelectIndex;
                if (oldRowsCount < OrderView.Rows.Count)
                {
                    newRowIndex += 1;
                }
                OrderView.CurrentCell = OrderView[0, newRowIndex];
            }
            OrderView.Refresh();
                        
            if (!IsTradeReady)
            {
                IsTradeReady = true;           
            }
        }

        delegate void OnRspQuoteLoginHandler(int errorCode, TapQuoteAPI.TapAPIQuotLoginRspInfo loginRspInfo);
        void m_QuoteCtrl_OnRspQuoteLoginEvent(int errorCode, TapQuoteAPI.TapAPIQuotLoginRspInfo loginRspInfo)
        {
            OnRspQuoteLoginHandler d = new OnRspQuoteLoginHandler(OnRspQuoteLogin);
            try
            {
            	this.Invoke(d, errorCode, loginRspInfo);
            }
            catch (System.Exception)
            {
            	
            }
        }
        void OnRspQuoteLogin(int errorCode, TapQuoteAPI.TapAPIQuotLoginRspInfo loginRspInfo)
        {
            if (errorCode != 0)
            {
                MessageBox.Show("登陆行情失败，错误码：" + errorCode);
                IsQuoteLogin = false;
            }
            else 
            {
                IsQuoteLogin = true;
            }
        }

        delegate void OnRspTradeLoginHandler(int errorCode, TapTradeAPI.TapAPITradeLoginRspInfo loginRspInfo);
        void m_TradeCtrl_OnRspLoginEvent(int errorCode, TapTradeAPI.TapAPITradeLoginRspInfo loginRspInfo)
        {
            OnRspTradeLoginHandler d = new OnRspTradeLoginHandler(OnRspTradeLogin);
            try
            {
            	this.Invoke(d, errorCode, loginRspInfo);
            }
            catch (System.Exception)
            {
            	
            }
        }
        void OnRspTradeLogin(int errorCode, TapTradeAPI.TapAPITradeLoginRspInfo loginRspInfo)
        {
            if (errorCode != 0)
            {
                MessageBox.Show("登陆交易失败，错误码：" + errorCode);
                IsTradeLogin = false;
            }
            else
            {
                IsTradeLogin = true;
            }
        }

        delegate void OnRspDisconnectHandler(int reasonCode);
        void m_QuoteCtrl_OnDisconnectEvent(int reasonCode)
        {
            OnRspDisconnectHandler d = new OnRspDisconnectHandler(OnRspQuoteDisconnect);
            try
            {
                this.Invoke(d, reasonCode);
            }
            catch 
            {
            }
        }
        void OnRspQuoteDisconnect(int reasonCode)
        {
            string strMsg = "行情断开，原因：" + reasonCode;
            MessageBox.Show(strMsg);
            IsQuoteLogin = false;
            IsQuoteReady = false;
        }
        void m_TradeCtrl_OnDisconnectEvent(int reasonCode)
        {
            OnRspDisconnectHandler d = new OnRspDisconnectHandler(OnRspTradeDisconnect);
            try
            {
            	this.Invoke(d, reasonCode);
            }
            catch (System.Exception)
            {
            	
            }
        }
        void OnRspTradeDisconnect(int reasonCode)
        {
            string strMsg = "交易断开，原因：" + reasonCode;
            MessageBox.Show(strMsg);
            IsTradeLogin = false;
            IsTradeReady = false;
        }


    }
}
