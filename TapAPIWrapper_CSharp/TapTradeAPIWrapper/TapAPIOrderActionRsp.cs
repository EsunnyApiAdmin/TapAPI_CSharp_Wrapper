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

public class TapAPIOrderActionRsp : IDisposable {
  private HandleRef swigCPtr;
  protected bool swigCMemOwn;

  internal TapAPIOrderActionRsp(IntPtr cPtr, bool cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = new HandleRef(this, cPtr);
  }

  internal static HandleRef getCPtr(TapAPIOrderActionRsp obj) {
    return (obj == null) ? new HandleRef(null, IntPtr.Zero) : obj.swigCPtr;
  }

  ~TapAPIOrderActionRsp() {
    Dispose();
  }

  public virtual void Dispose() {
    lock(this) {
      if (swigCPtr.Handle != IntPtr.Zero) {
        if (swigCMemOwn) {
          swigCMemOwn = false;
          TapTradePINVOKE.delete_TapAPIOrderActionRsp(swigCPtr);
        }
        swigCPtr = new HandleRef(null, IntPtr.Zero);
      }
      GC.SuppressFinalize(this);
    }
  }

  public char ActionType {
    set {
      TapTradePINVOKE.TapAPIOrderActionRsp_ActionType_set(swigCPtr, value);
    } 
    get {
      char ret = TapTradePINVOKE.TapAPIOrderActionRsp_ActionType_get(swigCPtr);
      return ret;
    } 
  }

  public TapAPIOrderInfo OrderInfo {
    set {
      TapTradePINVOKE.TapAPIOrderActionRsp_OrderInfo_set(swigCPtr, TapAPIOrderInfo.getCPtr(value));
    } 
    get {
      IntPtr cPtr = TapTradePINVOKE.TapAPIOrderActionRsp_OrderInfo_get(swigCPtr);
      TapAPIOrderInfo ret = (cPtr == IntPtr.Zero) ? null : new TapAPIOrderInfo(cPtr, false);
      return ret;
    } 
  }

  public TapAPIOrderActionRsp() : this(TapTradePINVOKE.new_TapAPIOrderActionRsp__SWIG_0(), true) {
  }

  public TapAPIOrderActionRsp(TapAPIOrderActionRsp other) : this(TapTradePINVOKE.new_TapAPIOrderActionRsp__SWIG_1(TapAPIOrderActionRsp.getCPtr(other)), true) {
    if (TapTradePINVOKE.SWIGPendingException.Pending) throw TapTradePINVOKE.SWIGPendingException.Retrieve();
  }

}

}
