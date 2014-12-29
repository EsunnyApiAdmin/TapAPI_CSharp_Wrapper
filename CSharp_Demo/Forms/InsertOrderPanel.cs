using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Drawing;
using System.Data;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace TapAPITest_GUI
{
    public partial class InsertOrderPanel : UserControl
    {
        public class InsertOrderParams
        {
            public string AccountNo;
            public string ContractID;
            public double OrderPrice;
            public uint OrderQty;
            public char OrderType;
            public char OrderSide;
            public char OpenCloseMode;
        }
        public delegate void InsertOrderHandler(InsertOrderParams order);
        public event InsertOrderHandler InsertOrderClicked;

        public InsertOrderPanel()
        {
            InitializeComponent();
        }
        
        private void button1_Click(object sender, EventArgs e)
        {
            InsertOrderParams order = new InsertOrderParams();
            order.AccountNo = textAccountNo.Text;
            order.ContractID = textContractID.Text;
            try
            {
                order.OrderPrice = double.Parse(textPrice.Text);
                order.OrderQty = uint.Parse(textQty.Text);
            }
            catch
            {
                MessageBox.Show("价格或数量解析错误");
                return;
            }
            order.OrderType = GetOrderType();
            order.OrderSide = GetOrderSide();
            order.OpenCloseMode = GetOpenCloseMode();
            if (null != InsertOrderClicked)
            {
                InsertOrderClicked(order);
            }
        }

        private char GetOrderType()
        {
            switch (cbOrderType.Text)
            {
                case "市价": return TapTradeAPI.TapTrade.TAPI_ORDER_TYPE_MARKET;
                case "限价": return TapTradeAPI.TapTrade.TAPI_ORDER_TYPE_LIMIT;
                default: return 'N';
            }
        }

        private char GetOrderSide()
        {
            switch (cbOrderSide.Text)
            {
                case "买": return TapTradeAPI.TapTrade.TAPI_SIDE_BUY;
                case "卖": return TapTradeAPI.TapTrade.TAPI_SIDE_SELL;
                default: return 'N';
            }
        }
        private char GetOpenCloseMode()
        {
            switch (cbOpenCloseMode.Text)
            {
                case "开仓": return TapTradeAPI.TapTrade.TAPI_PositionEffect_OPEN;
                case "平仓": return TapTradeAPI.TapTrade.TAPI_PositionEffect_COVER;
                default: return 'N';
            }
        }

        public void UpdateAccountNoList(string[] AccountNoList)
        {
            AutoCompleteStringCollection collection = new AutoCompleteStringCollection();
            collection.AddRange(AccountNoList);
            textAccountNo.AutoCompleteCustomSource = collection;
        }

        public void UpdateContractIDList(string[] ContractIDList)
        {
            AutoCompleteStringCollection collection = new AutoCompleteStringCollection();
            collection.AddRange(ContractIDList);
            textContractID.AutoCompleteCustomSource = collection;
        }
    }
}
