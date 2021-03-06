/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.11
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

namespace TapQuoteAPI {

using System;
using System.Runtime.InteropServices;

public class ITapQuoteAPI : IDisposable {
  private HandleRef swigCPtr;
  protected bool swigCMemOwn;

  internal ITapQuoteAPI(IntPtr cPtr, bool cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = new HandleRef(this, cPtr);
  }

  internal static HandleRef getCPtr(ITapQuoteAPI obj) {
    return (obj == null) ? new HandleRef(null, IntPtr.Zero) : obj.swigCPtr;
  }

  ~ITapQuoteAPI() {
    Dispose();
  }

  public virtual void Dispose() {
    lock(this) {
      if (swigCPtr.Handle != IntPtr.Zero) {
        if (swigCMemOwn) {
          swigCMemOwn = false;
          TapQuotePINVOKE.delete_ITapQuoteAPI(swigCPtr);
        }
        swigCPtr = new HandleRef(null, IntPtr.Zero);
      }
      GC.SuppressFinalize(this);
    }
  }

  public virtual int SetAPINotify(ITapQuoteAPINotify apiNotify) {
    int ret = TapQuotePINVOKE.ITapQuoteAPI_SetAPINotify(swigCPtr, ITapQuoteAPINotify.getCPtr(apiNotify));
    return ret;
  }

  public virtual int SetHostAddress(string IP, ushort port) {
    int ret = TapQuotePINVOKE.ITapQuoteAPI_SetHostAddress(swigCPtr, IP, port);
    return ret;
  }

  public virtual int Login(TapAPIQuoteLoginAuth loginAuth) {
    int ret = TapQuotePINVOKE.ITapQuoteAPI_Login(swigCPtr, TapAPIQuoteLoginAuth.getCPtr(loginAuth));
    return ret;
  }

  public virtual int Disconnect() {
    int ret = TapQuotePINVOKE.ITapQuoteAPI_Disconnect(swigCPtr);
    return ret;
  }

  public virtual int ChangePassword(out uint sessionID, TapAPIChangePasswordReq req) {
    int ret = TapQuotePINVOKE.ITapQuoteAPI_ChangePassword(swigCPtr, out sessionID, TapAPIChangePasswordReq.getCPtr(req));
    return ret;
  }

  public virtual int QryExchange(out uint sessionID) {
    int ret = TapQuotePINVOKE.ITapQuoteAPI_QryExchange(swigCPtr, out sessionID);
    return ret;
  }

  public virtual int QryCommodity(out uint sessionID) {
    int ret = TapQuotePINVOKE.ITapQuoteAPI_QryCommodity(swigCPtr, out sessionID);
    return ret;
  }

  public virtual int QryTradingTimeBucketOfCommodity(out uint sessionID, TapAPICommodity qryReq) {
    int ret = TapQuotePINVOKE.ITapQuoteAPI_QryTradingTimeBucketOfCommodity(swigCPtr, out sessionID, TapAPICommodity.getCPtr(qryReq));
    return ret;
  }

  public virtual int QryContract(out uint sessionID, TapAPICommodity qryReq) {
    int ret = TapQuotePINVOKE.ITapQuoteAPI_QryContract(swigCPtr, out sessionID, TapAPICommodity.getCPtr(qryReq));
    return ret;
  }

  public virtual int SubscribeQuote(out uint sessionID, TapAPIContract contract) {
    int ret = TapQuotePINVOKE.ITapQuoteAPI_SubscribeQuote(swigCPtr, out sessionID, TapAPIContract.getCPtr(contract));
    return ret;
  }

  public virtual int UnSubscribeQuote(out uint sessionID, TapAPIContract contract) {
    int ret = TapQuotePINVOKE.ITapQuoteAPI_UnSubscribeQuote(swigCPtr, out sessionID, TapAPIContract.getCPtr(contract));
    return ret;
  }

  public virtual int QryHisQuote(out uint sessionID, TapAPIHisQuoteQryReq qryReq) {
    int ret = TapQuotePINVOKE.ITapQuoteAPI_QryHisQuote(swigCPtr, out sessionID, TapAPIHisQuoteQryReq.getCPtr(qryReq));
    return ret;
  }

  public virtual int GetServerTime(SWIGTYPE_p_a_20__char datetime) {
    int ret = TapQuotePINVOKE.ITapQuoteAPI_GetServerTime(swigCPtr, SWIGTYPE_p_a_20__char.getCPtr(datetime));
    return ret;
  }

  public virtual TapAPIQuoteWhole GetFullQuote(TapAPIContract contract) {
    IntPtr cPtr = TapQuotePINVOKE.ITapQuoteAPI_GetFullQuote(swigCPtr, TapAPIContract.getCPtr(contract));
    TapAPIQuoteWhole ret = (cPtr == IntPtr.Zero) ? null : new TapAPIQuoteWhole(cPtr, false);
    return ret;
  }

}

}
