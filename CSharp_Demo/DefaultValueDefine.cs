using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using TapTradeAPI;
using System.ComponentModel;

public class TapAPINewOrder_Def 
{
    char YNFLAG_NO = TapTrade.APIYNFLAG_NO;
    private TapAPINewOrder m_value = null;

    public TapAPINewOrder GetValue()
    {
        return m_value;
    }

    public TapAPINewOrder_Def()
    {
        m_value = new TapAPINewOrder();
        m_value.AddOneIsValid = YNFLAG_NO;
        m_value.CallOrPutFlag = YNFLAG_NO;
        m_value.CallOrPutFlag2 = YNFLAG_NO;
        m_value.IsRiskOrder = YNFLAG_NO;
        m_value.TriggerCondition = YNFLAG_NO;
        m_value.TriggerPriceType = YNFLAG_NO;
        m_value.TacticsType = YNFLAG_NO;        
        m_value.PositionEffect = YNFLAG_NO;        
        m_value.PositionEffect2 = YNFLAG_NO;


        m_value.AccountNo = "APITEST01";
        m_value.ExchangeNo = "CFFEX";
        m_value.CommodityType = TapTrade.TAPI_COMMODITY_TYPE_FUTURES;
        m_value.CommodityNo = "IF";
        m_value.ContractNo = "1501";
        m_value.OrderQty = 1;



        m_value.OrderType = TapTrade.TAPI_ORDER_TYPE_MARKET;
        m_value.OrderSource = TapTrade.TAPI_ORDER_SOURCE_PROGRAM;
        m_value.OrderSide = TapTrade.TAPI_SIDE_SELL;
        m_value.TimeInForce = TapTrade.TAPI_ORDER_TIMEINFORCE_GFD;
        m_value.PositionEffect = TapTrade.TAPI_PositionEffect_COVER;
        m_value.HedgeFlag = TapTrade.TAPI_HEDGEFLAG_T;
    }

    [CategoryAttribute("资金"), DescriptionAttribute("资金账号")] 
    public string AccountNo
    {
        set { m_value.AccountNo = value;}
        get { return m_value.AccountNo; }
    }

    [CategoryAttribute("合约"), DescriptionAttribute("交易所"), DefaultValueAttribute("CFFEX")] 
    public string ExchangeNo
    {
        set { m_value.ExchangeNo = value; }
        get { return m_value.ExchangeNo; }
    }

    [CategoryAttribute("合约"), DescriptionAttribute("商品类型"), DefaultValueAttribute('F')] 
    public char CommodityType
    {
        set { m_value.CommodityType = value; }
        get { return m_value.CommodityType; }
    }
    
    [CategoryAttribute("合约"), DescriptionAttribute("商品代码"), DefaultValueAttribute("IF")] 
    public string CommodityNo
    {
        set { m_value.CommodityNo = value; }
        get { return m_value.CommodityNo; }
    }

    [CategoryAttribute("合约"), DescriptionAttribute("合约代码"), DefaultValueAttribute("1501")] 
    public string ContractNo
    {
        set { m_value.ContractNo = value; }
        get { return m_value.ContractNo; }
    }


    //public string StrikePrice2
    //{
    //    set { m_value.ExchangeNo = value; }
    //    get { return m_value.ExchangeNo; }
    //}

    //public char CallOrPutFlag2
    //{
    //    set { m_value.ExchangeNo = value; }
    //    get { return m_value.ExchangeNo; }
    //}

    //public char OrderType
    //{
    //    set { m_value.ExchangeNo = value; }
    //    get { return m_value.ExchangeNo; }
    //}

    //public char OrderSource
    //{
    //    set { m_value.ExchangeNo = value; }
    //    get { return m_value.ExchangeNo; }
    //}


    //public char TimeInForce
    //{
    //    set { m_value.ExchangeNo = value; }
    //    get { return m_value.ExchangeNo; }
    //}


    //public string ExpireTime
    //{
    //    set { m_value.ExchangeNo = value; }
    //    get { return m_value.ExchangeNo; }
    //}


    //public char IsRiskOrder
    //{
    //    set { m_value.ExchangeNo = value; }
    //    get { return m_value.ExchangeNo; }
    //}

    //public char OrderSide
    //{
    //    set { m_value.ExchangeNo = value; }
    //    get { return m_value.ExchangeNo; }
    //}

    //public char PositionEffect
    //{
    //    set { m_value.ExchangeNo = value; }
    //    get { return m_value.ExchangeNo; }
    //}


