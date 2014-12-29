using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.ComponentModel;

namespace TapAPITest_GUI
{
    
    public class DataManager
    {
        static public QuoteDataManager Quote = new QuoteDataManager();
        static public TradeDataManager Trade = new TradeDataManager();
    }

    public class QuoteDataManager
    {
        public ContractManager ContractMgr;
        public QuoteWholeManager QuoteWholeMgr;
        public QuoteDataManager()
        {
            ContractMgr = new ContractManager();
            QuoteWholeMgr = new QuoteWholeManager();
        }

        public static string MakeContractID(TapQuoteAPI.TapAPIContract contract)
        {
            string strContractID = contract.Commodity.ExchangeNo;
            strContractID += "_" + contract.Commodity.CommodityType;
            strContractID += "_" + contract.Commodity.CommodityNo;
            strContractID += "_" + contract.ContractNo1;
            strContractID += "_" + contract.CallOrPutFlag1;
            strContractID += "_" + contract.StrikePrice1;
            strContractID += "_" + contract.ContractNo2;
            strContractID += "_" + contract.CallOrPutFlag2;
            strContractID += "_" + contract.StrikePrice2;
            return strContractID;
        }

        public class GUI_Contract
        {
            public GUI_Contract(TapQuoteAPI.TapAPIQuoteContractInfo ct)
            {
                Contract = new TapQuoteAPI.TapAPIQuoteContractInfo(ct);
                _ContractID = MakeContractID(ct.Contract);
                _IsSubscribed = false;
            }

            public TapQuoteAPI.TapAPIQuoteContractInfo Contract;
            private string _ContractID;
            public string ContractID
            {
                private set { _ContractID = value; }
                get { return _ContractID; }
            }

            private bool _IsSubscribed;
            public bool IsSubscribed
            {
                set { _IsSubscribed = value; }
                get { return _IsSubscribed; }
            }

        }
        public class ContractManager
        {
            public Dictionary<string, GUI_Contract> ContractDict;
            public SortedSet<string> ExchangeSet;
            public ContractManager()
            {
                ContractDict = new Dictionary<string, GUI_Contract>();
                ExchangeSet = new SortedSet<string>();
            }

            public void AddContract(TapQuoteAPI.TapAPIQuoteContractInfo ct)
            {
                GUI_Contract newContract = new GUI_Contract(ct);
                if (ContractDict.ContainsKey(newContract.ContractID))
                {
                    ContractDict[newContract.ContractID] = newContract;
                }
                else 
                {
                    ContractDict.Add(newContract.ContractID, newContract);
                }
                ExchangeSet.Add(newContract.Contract.Contract.Commodity.ExchangeNo);
            }
            public void OnSubscribed(string contractID)
            {
                if (ContractDict.ContainsKey(contractID))
                {
                    ContractDict[contractID].IsSubscribed = true;
                }
            }
            public void OnUnSubscribed(string contractID)
            {
                if (ContractDict.ContainsKey(contractID))
                {
                    ContractDict[contractID].IsSubscribed = false;
                }
            }

            public TapQuoteAPI.TapAPIContract GetContractByID(string contractID)
            {
                if (ContractDict.ContainsKey(contractID))
                {
                    return ContractDict[contractID].Contract.Contract;
                }
                else
                {
                    return null;
                }
            }

            public List<string> GetAllContractList()
            {
                return ContractDict.Keys.ToList();
            }



            public List<string> GetSubscribedContractList()
            {
                List<string> l = new List<string>();
                foreach (KeyValuePair<string, GUI_Contract> kv in ContractDict)
                {
                    if (kv.Value.IsSubscribed)
                    {
                        l.Add(kv.Key);
                    }
                }
                return l;
            }
            public List<string> GetUnSubscribedContractList(string ExchangeNo = "")
            {
                List<string> l = new List<string>();
                foreach (KeyValuePair<string, GUI_Contract> kv in ContractDict)
                {
                    if (!kv.Value.IsSubscribed)
                    {
                        if (0 == ExchangeNo.Length || kv.Key.StartsWith(ExchangeNo + "_"))
                        {
                            l.Add(kv.Key);
                        }
                    }
                }
                return l;
            }
        }

