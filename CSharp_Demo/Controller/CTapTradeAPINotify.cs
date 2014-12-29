using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using TapTradeAPI;

namespace TapAPITest_GUI
{

    class CTapTradeAPINotify : ITapTradeAPINotify
    {
       
        public enum TradeQryType
        {
            AccountNo,
            Fund,
            Order
        }

        public delegate void OnQryFinishHandler(TradeQryType qryType);
        public event OnQryFinishHandler OnQryFinishEvent;
        public override void OnConnect()
        {
        }

        public delegate void OnRspLoginEventHandler(int errorCode, TapAPITradeLoginRspInfo loginRspInfo);
        public event OnRspLoginEventHandler OnRspLoginEvent;
        public override void OnRspLogin(int errorCode, TapAPITradeLoginRspInfo loginRspInfo)
        {
            if (OnRspLoginEvent != null)
            {
                OnRspLoginEvent(errorCode, loginRspInfo);
            }
        }

        public delegate void OnAPIReadyEventHandler();
        public event OnAPIReadyEventHandler OnAPIReadyEvent;
        public override void OnAPIReady()
        {
            if (OnAPIReadyEvent != null)
            {
                OnAPIReadyEvent(); 
            }
        }

        public delegate void OnDisconnectEventHandler(int reasonCode);
        public event OnDisconnectEventHandler OnDisconnectEvent;
        public override void OnDisconnect(int reasonCode)
        {
            if (OnDisconnectEvent != null)
            {
                OnDisconnectEvent(reasonCode);
            }
        }

        public override void OnRspChangePassword(uint sessionID, int errorCode)
        {
            //throw new NotImplementedException();
        }

        public override void OnRspSetReservedInfo(uint sessionID, int errorCode, string info)
        {
            //throw new NotImplementedException();
        }

        public override void OnRspQryAccount(uint sessionID, uint errorCode, char isLast, TapAPIAccountInfo info)
        {
            if (0 == errorCode && null != info)
            {
                DataManager.Trade.AccountMgr.AddAccountNo(info.AccountNo);
            }
            if (null != OnQryFinishEvent && isLast == TapTrade.APIYNFLAG_YES)
            {
                OnQryFinishEvent(TradeQryType.AccountNo);
            }
        }

        public override void OnRspQryFund(uint sessionID, int errorCode, char isLast, TapAPIFundData info)
        {
            if (0 == errorCode && null != info)
            {
                //
            }
            if (null != OnQryFinishEvent && isLast == TapTrade.APIYNFLAG_YES)
            {
                OnQryFinishEvent(TradeQryType.Fund);
            }
        }

        public delegate void FundUpdateHandler(TapAPIFundData info);
        public event FundUpdateHandler FundUpdateEvent;
        public override void OnRtnFund(TapAPIFundData info)
        {
            if (null != info)
            {
                //if (DataManager.Trade.Account.ContainsKey(info.AccountNo))
                //{
                //    DataManager.Trade.Account[info.AccountNo] = new TapAPIFundData(info);
                //}                
            }
            if (null != FundUpdateEvent)
            {
                FundUpdateEvent(info);
            }
        }

        public override void OnRspQryExchange(uint sessionID, int errorCode, char isLast, TapAPIExchangeInfo info)
        {
            //throw new NotImplementedException();
        }

        public override void OnRspQryCommodity(uint sessionID, int errorCode, char isLast, TapAPICommodityInfo info)
        {
            //throw new NotImplementedException();
        }

        public override void OnRspQryContract(uint sessionID, int errorCode, char isLast, TapAPITradeContractInfo info)
        {
            //throw new NotImplementedException();
        }

        public override void OnRtnContract(TapAPITradeContractInfo info)
        {
            //throw new NotImplementedException();
        }

        public delegate void OrderUpdateHandler(TapAPIOrderInfoNotice info);
        public event OrderUpdateHandler OrderUpdateEvent;
        public override void OnRtnOrder(TapAPIOrderInfoNotice info)
        {
            Console.WriteLine("[OnRtnOrder]");
            if(null == info || null == info.OrderInfo) return;
            //这里是简化处理
            TapAPIOrderInfoNotice newInfo = new TapAPIOrderInfoNotice(info);
            newInfo.OrderInfo = new TapAPIOrderInfo(info.OrderInfo);
            DataManager.Trade.OrderInfoMgr.UpdateOrAdd(newInfo);
            if (null != OrderUpdateEvent)
            {
                OrderUpdateEvent(info);
            }
        }

        public override void OnRspOrderAction(uint sessionID, uint errorCode, TapAPIOrderActionRsp info)
        {
            //throw new NotImplementedException();
        }

        public override void OnRspQryOrder(uint sessionID, int errorCode, char isLast, TapAPIOrderInfo info)
        {
            if (null != info )
            {
                TapTradeAPI.TapAPIOrderInfoNotice notice = new TapTradeAPI.TapAPIOrderInfoNotice();
                notice.SessionID = sessionID;
                notice.ErrorCode = (uint)errorCode;
                notice.OrderInfo = info;            
                DataManager.Trade.OrderInfoMgr.UpdateOrAdd(notice);
            }

            if (TapTrade.APIYNFLAG_YES == isLast && null != OnQryFinishEvent)
            {
                OnQryFinishEvent(TradeQryType.Order);
            }
        }

        public override void OnRspQryOrderProcess(uint sessionID, int errorCode, char isLast, TapAPIOrderInfo info)
        {
            //throw new NotImplementedException();
        }

        public override void OnRspQryFill(uint sessionID, int errorCode, char isLast, TapAPIFillInfo info)
        {
            //throw new NotImplementedException();
        }

        public override void OnRtnFill(TapAPIFillInfo info)
        {
            //throw new NotImplementedException();
        }

        public override void OnRspQryPosition(uint sessionID, int errorCode, char isLast, TapAPIPositionInfo info)
        {
            //throw new NotImplementedException();
        }

        public override void OnRtnPosition(TapAPIPositionInfo info)
        {
            //throw new NotImplementedException();
        }

        public override void OnRspQryClose(uint sessionID, int errorCode, char isLast, TapAPICloseInfo info)
        {
            //throw new NotImplementedException();
        }

        public override void OnRtnClose(TapAPICloseInfo info)
        {
            //throw new NotImplementedException();
        }

        public override void OnRtnPositionProfit(TapAPIPositionProfitNotice info)
        {
            //throw new NotImplementedException();
        }

        public override void OnRspQryDeepQuote(uint sessionID, int errorCode, char isLast, TapAPIDeepQuoteQryRsp info)
        {
            //throw new NotImplementedException();
        }
    }
}
