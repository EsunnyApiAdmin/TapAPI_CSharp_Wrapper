using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using TapTradeAPI;
using System.Threading;

namespace TapAPITest_GUI
{
    class TradeController 
    {

        public  CTapTradeAPINotify TradeNotify = null;
        private ITapTradeAPI m_api = null;
        private uint m_sessionID = 0;


        public delegate void OnOrderUpdateHandler();
        public event OnOrderUpdateHandler OnOrderUpdateEvent;
        public delegate void OnAccountNoReadyHandler();
        public event OnAccountNoReadyHandler OnAccountNoReadyEvent;

        public delegate void OnRspLoginHandler(int errorCode, TapAPITradeLoginRspInfo loginRspInfo);
        public event OnRspLoginHandler OnRspLoginEvent;

        public delegate void OnDisconnectHandler(int reasonCode);
        public event OnDisconnectHandler OnDisconnectEvent;


        public TradeController()
        {
            TradeNotify = new CTapTradeAPINotify();
            InitEventHandler();
        }

        public int InitTradeAPI()
        {
            TapAPIApplicationInfo appInfo = new TapAPIApplicationInfo();
            appInfo.AuthCode = Config.Cert.AuthCode;
            int iResult = 0;
            m_api = TapTrade.CreateTapTradeAPI(appInfo, out iResult);
            if (m_api != null)
            {
                m_api.SetAPINotify(TradeNotify);
            }
            return iResult;
        }

        public void FreeApi()
        {
            ClearEventHandler();
            if (m_api != null)
            {
                TapTrade.FreeTapTradeAPI(m_api);
            }
        }
        private void InitEventHandler()
        {
            TradeNotify.OnRspLoginEvent += TradeNotify_OnRspLoginEvent;
            TradeNotify.OnDisconnectEvent += TradeNotify_OnDisconnectEvent;
            TradeNotify.OnAPIReadyEvent += TradeNotify_OnAPIReadyEvent;
            TradeNotify.OnQryFinishEvent += TradeNotify_OnQryFinishEvent;
            TradeNotify.OrderUpdateEvent += TradeNotify_OrderUpdateEvent;
            TradeNotify.OnDisconnectEvent += TradeNotify_OnDisconnectEvent;    
        }
        private void ClearEventHandler()
        {
            OnOrderUpdateEvent = null;
            OnAccountNoReadyEvent = null;
            OnRspLoginEvent = null;
            OnDisconnectEvent = null;
        }


        void TradeNotify_OnRspLoginEvent(int errorCode, TapAPITradeLoginRspInfo loginRspInfo)
        {
            if (OnRspLoginEvent != null)
            {
                OnRspLoginEvent(errorCode, loginRspInfo);
            }
        }

        void TradeNotify_OnDisconnectEvent(int reasonCode)
        {
            if (OnDisconnectEvent != null)
            {
                OnDisconnectEvent(reasonCode);
            }
        }

        void TradeNotify_OrderUpdateEvent(TapAPIOrderInfoNotice info)
        {
            if (OnOrderUpdateEvent != null)
            {
                OnOrderUpdateEvent();
            }
        }

        void TradeNotify_OnQryFinishEvent(CTapTradeAPINotify.TradeQryType qryType)
        {
            switch (qryType)
            {
                case CTapTradeAPINotify.TradeQryType.AccountNo:
                    {
                        string[] keys = new string[]{};//DataManager.Trade.Account.Keys.ToArray();
                        TapAPIFundReq req = new TapAPIFundReq();
                        for (int i = 0; i < keys.Length; ++i)
                        {
                            req.AccountNo = keys[i];
                            m_api.QryFund(out m_sessionID, null);
                        }
                        if (OnAccountNoReadyEvent != null)
                        {
                            OnAccountNoReadyEvent();
                        }                        
                    }
                    break;
                case CTapTradeAPINotify.TradeQryType.Order:
                    {
                        if (OnOrderUpdateEvent != null)
                        {
                            OnOrderUpdateEvent();
                        }
                    }
                    break;
                default:
                    break;
            }
 
        }


        void TradeNotify_OnAPIReadyEvent()
        {
            m_api.QryAccount(out m_sessionID, null);
            m_api.QryOrder(out m_sessionID, null);
        }

        public bool Login(string ip, ushort port, string username, string password)
        {
            m_api.SetHostAddress(ip, port);
            TapAPITradeLoginAuth loginInfo = new TapAPITradeLoginAuth();
            loginInfo.UserNo = username;
            loginInfo.Password = password;
            loginInfo.ISDDA = 'N';
            loginInfo.ISModifyPassword = 'N';
            return (0== m_api.Login(loginInfo));
        }
        public void Disconnect()
        {
            m_api.Disconnect();
        }


        public bool InsertOrder(TapAPINewOrder newOrder)
        {
            return (0 == m_api.InsertOrder(out m_sessionID, newOrder));
        }
     
    }
}