        public class QuoteWholeManager
        {
            public class GUI_Quote
            {
                private TapQuoteAPI.TapAPIQuoteWhole _QuoteWhole;
                public GUI_Quote(TapQuoteAPI.TapAPIQuoteWhole quoteWhole)
                {
                    _QuoteWhole = new TapQuoteAPI.TapAPIQuoteWhole(quoteWhole);
                    _ContractID = MakeContractID(_QuoteWhole.Contract);
                }      

                private string _ContractID;
                public string ContractID
                {
                    private set { ContractID = value; }
                    get { return _ContractID; }
                }


                [DisplayName("最新价")]
                public double QLastPrice
                {
                    get { return _QuoteWhole.QLastPrice; }
                }

                [DisplayName("买价")]
                public double QBidPrice
                {
                    get { return _QuoteWhole.GetQBidPrice(0); }
                }
                [DisplayName("买量")]
                public double QBidQty
                {
                    get { return _QuoteWhole.GetQBidQty(0); }
                }
                [DisplayName("卖价")]
                public double QAskPrice
                {
                    get { return _QuoteWhole.GetQAskPrice(0); }
                }
                [DisplayName("卖量")]
                public double QAskQty
                {
                    get { return _QuoteWhole.GetQAskQty(0); }
                }
                [DisplayName("开盘价")]
                public double QOpeningPrice
                {
                    get { return _QuoteWhole.QOpeningPrice; }
                }
                [DisplayName("最高价")]
                public double QHighPrice
                {
                    get { return _QuoteWhole.QHighPrice; }
                }
                [DisplayName("最低价")]
                public double QLowPrice
                {
                    get { return _QuoteWhole.QLowPrice; }
                }

                [DisplayName("持仓量")]
                public ulong QPositionQty
                {
                    get { return _QuoteWhole.QPositionQty; }
                }

                [DisplayName("最新成交量")]
                public ulong QLastQty
                {
                    get { return _QuoteWhole.QLastQty; }
                }
                [DisplayName("涨停价")]
                public double QLimitUpPrice
                {
                    get { return _QuoteWhole.QLimitUpPrice; }
                }
                [DisplayName("跌停价")]
                public double QLimitDownPrice
                {
                    get { return _QuoteWhole.QLimitDownPrice; }
                }
                //[DisplayName("昨收盘价")]
                //public double QPreClosingPrice
                //{
                //    get { return _QuoteWhole.QPreClosingPrice; }
                //}

                //[DisplayName("昨结算价")]
                //public double QPreSettlePrice
                //{
                //    get { return _QuoteWhole.QPreSettlePrice; }
                //}

                //[DisplayName("昨持仓量")]
                //public ulong QPrePositionQty
                //{
                //    get { return _QuoteWhole.QPrePositionQty; }
                //}

                [DisplayName("时间戳")]
                public string DateTimeStamp
                {
                    get { return _QuoteWhole.DateTimeStamp; }
                }

                //[DisplayName("当日总成交量")]
                //public ulong QTotalQty
                //{
                //    get { return _QuoteWhole.QTotalQty; }
                //}
                //[DisplayName("当日成交金额")]
                //public double QTotalTurnover
                //{
                //    get { return _QuoteWhole.QTotalTurnover; }
                //}

                //[DisplayName("均价")]
                //public double QAveragePrice
                //{
                //    get { return _QuoteWhole.QAveragePrice; }
                //}
                //[DisplayName("收盘价")]
                //public double QClosingPrice
                //{
                //    get { return _QuoteWhole.QClosingPrice; }
                //}
                //[DisplayName("结算价")]
                //public double QSettlePrice
                //{
                //    get { return _QuoteWhole.QSettlePrice; }
                //}

            }
            public Dictionary<string,GUI_Quote> QuoteDict;

            public QuoteWholeManager()
            {
                QuoteDict = new Dictionary<string, GUI_Quote>();
            }

            public void AddQuote(TapQuoteAPI.TapAPIQuoteWhole quoteWhole)
            {
                string key = MakeContractID(quoteWhole.Contract);
                if (!QuoteDict.ContainsKey(key))
                {
                    GUI_Quote newQuote = new GUI_Quote(quoteWhole);
                    QuoteDict.Add(newQuote.ContractID, newQuote);
                }
                else
                {
                    QuoteDict[key] = new GUI_Quote(quoteWhole);
                }

            }