    //public char PositionEffect2
    //{
    //    set { m_value.ExchangeNo = value; }
    //    get { return m_value.ExchangeNo; }
    //}

    //public string InquiryNo
    //{
    //    set { m_value.ExchangeNo = value; }
    //    get { return m_value.ExchangeNo; }
    //}

    //public char HedgeFlag
    //{
    //    set { m_value.ExchangeNo = value; }
    //    get { return m_value.ExchangeNo; }
    //}


    //public double OrderPrice
    //{
    //    set { m_value.ExchangeNo = value; }
    //    get { return m_value.ExchangeNo; }
    //}


    //public double OrderPrice2
    //{
    //    set { m_value.ExchangeNo = value; }
    //    get { return m_value.ExchangeNo; }
    //}

    //public double StopPrice
    //{
    //    set { m_value.ExchangeNo = value; }
    //    get { return m_value.ExchangeNo; }
    //}


    //public uint OrderQty
    //{
    //    set { m_value.ExchangeNo = value; }
    //    get { return m_value.ExchangeNo; }
    //}


    //public uint OrderMinQty
    //{
    //    set
    //    {
    //        TapTradePINVOKE.TapAPINewOrder_OrderMinQty_set(swigCPtr, value);
    //    }
    //    get
    //    {
    //        uint ret = TapTradePINVOKE.TapAPINewOrder_OrderMinQty_get(swigCPtr);
    //        return ret;
    //    }
    //}

    //public uint MinClipSize
    //{
    //    set
    //    {
    //        TapTradePINVOKE.TapAPINewOrder_MinClipSize_set(swigCPtr, value);
    //    }
    //    get
    //    {
    //        uint ret = TapTradePINVOKE.TapAPINewOrder_MinClipSize_get(swigCPtr);
    //        return ret;
    //    }
    //}

    //public uint MaxClipSize
    //{
    //    set
    //    {
    //        TapTradePINVOKE.TapAPINewOrder_MaxClipSize_set(swigCPtr, value);
    //    }
    //    get
    //    {
    //        uint ret = TapTradePINVOKE.TapAPINewOrder_MaxClipSize_get(swigCPtr);
    //        return ret;
    //    }
    //}

    //public int RefInt
    //{
    //    set
    //    {
    //        TapTradePINVOKE.TapAPINewOrder_RefInt_set(swigCPtr, value);
    //    }
    //    get
    //    {
    //        int ret = TapTradePINVOKE.TapAPINewOrder_RefInt_get(swigCPtr);
    //        return ret;
    //    }
    //}

    //public string RefString
    //{
    //    set
    //    {
    //        TapTradePINVOKE.TapAPINewOrder_RefString_set(swigCPtr, value);
    //    }
    //    get
    //    {
    //        string ret = TapTradePINVOKE.TapAPINewOrder_RefString_get(swigCPtr);
    //        return ret;
    //    }
    //}

    //public char TacticsType
    //{
    //    set
    //    {
    //        TapTradePINVOKE.TapAPINewOrder_TacticsType_set(swigCPtr, value);
    //    }
    //    get
    //    {
    //        char ret = TapTradePINVOKE.TapAPINewOrder_TacticsType_get(swigCPtr);
    //        return ret;
    //    }
    //}

    //public char TriggerCondition
    //{
    //    set
    //    {
    //        TapTradePINVOKE.TapAPINewOrder_TriggerCondition_set(swigCPtr, value);
    //    }
    //    get
    //    {
    //        char ret = TapTradePINVOKE.TapAPINewOrder_TriggerCondition_get(swigCPtr);
    //        return ret;
    //    }
    //}

    //public char TriggerPriceType
    //{
    //    set
    //    {
    //        TapTradePINVOKE.TapAPINewOrder_TriggerPriceType_set(swigCPtr, value);
    //    }
    //    get
    //    {
    //        char ret = TapTradePINVOKE.TapAPINewOrder_TriggerPriceType_get(swigCPtr);
    //        return ret;
    //    }
    //}

    //public char AddOneIsValid
    //{
    //    set
    //    {
    //        TapTradePINVOKE.TapAPINewOrder_AddOneIsValid_set(swigCPtr, value);
    //    }
    //    get
    //    {
    //        char ret = TapTradePINVOKE.TapAPINewOrder_AddOneIsValid_get(swigCPtr);
    //        return ret;
    //    }
    //}

}

