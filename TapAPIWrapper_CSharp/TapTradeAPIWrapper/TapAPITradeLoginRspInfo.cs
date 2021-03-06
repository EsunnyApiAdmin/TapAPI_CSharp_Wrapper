/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.11
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

namespace TapTradeAPI {

using System;
using System.Runtime.InteropServices;

public class TapAPITradeLoginRspInfo : IDisposable {
  private HandleRef swigCPtr;
  protected bool swigCMemOwn;

  internal TapAPITradeLoginRspInfo(IntPtr cPtr, bool cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = new HandleRef(this, cPtr);
  }

  internal static HandleRef getCPtr(TapAPITradeLoginRspInfo obj) {
    return (obj == null) ? new HandleRef(null, IntPtr.Zero) : obj.swigCPtr;
  }

  ~TapAPITradeLoginRspInfo() {
    Dispose();
  }

  public virtual void Dispose() {
    lock(this) {
      if (swigCPtr.Handle != IntPtr.Zero) {
        if (swigCMemOwn) {
          swigCMemOwn = false;
          TapTradePINVOKE.delete_TapAPITradeLoginRspInfo(swigCPtr);
        }
        swigCPtr = new HandleRef(null, IntPtr.Zero);
      }
      GC.SuppressFinalize(this);
    }
  }

  public string UserNo {
    set {
      TapTradePINVOKE.TapAPITradeLoginRspInfo_UserNo_set(swigCPtr, value);
    } 
    get {
      string ret = TapTradePINVOKE.TapAPITradeLoginRspInfo_UserNo_get(swigCPtr);
      return ret;
    } 
  }

  public int UserType {
    set {
      TapTradePINVOKE.TapAPITradeLoginRspInfo_UserType_set(swigCPtr, value);
    } 
    get {
      int ret = TapTradePINVOKE.TapAPITradeLoginRspInfo_UserType_get(swigCPtr);
      return ret;
    } 
  }

  public string UserName {
    set {
      TapTradePINVOKE.TapAPITradeLoginRspInfo_UserName_set(swigCPtr, value);
    } 
    get {
      string ret = TapTradePINVOKE.TapAPITradeLoginRspInfo_UserName_get(swigCPtr);
      return ret;
    } 
  }

  public string QuoteTempPassword {
    set {
      TapTradePINVOKE.TapAPITradeLoginRspInfo_QuoteTempPassword_set(swigCPtr, value);
    } 
    get {
      string ret = TapTradePINVOKE.TapAPITradeLoginRspInfo_QuoteTempPassword_get(swigCPtr);
      return ret;
    } 
  }

  public string ReservedInfo {
    set {
      TapTradePINVOKE.TapAPITradeLoginRspInfo_ReservedInfo_set(swigCPtr, value);
    } 
    get {
      string ret = TapTradePINVOKE.TapAPITradeLoginRspInfo_ReservedInfo_get(swigCPtr);
      return ret;
    } 
  }

  public string LastLoginIP {
    set {
      TapTradePINVOKE.TapAPITradeLoginRspInfo_LastLoginIP_set(swigCPtr, value);
    } 
    get {
      string ret = TapTradePINVOKE.TapAPITradeLoginRspInfo_LastLoginIP_get(swigCPtr);
      return ret;
    } 
  }

  public uint LastLoginProt {
    set {
      TapTradePINVOKE.TapAPITradeLoginRspInfo_LastLoginProt_set(swigCPtr, value);
    } 
    get {
      uint ret = TapTradePINVOKE.TapAPITradeLoginRspInfo_LastLoginProt_get(swigCPtr);
      return ret;
    } 
  }

  public string LastLoginTime {
    set {
      TapTradePINVOKE.TapAPITradeLoginRspInfo_LastLoginTime_set(swigCPtr, value);
    } 
    get {
      string ret = TapTradePINVOKE.TapAPITradeLoginRspInfo_LastLoginTime_get(swigCPtr);
      return ret;
    } 
  }

  public string LastLogoutTime {
    set {
      TapTradePINVOKE.TapAPITradeLoginRspInfo_LastLogoutTime_set(swigCPtr, value);
    } 
    get {
      string ret = TapTradePINVOKE.TapAPITradeLoginRspInfo_LastLogoutTime_get(swigCPtr);
      return ret;
    } 
  }

  public string TradeDate {
    set {
      TapTradePINVOKE.TapAPITradeLoginRspInfo_TradeDate_set(swigCPtr, value);
    } 
    get {
      string ret = TapTradePINVOKE.TapAPITradeLoginRspInfo_TradeDate_get(swigCPtr);
      return ret;
    } 
  }

  public string LastSettleTime {
    set {
      TapTradePINVOKE.TapAPITradeLoginRspInfo_LastSettleTime_set(swigCPtr, value);
    } 
    get {
      string ret = TapTradePINVOKE.TapAPITradeLoginRspInfo_LastSettleTime_get(swigCPtr);
      return ret;
    } 
  }

  public string StartTime {
    set {
      TapTradePINVOKE.TapAPITradeLoginRspInfo_StartTime_set(swigCPtr, value);
    } 
    get {
      string ret = TapTradePINVOKE.TapAPITradeLoginRspInfo_StartTime_get(swigCPtr);
      return ret;
    } 
  }

  public string InitTime {
    set {
      TapTradePINVOKE.TapAPITradeLoginRspInfo_InitTime_set(swigCPtr, value);
    } 
    get {
      string ret = TapTradePINVOKE.TapAPITradeLoginRspInfo_InitTime_get(swigCPtr);
      return ret;
    } 
  }

  public TapAPITradeLoginRspInfo() : this(TapTradePINVOKE.new_TapAPITradeLoginRspInfo__SWIG_0(), true) {
  }

  public TapAPITradeLoginRspInfo(TapAPITradeLoginRspInfo other) : this(TapTradePINVOKE.new_TapAPITradeLoginRspInfo__SWIG_1(TapAPITradeLoginRspInfo.getCPtr(other)), true) {
    if (TapTradePINVOKE.SWIGPendingException.Pending) throw TapTradePINVOKE.SWIGPendingException.Retrieve();
  }

}

}