            public void UpdateQuote(TapQuoteAPI.TapAPIQuoteWhole quoteWhole)
            {
                string key = MakeContractID(quoteWhole.Contract);
                if (QuoteDict.ContainsKey(key))
                {
                    QuoteDict[key] = new GUI_Quote(quoteWhole);
                }
            }

            public void RemoveQuote(TapQuoteAPI.TapAPIContract cont)
            {
                string key = MakeContractID(cont);
                if (QuoteDict.ContainsKey(key))
                {
                    QuoteDict.Remove(key);
                }
            }

            public bool IsQuoteSubscribed(string contractID)
            {
                return QuoteDict.ContainsKey(contractID);
            }

        }
    }

    public class TradeDataManager
    {

        // AccountNo, FundData
        public AccountManager AccountMgr;
        public OrderInfoManager OrderInfoMgr;
        public TradeDataManager()
        {
            AccountMgr = new AccountManager();
            OrderInfoMgr = new OrderInfoManager();
        }

        public class AccountManager
        {
            private SortedSet<string> m_AccountSet;
            public AccountManager()
            {
                m_AccountSet = new SortedSet<string>();
            }
            public void AddAccountNo(string AccountNo)
            {
                m_AccountSet.Add(AccountNo);
            }
            public void Reset()
            {
                m_AccountSet.Clear();
            }
            public string[] GetAllAccountNo()
            {
                return m_AccountSet.ToArray();
            }
        }

        public class GUI_OrderInfo : IComparable
        {
            private TapTradeAPI.TapAPIOrderInfoNotice _OrderInfoNotice;
            public GUI_OrderInfo(TapTradeAPI.TapAPIOrderInfoNotice order)
            {
                _OrderInfoNotice = new TapTradeAPI.TapAPIOrderInfoNotice();
                _OrderInfoNotice.ErrorCode = order.ErrorCode;
                _OrderInfoNotice.SessionID = order.SessionID;
                _OrderInfoNotice.OrderInfo = new TapTradeAPI.TapAPIOrderInfo(order.OrderInfo);
            }

            public int CompareTo(object obj)
            {   
                try
                {
                    GUI_OrderInfo info = obj as GUI_OrderInfo;
                    return -this._OrderInfoNotice.OrderInfo.OrderUpdateTime.CompareTo(info._OrderInfoNotice.OrderInfo.OrderUpdateTime);      
                }
                catch (Exception ex) { throw new Exception(ex.Message);}
            }

            [DisplayName("委托编号")]
            public string OrderNo
            {
                get { return _OrderInfoNotice.OrderInfo.OrderNo; }
            }
          
            [DisplayName("反馈信息")]
            public string ErrorText
            {
                get 
                {
                    if(null == _OrderInfoNotice.OrderInfo)
                    {
                        if(0 == _OrderInfoNotice.ErrorCode)
                        {
                            return "成功";
                        }
                        else
                        {
                            return _OrderInfoNotice.ErrorCode.ToString();
                        }
                    }else
                    {
                        if(0 == _OrderInfoNotice.ErrorCode)
                        {
                            if (0 == _OrderInfoNotice.OrderInfo.ErrorCode)
                            {
                                return "成功";
                            }
                        }  
                        else
                        {
                            if(0 == _OrderInfoNotice.OrderInfo.ErrorCode)
                            {
                                return _OrderInfoNotice.ErrorCode.ToString();
                            }
                        }
                        string strErrMsg = _OrderInfoNotice.OrderInfo.ErrorCode.ToString();
                        if (_OrderInfoNotice.OrderInfo.ErrorText.Length > 0)
                        {
                            strErrMsg += ":" + _OrderInfoNotice.OrderInfo.ErrorText;
                        }
                        return strErrMsg;                        
                    }
                }
            }

            [DisplayName("资金账号")]
            public string AccountNo
            {
                get { return _OrderInfoNotice.OrderInfo.AccountNo; }
            }

            [DisplayName("订单状态")]
            public string OrderState
            {
                get
                {
                    switch (_OrderInfoNotice.OrderInfo.OrderState)
                    {
                        case '0': return "终端提交";
                        case '1': return "已受理";
                        case '2': return "策略待触发";
                        case '3': return "交易所待触发";
                        case '4': return "已排队";
                        case '5': return "部分成交";
                        case '6': return "完全成交";
                        case '7': return "待撤消";
                        case '8': return "待修改";
                        case '9': return "完全撤单";
                        case 'A': return "已撤余单";
                        case 'B': return "指令失败";
                        case 'C': return "策略删除";
                        case 'D': return "已挂起";
                        case 'E': return "到期删除";
                        case 'F': return "已生效";
                        case 'G': return "已申请";
                        default:
                            return "未知";
                    }
                }
            }

            [DisplayName("合约")]
            public string ContractID
            {
                get
                {
                    string strContractID = _OrderInfoNotice.OrderInfo.ExchangeNo;
                    strContractID += "_" + _OrderInfoNotice.OrderInfo.CommodityType;
                    strContractID += "_" + _OrderInfoNotice.OrderInfo.CommodityNo;
                    strContractID += "_" + _OrderInfoNotice.OrderInfo.ContractNo;
                    strContractID += "_" + _OrderInfoNotice.OrderInfo.CallOrPutFlag;
                    strContractID += "_" + _OrderInfoNotice.OrderInfo.StrikePrice;
                    strContractID += "_" + _OrderInfoNotice.OrderInfo.ContractNo2;
                    strContractID += "_" + _OrderInfoNotice.OrderInfo.CallOrPutFlag2;
                    strContractID += "_" + _OrderInfoNotice.OrderInfo.StrikePrice2;
                    return strContractID;
                }
            }

            [DisplayName("买卖")]
            public string OrderSide
            {
                get
                {
                    switch (_OrderInfoNotice.OrderInfo.OrderSide)
                    {
                        case 'B': return "买";
                        case 'S': return "卖";
                        default: return "未知";
                    }
                }
            }

            [DisplayName("开平")]
            public string PositionEffect
            {
                get
                {
                    switch (_OrderInfoNotice.OrderInfo.PositionEffect)
                    {
                        case 'N': return "不分开平";
                        case 'O': return "开仓";
                        case 'C': return "平仓";
                        case 'T': return "平当日";
                        default: return "未知";
                    }
                }
            }

            [DisplayName("委托价")]
            public double OrderPrice
            {
                get { return _OrderInfoNotice.OrderInfo.OrderPrice; }
            }

            [DisplayName("委托量")]
            public double OrderQty
            {
                get { return _OrderInfoNotice.OrderInfo.OrderQty; }
            }

            [DisplayName("订单类型")]
            public string OrderType
            {
                get
                {
                    switch (_OrderInfoNotice.OrderInfo.OrderType)
                    {
                        case '1': return "市价";
                        case '2': return "限价";
                        case '3': return "市价止损";
                        case '4': return "限价止损";
                        case '5': return "期权行权";
                        case '6': return "期权弃权";
                        case '7': return "询价";
                        case '8': return "应价";
                        case '9': return "互换";
                        default: return "未知";
                    }
                }
            }

            [DisplayName("成交均价")]
            public double OrderMatchPrice
            {
                get { return _OrderInfoNotice.OrderInfo.OrderMatchPrice; }
            }

            [DisplayName("成交量")]
            public ulong OrderMatchQty
            {
                get { return _OrderInfoNotice.OrderInfo.OrderMatchQty; }
            }

            [DisplayName("更新时间")]
            public string UpdateTime
            {
                get { return _OrderInfoNotice.OrderInfo.OrderUpdateTime; }
            }
        }
        public class OrderInfoManager
        {
            public Dictionary<string, GUI_OrderInfo> OrderDict;
            public OrderInfoManager()
            {
                OrderDict = new Dictionary<string, GUI_OrderInfo>();
            }

            public void UpdateOrAdd(TapTradeAPI.TapAPIOrderInfoNotice order)
            {
                if (null != order.OrderInfo && order.OrderInfo.OrderNo.Length > 0)
                {
                    if (OrderDict.ContainsKey(order.OrderInfo.OrderNo))
                    {
                        OrderDict[order.OrderInfo.OrderNo] = new GUI_OrderInfo(order);
                    }
                    else 
                    {
                        OrderDict.Add(order.OrderInfo.OrderNo, new GUI_OrderInfo(order));
                    }
                }
            }
        }


    }

}
