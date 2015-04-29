#ifndef TAP_API_ERROR_H
#define TAP_API_ERROR_H

//=============================================================================
/**
 *	\addtogroup G_ERR_INNER_API		TapAPI内部返回的错误码定义。
 *	@{
 */
//=============================================================================
//! 成功
const int TAPIERROR_SUCCEED                                            = 0;
//! 连接服务失败
const int TAPIERROR_ConnectFail                                        = -1;
//! 链路认证失败
const int TAPIERROR_LinkAuthFail                                       = -2;
//! 主机地址不可用
const int TAPIERROR_HostUnavailable                                    = -3;
//! 发送数据错误
const int TAPIERROR_SendDataError                                      = -4;
//! 测试编号不合法
const int TAPIERROR_TestIDError                                        = -5;
//! 没准备好测试网络
const int TAPIERROR_NotReadyTestNetwork                                = -6;
//! 当前网络测试还没结束
const int TAPIERROR_CurTestNotOver                                     = -7;
//! 没用可用的接入前置
const int TAPIERROR_NOFrontAvailable                                   = -8;
//! 数据路径不可用
const int TAPIERROR_DataPathAvaiable                                   = -9;
//! 重复登录
const int TAPIERROR_RepeatLogin                                        = -10;
//! 内部错误	
const int TAPIERROR_InnerError                                         = -11;
//! 上一次请求还没有结束	
const int TAPIERROR_LastReqNotFinish                                   = -12;
//! 输入参数非法	
const int TAPIERROR_InputValueError                                    = -13;
//! 授权码不合法	
const int TAPIERROR_AuthCode_Invalid                                   = -14;
//! 授权码超期	
const int TAPIERROR_AuthCode_Expired                                   = -15;
//! 授权码类型不匹配	
const int TAPIERROR_AuthCode_TypeNotMatch                              = -16;
//! API还没有准备好
const int TAPIERROR_API_NotReady                                       = -17;
//! UDP端口监听失败
const int TAPIERROR_UDP_LISTEN_FAILED                                  = -18;
//! UDP正在监听
const int TAPIERROR_UDP_LISTENING                                      = -19;
//! 接口未实现
const int TAPIERROR_NotImplemented                                     = -20;
/** @}*/


//=============================================================================
/**
 *	\addtogroup G_ERR_INPUT_CHECK		输入参数检查错误
 *	@{
 */
//=============================================================================
//! 输入数据为NULL
const int TAPIERROR_INPUTERROR_NULL                                    = -10000;
//! 输入错误的:TAPIYNFLAG
const int TAPIERROR_INPUTERROR_TAPIYNFLAG                              = -10001;
//! 输入错误的:TAPILOGLEVEL
const int TAPIERROR_INPUTERROR_TAPILOGLEVEL                            = -10002;
//! 输入错误的:TAPICommodityType
const int TAPIERROR_INPUTERROR_TAPICommodityType                       = -10003;
//! 输入错误的:TAPICallOrPutFlagType
const int TAPIERROR_INPUTERROR_TAPICallOrPutFlagType                   = -10004;
//! 输入错误的:TAPIBucketDateFlag
const int TAPIERROR_INPUTERROR_TAPIBucketDateFlag                      = -11001;
//! 输入错误的:TAPIHisQuoteType
const int TAPIERROR_INPUTERROR_TAPIHisQuoteType                        = -11002;
//! 输入错误的:TAPIAccountType
const int TAPIERROR_INPUTERROR_TAPIAccountType                         = -12001;
//! 输入错误的:TAPIUserTypeType
const int TAPIERROR_INPUTERROR_TAPIUserTypeType                        = -12002;
//! 输入错误的:TAPIAccountState
const int TAPIERROR_INPUTERROR_TAPIAccountState                        = -12003;
//! 输入错误的:TAPIAccountFamilyType
const int TAPIERROR_INPUTERROR_TAPIAccountFamilyType                   = -12004;
//! 输入错误的:TAPIOrderTypeType
const int TAPIERROR_INPUTERROR_TAPIOrderTypeType                       = -12005;
//! 输入错误的:TAPIOrderSourceType
const int TAPIERROR_INPUTERROR_TAPIOrderSourceType                     = -12006;
//! 输入错误的:TAPITimeInForceType
const int TAPIERROR_INPUTERROR_TAPITimeInForceType                     = -12007;
//! 输入错误的:TAPISideType
const int TAPIERROR_INPUTERROR_TAPISideType                            = -12008;
//! 输入错误的:TAPIPositionEffectType
const int TAPIERROR_INPUTERROR_TAPIPositionEffectType                  = -12009;
//! 输入错误的:TAPIHedgeFlagType
const int TAPIERROR_INPUTERROR_TAPIHedgeFlagType                       = -12010;
//! 输入错误的:TAPIOrderStateType
const int TAPIERROR_INPUTERROR_TAPIOrderStateType                      = -12011;
//! 输入错误的:TAPICalculateModeType
const int TAPIERROR_INPUTERROR_TAPICalculateModeType                   = -12012;
//! 输入错误的:TAPIMatchSourceType
const int TAPIERROR_INPUTERROR_TAPIMatchSourceType                     = -12013;
//! 输入错误的:TAPIOpenCloseModeType
const int TAPIERROR_INPUTERROR_TAPIOpenCloseModeType                   = -12014;
//! 输入错误的:TAPIFutureAlgType
const int TAPIERROR_INPUTERROR_TAPIFutureAlgType                       = -12015;
//! 输入错误的:TAPIOptionAlgType
const int TAPIERROR_INPUTERROR_TAPIOptionAlgType                       = -12016;
//! 输入错误的:TAPIBankAccountLWFlagType
const int TAPIERROR_INPUTERROR_TAPIBankAccountLWFlagType               = -12017;
//! 输入错误的:TAPIBankAccountStateType
const int TAPIERROR_INPUTERROR_TAPIBankAccountStateType                = -12018;
//! 输入错误的:TAPIBankAccountSwapStateType
const int TAPIERROR_INPUTERROR_TAPIBankAccountSwapStateType            = -12019;
//! 输入错误的:TAPIBankAccountTransferStateType
const int TAPIERROR_INPUTERROR_TAPIBankAccountTransferStateType        = -12020;
//! 输入错误的:TAPIMarginCalculateModeType
const int TAPIERROR_INPUTERROR_TAPIMarginCalculateModeType             = -12021;
//! 输入错误的:TAPIOptionMarginCalculateModeType
const int TAPIERROR_INPUTERROR_TAPIOptionMarginCalculateModeType       = -12022;
//! 输入错误的:TAPICmbDirectType
const int TAPIERROR_INPUTERROR_TAPICmbDirectType                       = -12023;
//! 输入错误的:TAPIDeliveryModeType
const int TAPIERROR_INPUTERROR_TAPIDeliveryModeType                    = -12024;
//! 输入错误的:TAPIContractTypeType
const int TAPIERROR_INPUTERROR_TAPIContractTypeType                    = -12025;
//! 输入错误的:TAPIPartyTypeType
const int TAPIERROR_INPUTERROR_TAPIPartyTypeType                       = -12026;
//! 输入错误的:TAPIPartyCertificateTypeType
const int TAPIERROR_INPUTERROR_TAPIPartyCertificateTypeType            = -12027;
//! 输入错误的:TAPIMsgReceiverType
const int TAPIERROR_INPUTERROR_TAPIMsgReceiverType                     = -12028;
//! 输入错误的:TAPIMsgTypeType
const int TAPIERROR_INPUTERROR_TAPIMsgTypeType                         = -12029;
//! 输入错误的:TAPIMsgLevelType
const int TAPIERROR_INPUTERROR_TAPIMsgLevelType                        = -12030;
//! 输入错误的:TAPITransferDirectType
const int TAPIERROR_INPUTERROR_TAPITransferDirectType                  = -12031;
//! 输入错误的:TAPITransferStateType
const int TAPIERROR_INPUTERROR_TAPITransferStateType                   = -12032;
//! 输入错误的:TAPITransferTypeType
const int TAPIERROR_INPUTERROR_TAPITransferTypeType                    = -12033;
//! 输入错误的:TAPITransferDeviceIDType
const int TAPIERROR_INPUTERROR_TAPITransferDeviceIDType                = -12034;
//! 输入错误的:TAPITacticsTypeType
const int TAPIERROR_INPUTERROR_TAPITacticsTypeType                     = -12035;
//! 输入错误的:TAPIORDERACT
const int TAPIERROR_INPUTERROR_TAPIORDERACT                            = -12036;
//! 输入错误的:TAPIBillTypeType
const int TAPIERROR_INPUTERROR_TAPIBillTypeType                        = -12037;
//! 输入错误的:TAPIBillFileTypeType
const int TAPIERROR_INPUTERROR_TAPIBillFileTypeType                    = -12038;
//! 输入错误的:TAPIOFFFlagType
const int TAPIERROR_INPUTERROR_TAPIOFFFlagType                         = -12039;
//! 输入错误的:TAPICashAdjustTypeType
const int TAPIERROR_INPUTERROR_TAPICashAdjustTypeType                  = -12040;
//! 输入错误的:TAPITriggerConditionType
const int TAPIERROR_INPUTERROR_TAPITriggerConditionType                = -12041;
//! 输入错误的:TAPITriggerPriceTypeType
const int TAPIERROR_INPUTERROR_TAPITriggerPriceTypeType                = -12042;
//! 输入错误的:TAPITradingStateType 
const int TAPIERROR_INPUTERROR_TAPITradingStateType                    = -12043;
//! 输入错误的:TAPIMarketLevelType 
const int TAPIERROR_INPUTERROR_TAPIMarketLevelType                     = -12044;


//! 历史行情查询参数不合法
const int TAPIERROR_INPUTERROR_QryHisQuoteParam                        = -13001;

/** @}*/

//=============================================================================
/**
 *	\addtogroup G_ERR_DISCONNECT_REASON	网络断开错误代码定义
 *	@{
 */
//=============================================================================
//! 主动断开
const int TAPIERROR_DISCONNECT_CLOSE_INIT                              = 1;
//! 被动断开
const int TAPIERROR_DISCONNECT_CLOSE_PASS                              = 2;
//! 读错误
const int TAPIERROR_DISCONNECT_READ_ERROR                              = 3;
//! 写错误
const int TAPIERROR_DISCONNECT_WRITE_ERROR                             = 4;
//! 缓冲区满
const int TAPIERROR_DISCONNECT_BUF_FULL                                = 5;
//! 异步操作错误
const int TAPIERROR_DISCONNECT_IOCP_ERROR                              = 6;
//! 解析数据错误
const int TAPIERROR_DISCONNECT_PARSE_ERROR                             = 7;
//! 连接超时
const int TAPIERROR_DISCONNECT_CONNECT_TIMEOUT                         = 8;
//! 初始化失败
const int TAPIERROR_DISCONNECT_INIT_ERROR                              = 9;
//! 已经连接
const int TAPIERROR_DISCONNECT_HAS_CONNECTED                           = 10;
//! 工作线程已结束
const int TAPIERROR_DISCONNECT_HAS_EXIT                                = 11;
//! 操作正在进行，请稍后重试
const int TAPIERROR_DISCONNECT_TRY_LATER                               = 12;

/** @}*/

//=============================================================================
/**
 *	\addtogroup G_ERR_BUSINESS	业务返回的错误代码定义
 *	@{
 */
//=============================================================================

//! 登录过程执行错误
const int TAPIERROR_LOGIN                                              = 10001;
//! 登录用户不存在
const int TAPIERROR_LOGIN_USER                                         = 10002;
//! 需要进行动态认证
const int TAPIERROR_LOGIN_DDA                                          = 10003;
//! 登录用户未授权
const int TAPIERROR_LOGIN_LICENSE                                      = 10004;
//! 登录模块不正确
const int TAPIERROR_LOGIN_MODULE                                       = 10005;
//! 需要强制修改密码
const int TAPIERROR_LOGIN_FORCE                                        = 10006;
//! 登录状态禁止登陆
const int TAPIERROR_LOGIN_STATE                                        = 10007;
//! 登录密码不正确
const int TAPIERROR_LOGIN_PASS                                         = 10008;
//! 没有该模块登录权限
const int TAPIERROR_LOGIN_RIGHT                                        = 10009;
//! 登录数量超限
const int TAPIERROR_LOGIN_COUNT                                        = 10010;
//! 登录用户不在服务器标识下可登录用户列表中
const int TAPIERROR_LOGIN_NOTIN_SERVERFLAGUSRES                        = 10011;

//=============================================================================
//! 登录用户信息查询失败
const int TAPIERROR_USERINFO_QRY                                       = 10101;
//! 登录用户信息增加失败
const int TAPIERROR_USERINFO_ADD                                       = 10102;
//! 登录用户信息修改失败
const int TAPIERROR_USERINFO_MOD                                       = 10103;
//! 登录用户信息删除失败
const int TAPIERROR_USERINFO_DEL                                       = 10104;
//! 存在关联信息，删除失败
const int TAPIERROR_ACCOUNTNO_IN_USERINFO_DEL                          = 10105;

//=============================================================================
//! 登录用户状态查询失败
const int TAPIERROR_USERSTATE_QRY                                      = 10201;
//! 登录用户状态增加失败
const int TAPIERROR_USERSTATE_ADD                                      = 10202;
//! 登录用户状态修改失败
const int TAPIERROR_USERSTATE_MOD                                      = 10203;
//! 登录用户状态删除失败
const int TAPIERROR_USERSTATE_DEL                                      = 10204;

//=============================================================================
//! 软件授权信息查询失败
const int TAPIERROR_LICENSEINFO_QRY                                    = 10301;
//! 软件授权信息增加失败
const int TAPIERROR_LICENSEINFO_ADD                                    = 10302;
//! 软件授权信息修改失败
const int TAPIERROR_LICENSEINFO_MOD                                    = 10303;
//! 软件授权信息删除失败
const int TAPIERROR_LICENSEINFO_DEL                                    = 10304;
//! 存在关联信息，删除失败
const int TAPIERROR_LICENSEINFO_IN_USERLICENSE_DEL                     = 10305;

//=============================================================================
//! 登录用户软件授权查询失败
const int TAPIERROR_USERLICENSE_QRY                                    = 10401;
//! 登录用户软件授权增加失败
const int TAPIERROR_USERLICENSE_ADD                                    = 10402;
//! 登录用户软件授权删除失败
const int TAPIERROR_USERLICENSE_DEL                                    = 10403;

//=============================================================================
//! 权限信息查询失败
const int TAPIERROR_RIGHTINFO_QRY                                      = 10501;

//=============================================================================
//! 角色信息查询失败
const int TAPIERROR_ROLEINFO_QRY                                       = 10601;
//! 角色信息增加失败
const int TAPIERROR_ROLEINFO_ADD                                       = 10602;
//! 角色信息修改失败
const int TAPIERROR_ROLEINFO_MOD                                       = 10603;
//! 角色信息删除失败
const int TAPIERROR_ROLEINFO_DEL                                       = 10604;
//! 存在关联信息，删除失败
const int TAPIERROR_ROLENO_IN_USERROLE_DEL                             = 10605;

//=============================================================================
//! 角色下属权限查询失败
const int TAPIERROR_ROLERIGHT_QRY                                      = 10701;
//! 角色下属权限增加失败
const int TAPIERROR_ROLERIGHT_ADD                                      = 10702;
//! 角色下属权限删除失败
const int TAPIERROR_ROLERIGHT_DEL                                      = 10703;

//=============================================================================
//! 登录用户下属角色查询失败
const int TAPIERROR_USERROLE_QRY                                       = 10801;
//! 登录用户下属角色增加失败
const int TAPIERROR_USERROLE_ADD                                       = 10802;
//! 登录用户下属角色删除失败
const int TAPIERROR_USERROLE_DEL                                       = 10803;

//=============================================================================
//! 登录用户下属权限查询失败
const int TAPIERROR_USERRIGHT_QRY                                      = 10901;
//! 登录用户下属权限增加失败
const int TAPIERROR_USERRIGHT_ADD                                      = 10902;
//! 登录用户下属权限删除失败
const int TAPIERROR_USERRIGHT_DEL                                      = 10903;

//=============================================================================
//! 登录用户下属所有权限查询失败
const int TAPIERROR_USERALLRIGHT_QRY                                   = 11001;
//! 登录用户下属所有权限增加通知失败
const int TAPIERROR_USERALLRIGHT_ADD_NOTICE                            = 11002;
//! 登录用户下属所有权限删除通知失败
const int TAPIERROR_USERALLRIGHT_DEL_NOTICE                            = 11003;

//=============================================================================
//! 账号分组信息查询失败
const int TAPIERROR_ACCOUNTGROUPINFO_QRY                               = 11101;
//! 账号分组信息增加失败
const int TAPIERROR_ACCOUNTGROUPINFO_ADD                               = 11102;
//! 账号分组信息修改失败
const int TAPIERROR_ACCOUNTGROUPINFO_MOD                               = 11103;
//! 账号分组信息删除失败
const int TAPIERROR_ACCOUNTGROUPINFO_DEL                               = 11104;

//=============================================================================
//! 账号分组下属资金账号查询失败
const int TAPIERROR_GROUPACCOUNT_QRY                                   = 11201;
//! 账号分组下属资金账号增加失败
const int TAPIERROR_GROUPACCOUNT_ADD                                   = 11202;
//! 账号分组下属资金账号删除失败
const int TAPIERROR_GROUPACCOUNT_DEL                                   = 11203;
//! 账号分组下属资金账号增加失败，该分组属性一个客户只能对应一个分组
const int TAPIERROR_GROUPACCOUNT_ONETOONE                              = 11204;

//=============================================================================
//! 登录用户下属账号分组查询失败
const int TAPIERROR_USERGROUP_QRY                                      = 11301;
//! 登录用户下属账号分组增加失败
const int TAPIERROR_USERGROUP_ADD                                      = 11302;
//! 登录用户下属账号分组删除失败
const int TAPIERROR_USERGROUP_DEL                                      = 11303;

//=============================================================================
//! 登录用户下属资金账号查询失败
const int TAPIERROR_USERACCOUNT_QRY                                    = 11401;
//! 登录用户下属资金账号增加失败
const int TAPIERROR_USERACCOUNT_ADD                                    = 11402;
//! 登录用户下属资金账号删除失败
const int TAPIERROR_USERACCOUNT_DEL                                    = 11403;

//=============================================================================
//! 登录用户下属所有资金账号查询失败
const int TAPIERROR_USERALLACCOUNT_QRY                                 = 11501;
//! 登录用户下属所有资金账号增加通知失败
const int TAPIERROR_USERALLACCOUNT_ADD_NOTICE                          = 11502;
//! 登录用户下属所有资金账号删除通知失败
const int TAPIERROR_USERALLACCOUNT_DEL_NOTICE                          = 11503;

//=============================================================================
//! 密码类型信息查询失败
const int TAPIERROR_PASSWORDTYPEINFO_QRY                               = 11601;
//! 密码类型信息查询失败
const int TAPIERROR_PASSWORDTYPEINFO_MOD                               = 11602;

//=============================================================================
//! 登录用户密码修改失败
const int TAPIERROR_USERPASSWORD_MOD                                   = 11701;
//! 登录用户密码修改失败——原始密码错误
const int TAPIERROR_USERPASSWORD_MOD_SOURCE                            = 11702;
//! 登录用户密码修改失败——不能与前n次密码相同
const int TAPIERROR_USERPASSWORD_MOD_SAME                              = 11703;
//! 新密码不符合密码复杂度要求
const int TAPIERROR_USERPASSWORD_MOD_COMPLEXITY                        = 11704;

//=============================================================================
//! 连接信息查询失败
const int TAPIERROR_LINKINFO_QRY                                       = 11801;
//! 连接详细信息查询失败
const int TAPIERROR_LINKDETAILINFO_QRY                                 = 11802;
//! 连接信息删除失败
const int TAPIERROR_LINKINFO_DEL                                       = 11803;

//=============================================================================
//! 登录用户预留信息修改失败
const int TAPIERROR_USERRESERVEDINFO_MOD                               = 11901;

//=============================================================================
//! 服务器标识下可登录用户列表查询失败
const int TAPIERROR_SERVERFLAGUSERS_QRY                                = 12001;
//! 服务器标识下可登录用户列表增加失败
const int TAPIERROR_SERVERFLAGUSERS_ADD                                = 12002;
//! 服务器标识下可登录用户列表删除失败
const int TAPIERROR_SERVERFLAGUSERS_DEL                                = 12003;

//=============================================================================
//! 分组属性信息查失败
const int TAPIERROR_GROUPPROPERTYINFO_QRY                              = 12011;
//! 分组属性信息增加失败
const int TAPIERROR_GROUPPROPERTYINFO_ADD                              = 12012;
//! 分组属性信息修改失败
const int TAPIERROR_GROUPPROPERTYINFO_MOD                              = 12013;
//! 分组属性信息删除失败
const int TAPIERROR_GROUPPROPERTYINFO_DEL                              = 12014;

//=============================================================================
//! 内部银期认证请求失败  
const int TAPIERROR_INTERFUTUREBANKPASSWORDAUTH_REQ                    = 12021;

//=============================================================================
//! 资金账号银期密码个人修改请求失败  
const int TAPIERROR_ACCOUNTPASSWORD_MOD                                = 12031;
//! 资金账号银期密码用户修改请求失败  
const int TAPIERROR_ACCOUNTPASSWORDUSER_MOD                            = 12032;
//! 资金账号银期密码修改原始密码错误
const int TAPIERROR_ACCOUNTPASSWORD_ERROR                              = 12033;
//=============================================================================
//! 资金账号不存在
const int TAPIERROR_ORDERINSERT_ACCOUNT                                = 60001;
//! 资金账号状态不正确
const int TAPIERROR_ORDERINSERT_ACCOUNT_STATE                          = 60002;

//! 下单无效的合约
const int TAPIERROR_ORDERINSERT_CONTRACT                               = 60011;

//! 下单合约无交易路由
const int TAPIERROR_ORDERINSERT_TRADEROUTE                             = 60021;
//! 持仓量超过最大限制
const int TAPIERROR_ORDERINSERT_POSITIONMAX                            = 60022;
//! 禁止交易
const int TAPIERROR_ORDER_NOTRADE                                      = 60023;
//! 只可平仓
const int TAPIERROR_ORDER_CLOSE                                        = 60024;
//! 下单资金不足
const int TAPIERROR_ORDERINSERT_NOTENOUGHFUND                          = 60031;
//! 不支持的订单类型
const int TAPIERROR_ORDERINSERT_ORDERTYPE                              = 60032;
//! 不支持的时间有效类型
const int TAPIERROR_ORDERINSERT_TIMEINFORCE                            = 60033;
//! 不支持的策略单类型
const int TAPIERROR_ORDERINSERT_NO_TACTICS                             = 60034;
//! 平仓数量超过已有持仓量
const int TAPIERROR_ORDERINSERT_POSITION_CANNOT_CLOSE                  = 60035;
//! 下单自动审核失败
const int TAPIERROR_ORDERINSERT_AUTOCHECK_FAIL                         = 60036;
//! LME未准备就绪
const int TAPIERROR_ORDERINSERT_LME_NOTREADY                           = 60037;
//! 平仓方式错误
const int TAPIERROR_ORDERINSERT_CLOSEMODE                              = 60038;
//! 下单对应的父账号资金不足
const int TAPIERROR_ORDERINSERT_PARENTNOTENOUGHFUND                    = 60039;
//! 互换单的合约格式错误
const int TAPIERROR_SWAP_CONTRACT                                      = 60040;

//! 当前客户不能使用此账号交易
const int TAPIERROR_USERNO_NOTHAS_ACCOUNT                              = 60051;
//! 上手通道状态不正常
const int TAPIERROR_UPPERCHANNEL_BROKEN                                = 60052;
//! 上手通道未开通
const int TAPIERROR_UPPERCHANNEL_NOT_EXIST                             = 60053;

//! 撤单无此系统号
const int TAPIERROR_ORDERDELETE_NOT_SYSNO                              = 60061;
//! 此状态不允许撤单
const int TAPIERROR_ORDERDELETE_NOT_STATE                              = 60062;
//! 此状态不允许激活
const int TAPIERROR_ORDERACTIVE_NOT_STATE                              = 60063;

//! 此状态禁止审核
const int TAPIERROR_ORDERCHECK_NOT_STATE                               = 60071;
//! 订单审核失败
const int TAPIERROR_ORDERCHECK_FAIL                                    = 60072;

//! 此状态不允许改单
const int TAPIERROR_ORDERMODIFY_NOT_STATE                              = 60081;
//! 人工单不允许改单
const int TAPIERROR_ORDERMODIFY_BACK_INPUT                             = 60082;

//! 手续费参数错误
const int TAPIERROR_ORDERINSERT_FEE                                    = 60091;
//! 保证金参数错误
const int TAPIERROR_ORDERINSERT_MARGIN                                 = 60092;

//! 操作账号只可查询
const int TAPIERROR_ORDER_NO_PERMIT                                    = 60100;

//! 非做市商不能应价
const int TAPIERROR_RSPQUOTE_NO_PERMIT                                 = 60101;
//! 即使子帐号又是做市商不能应价
const int TAPIERROR_RSPQUOTE_CHILD_NO_PERMIT                           = 60102;
//! 下单找不到交易编码
const int TAPIERROR_TRADENO_NOT_FIND                                   = 60103;
//! 操作账号只可开仓
const int TAPIERROR_ORDER_NO_CLOSE                                     = 60104;
//! 操作账号没有上期挂单查询权限
const int TAPIERROR_QRY_QUOTE_NO_PERMIT                                = 60105;
//=============================================================================
//! 币种查询失败
const int TAPIERROR_CURRENCYINFO_QRY                                   = 20101;
//! 交易币种查询失败
const int TAPIERROR_TCURRENCYINFO_QRY                                  = 20102;
//! 币种增加失败
const int TAPIERROR_CURRENCYINFO_ADD                                   = 20103;
//! 币种删除失败
const int TAPIERROR_CURRENCYINFO_DEL                                   = 20104;
//! 币种修改失败
const int TAPIERROR_CURRENCYINFO_MOD                                   = 20105;
//! 币种级联删除失败
const int TAPIERROR_CURRENCYINFO_CASCADE_DEL                           = 20106;
//! 币种汇率变更历史流水查询失败
const int TAPIERROR_CURRENCYCHANGE_INFO_QRY                            = 20107;
//=============================================================================
//! 资金账号信息查询失败
const int TAPIERROR_ACCOUNTINFO_QRY                                    = 20201;
//! 资金账号摘要查询失败
const int TAPIERROR_ACCOUNTSUMMARY_QRY                                 = 20202;
//! 资金账号信息增加失败
const int TAPIERROR_ACCOUNTINFO_ADD                                    = 20203;
//! 资金账号信息删除失败
const int TAPIERROR_ACCOUNTINFO_DEL                                    = 20204;
//! 资金账号信息修改失败
const int TAPIERROR_ACCOUNTINFO_MOD                                    = 20205;
//! 全部资金账号信息查询失败
const int TAPIERROR_ALLACCOUNTINFO_QRY                                 = 20206;
//=============================================================================
//! 机构客户信息查询失败
const int TAPIERROR_ORGINFO_QRY                                        = 20301;
//! 机构客户信息增加失败
const int TAPIERROR_ORGINFO_ADD                                        = 20302;
//! 机构客户信息删除失败
const int TAPIERROR_ORGINFO_DEL                                        = 20303;
//! 机构客户信息修改失败
const int TAPIERROR_ORGINFO_MOD                                        = 20304;

//=============================================================================
//! 客户证件信息查询失败
const int TAPIERROR_ACCOUNTCERTIFICATE_QRY                             = 20401;
//! 客户证件信息增加失败
const int TAPIERROR_ACCOUNTCERTIFICATE_ADD                             = 20402;
//! 客户证件信息删除失败
const int TAPIERROR_ACCOUNTCERTIFICATE_DEL                             = 20403;
//! 客户证件信息修改失败
const int TAPIERROR_ACCOUNTCERTIFICATE_MOD                             = 20404;

//=============================================================================
//! 客户父资金账号查询失败
const int TAPIERROR_PARENTACCOUNT_QRY                                  = 20501;
//! 客户父资金账号查询失败(交易)
const int TAPIERROR_TPARENTACCOUNT_QRY                                 = 20502;
//! 客户父资金账号增加失败
const int TAPIERROR_PARENTACCOUNT_ADD                                  = 20503;
//! 客户父资金账号删除失败
const int TAPIERROR_PARENTACCOUNT_DEL                                  = 20504;
//! 客户父资金账号修改失败
const int TAPIERROR_PARENTACCOUNT_MOD                                  = 20505;

//=============================================================================
//! 交易所信息查询失败
const int TAPIERROR_EXCHANGEINFO_QRY                                   = 20601;
//! 交易所信息增加失败
const int TAPIERROR_EXCHANGEINFO_ADD                                   = 20602;
//! 交易所信息删除失败
const int TAPIERROR_EXCHANGEINFO_DEL                                   = 20603;
//! 交易所信息修改失败
const int TAPIERROR_EXCHANGEINFO_MOD                                   = 20604;

//=============================================================================
//! 客户交易编码查询失败
const int TAPIERROR_TRADENO_QRY                                        = 20701;
//! 客户交易编码增加失败
const int TAPIERROR_TRADENO_ADD                                        = 20702;
//! 客户交易编码删除失败
const int TAPIERROR_TRADENO_DEL                                        = 20703;
//! 客户交易编码修改失败
const int TAPIERROR_TRADENO_MOD                                        = 20704;
//! 客户交易编码账户已存在
const int TAPIERROR_TRADENO_EXIT                                       = 20705;

//=============================================================================
//! 客户银行信息查询失败			
const int TAPIERROR_ACCOUNTBANKINFO_QRY                                = 20801;
//! 客户银行信息增加失败			
const int TAPIERROR_ACCOUNTBANKINFO_ADD                                = 20802;
//! 客户银行信息删除失败			
const int TAPIERROR_ACCOUNTBANKINFO_DEL                                = 20803;
//! 客户银行信息修改失败			
const int TAPIERROR_ACCOUNTBANKINFO_MOD                                = 20804;

//=============================================================================
//! 关系人信息查询失败		
const int TAPIERROR_PARTYINFO_QRY                                      = 20901;
//! 关系人信息增加失败		
const int TAPIERROR_PARTYINFO_ADD                                      = 20902;
//! 关系人信息删除失败		
const int TAPIERROR_PARTYINFO_DEL                                      = 20903;
//! 关系人信息修改失败		
const int TAPIERROR_PARTYINFO_MOD                                      = 20904;

//=============================================================================
//! 属性信息查询失败
const int TAPIERROR_ATTRIBUTEINFO_QRY                                  = 21001;
//! 属性信息增加失败
const int TAPIERROR_ATTRIBUTEINFO_ADD                                  = 21002;
//! 属性信息删除失败
const int TAPIERROR_ATTRIBUTEINFO_DEL                                  = 21003;
//! 属性信息修改失败
const int TAPIERROR_ATTRIBUTEINFO_MOD                                  = 21004;

//=============================================================================
//! 客户属性信息查询失败
const int TAPIERROR_ACCOUNTATTRIBUTE_QRY                               = 21101;
//! 客户属性信息增加失败
const int TAPIERROR_ACCOUNTATTRIBUTE_ADD                               = 21102;
//! 客户属性信息修改失败
const int TAPIERROR_ACCOUNTATTRIBUTE_MOD                               = 21103;

//=============================================================================
//! 上手信息查询失败
const int TAPIERROR_UPPERINFO_QRY                                      = 21201;
//! 上手信息增加失败
const int TAPIERROR_UPPERINFO_ADD                                      = 21202;
//! 上手信息删除失败
const int TAPIERROR_UPPERINFO_DEL                                      = 21203;
//! 上手信息修改失败
const int TAPIERROR_UPPERINFO_MOD                                      = 21204;
//! 上手信息级联删除失败
const int TAPIERROR_UPPERINFO_CASCADE_DEL                              = 21205;

//=============================================================================
//! 上手银行信息查询失败
const int TAPIERROR_UPPERBANKINFO_QRY                                  = 21301;
//! 上手银行信息增加失败
const int TAPIERROR_UPPERBANKINFO_ADD                                  = 21302;
//! 上手银行信息删除失败
const int TAPIERROR_UPPERBANKINFO_DEL                                  = 21303;
//! 上手银行信息修改失败
const int TAPIERROR_UPPERBANKINFO_MOD                                  = 21304;
//! 上手银行信息级联删除失败
const int TAPIERROR_UPPERBANKINFO_CASCADE_DEL                          = 21305;

//=============================================================================
//! 上手通道信息查询失败
const int TAPIERROR_UPPERCHANNEL_QRY                                   = 21401;
//! 上手通道信息增加失败
const int TAPIERROR_UPPERCHANNEL_ADD                                   = 21402;
//! 上手通道信息删除失败
const int TAPIERROR_UPPERCHANNEL_DEL                                   = 21403;
//! 上手通道信息修改失败
const int TAPIERROR_UPPERCHANNEL_MOD                                   = 21404;
//! 上手通道信息级联删除失败
const int TAPIERROR_UPPERCHANNEL_CASCADE_DEL                           = 21405;

//=============================================================================
//! 币种组信息查询失败
const int TAPIERROR_CURRENCYGROUP_QRY                                  = 21501;
//! 币种组信息增加失败
const int TAPIERROR_CURRENCYGROUP_ADD                                  = 21502;
//! 币种组信息删除失败
const int TAPIERROR_CURRENCYGROUP_DEL                                  = 21503;
//! 币种组信息修改失败
const int TAPIERROR_CURRENCYGROUP_MOD                                  = 21504;
//! 币种组信息存在币种信息关联删除失败
const int TAPIERROR_CURRENCYGROUP_CASCADE_DEL                          = 21505;

//=============================================================================
//! 银行标识查询失败
const int TAPIERROR_BANKINFO_QRY                                       = 21601;
//! 银行标识增加失败
const int TAPIERROR_BANKINFO_ADD                                       = 21602;
//! 银行标识删除失败
const int TAPIERROR_BANKINFO_DEL                                       = 21603;
//! 银行标识修改失败
const int TAPIERROR_BANKINFO_MOD                                       = 21604;
//! 银行标识信息存在级联而删除失败
const int TAPIERROR_BANKINFO_CASCADE_DEL                               = 21605;

//=============================================================================
//! 公司银行信息查询失败
const int TAPIERROR_INTERNALBANK_QRY                                   = 21701;
//! 公司银行信息增加失败
const int TAPIERROR_INTERNALBANK_ADD                                   = 21702;
//! 公司银行信息删除失败
const int TAPIERROR_INTERNALBANK_DEL                                   = 21703;
//! 公司银行信息修改失败
const int TAPIERROR_INTERNALBANK_MOD                                   = 21704;

//=============================================================================
//! 汇兑汇率查询失败
const int TAPIERROR_SWAPRATE_QRY                                       = 21801;
//! 汇兑汇率增加失败
const int TAPIERROR_SWAPRATE_ADD                                       = 21802;
//! 汇兑汇率删除失败
const int TAPIERROR_SWAPRATE_DEL                                       = 21803;
//! 汇兑汇率修改失败
const int TAPIERROR_SWAPRATE_MOD                                       = 21804;

//=============================================================================
//! 客户换汇额度查询失败
const int TAPIERROR_ACCOUNTSWAPVALUE_QRY                               = 21901;
//! 客户换汇额度增加失败
const int TAPIERROR_ACCOUNTSWAPVALUE_ADD                               = 21902;
//! 客户换汇额度删除失败
const int TAPIERROR_ACCOUNTSWAPVALUE_DEL                               = 21903;
//! 客户换汇额度修改失败
const int TAPIERROR_ACCOUNTSWAPVALUE_MOD                               = 21904;

//=============================================================================
//! 品种信息查询失败
const int TAPIERROR_COMMODITYINFO_QRY                                  = 22001;
//! 品种信息查询失败(交易)
const int TAPIERROR_TCOMMODITYINFO_QRY                                 = 22002;
//! 品种信息增加失败
const int TAPIERROR_COMMODITYINFO_ADD                                  = 22003;
//! 品种信息删除失败
const int TAPIERROR_COMMODITYINFO_DEL                                  = 22004;
//! 品种信息修改失败
const int TAPIERROR_COMMODITYINFO_MOD                                  = 22005;

//=============================================================================
//! 品种板块查询失败
const int TAPIERROR_COMMODITYSECTOR_QRY                                = 22101;
//! 品种板块增加失败
const int TAPIERROR_COMMODITYSECTOR_ADD                                = 22102;
//! 品种板块删除失败
const int TAPIERROR_COMMODITYSECTOR_DEL                                = 22103;
//! 品种板块修改失败
const int TAPIERROR_COMMODITYSECTOR_MOD                                = 22104;
//! 品种板块与板块映射品种级联删除失败
const int TAPIERROR_COMMODITYSECTOR_CASCADE_DEL                        = 22105;
//! 父品种板块有下属子品种板块删除失败
const int TAPIERROR_COMMODITYSECTOR_CHILD_DEL                          = 22106;

//=============================================================================
//! 品种板块对应品种查询失败
const int TAPIERROR_SECTORMAPCOMMODITY_QRY                             = 22201;
//! 品种板块对应品种增加失败
const int TAPIERROR_SECTORMAPCOMMODITY_ADD                             = 22202;
//! 品种板块对应品种删除失败
const int TAPIERROR_SECTORMAPCOMMODITY_DEL                             = 22203;
//! 品种板块对应品种修改失败
const int TAPIERROR_SECTORMAPCOMMODITY_MOD                             = 22204;

//=============================================================================
//! 品种组查询失败
const int TAPIERROR_COMMODITYGROUP_QRY                                 = 22301;
//! 品种组增加失败
const int TAPIERROR_COMMODITYGROUP_ADD                                 = 22302;
//! 品种组删除失败
const int TAPIERROR_COMMODITYGROUP_DEL                                 = 22303;
//! 品种组修改失败
const int TAPIERROR_COMMODITYGROUP_MOD                                 = 22304;
//! 品种组级联删除失败
const int TAPIERROR_COMMODITYGROUP_CASCADE_DEL                         = 22305;

//=============================================================================
//! 分组对应品种查询失败
const int TAPIERROR_GROUPMAPCOMMODITY_QRY                              = 22401;
//! 分组对应品种增加失败
const int TAPIERROR_GROUPMAPCOMMODITY_ADD                              = 22402;
//! 分组对应品种删除失败
const int TAPIERROR_GROUPMAPCOMMODITY_DEL                              = 22403;
//! 分组对应品种修改失败
const int TAPIERROR_GROUPMAPCOMMODITY_MOD                              = 22404;

//=============================================================================
//! 交易时段模板查询失败
const int TAPIERROR_TRADINGTIMEBUCKET_QRY                              = 22501;
//! 交易时段模板增加失败
const int TAPIERROR_TRADINGTIMEBUCKET_ADD                              = 22502;
//! 交易时段模板删除失败
const int TAPIERROR_TRADINGTIMEBUCKET_DEL                              = 22503;
//! 交易时段模板修改失败
const int TAPIERROR_TRADINGTIMEBUCKET_MOD                              = 22504;

//=============================================================================
//! 品种行情信息查询失败
const int TAPIERROR_COMMODITYQUOTEINFO_QRY                             = 22601;
//! 品种行情信息增加失败
const int TAPIERROR_COMMODITYQUOTEINFO_ADD                             = 22602;
//! 品种行情信息删除失败
const int TAPIERROR_COMMODITYQUOTEINFO_DEL                             = 22603;
//! 品种行情信息修改失败
const int TAPIERROR_COMMODITYQUOTEINFO_MOD                             = 22604;

//=============================================================================
//! 品种关联信息查询失败
const int TAPIERROR_COMMODITYRELATEINFO_QRY                            = 22701;
//! 品种关联信息增加失败
const int TAPIERROR_COMMODITYRELATEINFO_ADD                            = 22702;
//! 品种关联信息删除失败
const int TAPIERROR_COMMODITYRELATEINFO_DEL                            = 22703;
//! 品种关联信息修改失败
const int TAPIERROR_COMMODITYRELATEINFO_MOD                            = 22704;

//=============================================================================
//! 合约信息查询失败
const int TAPIERROR_CONTRACTINFO_QRY                                   = 22801;
//! 合约信息增加失败
const int TAPIERROR_CONTRACTINFO_ADD                                   = 22802;
//! 合约信息删除失败
const int TAPIERROR_CONTRACTINFO_DEL                                   = 22803;
//! 合约信息修改失败
const int TAPIERROR_CONTRACTINFO_MOD                                   = 22804;
//! 合约信息因有持仓级联删除失败
const int TAPIERROR_CONTRACTINFO_CASCADE_DEL                           = 22805;

//=============================================================================
//! 特殊期权标的查询失败
const int TAPIERROR_SPECIALOPTIONFUTURE_QRY                            = 22901;
//! 特殊期权标的增加失败
const int TAPIERROR_SPECIALOPTIONFUTURE_ADD                            = 22902;
//! 特殊期权标的删除失败
const int TAPIERROR_SPECIALOPTIONFUTURE_DEL                            = 22903;
//! 特殊期权标的修改失败
const int TAPIERROR_SPECIALOPTIONFUTURE_MOD                            = 22904;

//=============================================================================
//! 上手品种代码映射查询失败
const int TAPIERROR_UPPERCOMMODITYMAPPING_QRY                          = 23001;
//! 上手品种代码映射增加失败
const int TAPIERROR_UPPERCOMMODITYMAPPING_ADD                          = 23002;
//! 上手品种代码映射删除失败
const int TAPIERROR_UPPERCOMMODITYMAPPING_DEL                          = 23003;
//! 上手品种代码映射修改失败
const int TAPIERROR_UPPERCOMMODITYMAPPING_MOD                          = 23004;

//=============================================================================
//! 外部品种代码映射查询失败
const int TAPIERROR_OUTSIDECOMMODITYMAPPING_QRY                        = 23101;
//! 外部品种代码映射增加失败
const int TAPIERROR_OUTSIDECOMMODITYMAPPING_ADD                        = 23102;
//! 外部品种代码映射删除失败
const int TAPIERROR_OUTSIDECOMMODITYMAPPING_DEL                        = 23103;
//! 外部品种代码映射修改失败
const int TAPIERROR_OUTSIDECOMMODITYMAPPING_MOD                        = 23104;

//=============================================================================
//! 外部数据来源查询失败
const int TAPIERROR_OUTSIDEDATASOURCE_QRY                              = 23201;
//! 外部数据来源增加失败
const int TAPIERROR_OUTSIDEDATASOURCE_ADD                              = 23202;
//! 外部数据来源删除失败
const int TAPIERROR_OUTSIDEDATASOURCE_DEL                              = 23203;
//! 外部数据来源修改失败
const int TAPIERROR_OUTSIDEDATASOURCE_MOD                              = 23204;

//=============================================================================
//! 上手手续费查询失败
const int TAPIERROR_UPPERFEE_QRY                                       = 23301;
//! 上手手续费增加失败
const int TAPIERROR_UPPERFEE_ADD                                       = 23302;
//! 上手手续费删除失败
const int TAPIERROR_UPPERFEE_DEL                                       = 23303;
//! 上手手续费修改失败
const int TAPIERROR_UPPERFEE_MOD                                       = 23304;

//=============================================================================
//! 手续费模板查询失败
const int TAPIERROR_TEMPLATEFEE_QRY                                    = 23401;
//! 手续费模板增加失败
const int TAPIERROR_TEMPLATEFEE_ADD                                    = 23402;
//! 手续费模板删除失败
const int TAPIERROR_TEMPLATEFEE_DEL                                    = 23403;
//! 手续费模板修改失败
const int TAPIERROR_TEMPLATEFEE_MOD                                    = 23404;

//=============================================================================
//! 客户对应手续费模板查询失败
const int TAPIERROR_ACCOUNTFEETEMPLATE_QRY                             = 23501;
//! 客户对应手续费模板增加失败
const int TAPIERROR_ACCOUNTFEETEMPLATE_ADD                             = 23502;
//! 客户对应手续费模板删除失败
const int TAPIERROR_ACCOUNTFEETEMPLATE_DEL                             = 23503;
//! 客户对应手续费模板修改失败
const int TAPIERROR_ACCOUNTFEETEMPLATE_MOD                             = 23504;

//=============================================================================
//! 上手其他费用查询失败
const int TAPIERROR_UPPEROTHERFEE_QRY                                  = 23601;
//! 上手其他费用增加失败
const int TAPIERROR_UPPEROTHERFEE_ADD                                  = 23602;
//! 上手其他费用删除失败
const int TAPIERROR_UPPEROTHERFEE_DEL                                  = 23603;
//! 上手其他费用修改失败
const int TAPIERROR_UPPEROTHERFEE_MOD                                  = 23604;

//=============================================================================
//! 客户其他费用查询失败
const int TAPIERROR_ACCOUNTOTHERFEE_QRY                                = 23701;
//! 客户其他费用增加失败
const int TAPIERROR_ACCOUNTOTHERFEE_ADD                                = 23702;
//! 客户其他费用删除失败
const int TAPIERROR_ACCOUNTOTHERFEE_DEL                                = 23703;
//! 客户其他费用修改失败
const int TAPIERROR_ACCOUNTOTHERFEE_MOD                                = 23704;

//=============================================================================
//! 上手保证金查询失败
const int TAPIERROR_UPPERMARGIN_QRY                                    = 23801;
//! 上手保证金增加失败
const int TAPIERROR_UPPERMARGIN_ADD                                    = 23802;
//! 上手保证金删除失败
const int TAPIERROR_UPPERMARGIN_DEL                                    = 23803;
//! 上手保证金修改失败
const int TAPIERROR_UPPERMARGIN_MOD                                    = 23804;

//=============================================================================
//! 上手保证金调整查询失败
const int TAPIERROR_UPPERMARGINADJUST_QRY                              = 23901;
//! 上手保证金调整增加失败
const int TAPIERROR_UPPERMARGINADJUST_ADD                              = 23902;
//! 上手保证金调整删除失败
const int TAPIERROR_UPPERMARGINADJUST_DEL                              = 23903;
//! 上手保证金调整修改失败
const int TAPIERROR_UPPERMARGINADJUST_MOD                              = 23904;

//=============================================================================
//! 保证金模板查询失败
const int TAPIERROR_TEMPLATEMARGIN_QRY                                 = 24001;
//! 保证金模板增加失败
const int TAPIERROR_TEMPLATEMARGIN_ADD                                 = 24002;
//! 保证金模板删除失败
const int TAPIERROR_TEMPLATEMARGIN_DEL                                 = 24003;
//! 保证金模板修改失败
const int TAPIERROR_TEMPLATEMARGIN_MOD                                 = 24004;

//=============================================================================
//! 客户对应保证金模板查询失败
const int TAPIERROR_ACCOUNTMARGINTEMPLATE_QRY                          = 24101;
//! 客户对应保证金模板增加失败
const int TAPIERROR_ACCOUNTMARGINTEMPLATE_ADD                          = 24102;
//! 客户对应保证金模板删除失败
const int TAPIERROR_ACCOUNTMARGINTEMPLATE_DEL                          = 24103;
//! 客户对应保证金模板修改失败
const int TAPIERROR_ACCOUNTMARGINTEMPLATE_MOD                          = 24104;

//=============================================================================
//! 保证金模板调整查询失败
const int TAPIERROR_TEMPLATEMARGINADJUST_QRY                           = 24201;
//! 保证金模板调整增加失败
const int TAPIERROR_TEMPLATEMARGINADJUST_ADD                           = 24202;
//! 保证金模板调整删除失败
const int TAPIERROR_TEMPLATEMARGINADJUST_DEL                           = 24203;
//! 保证金模板调整修改失败
const int TAPIERROR_TEMPLATEMARGINADJUST_MOD                           = 24204;

//=============================================================================
//! 锁仓比例查询失败
const int TAPIERROR_LOCKEDPERCENTAGE_QRY                               = 24301;
//! 锁仓比例增加失败
const int TAPIERROR_LOCKEDPERCENTAGE_ADD                               = 24302;
//! 锁仓比例删除失败
const int TAPIERROR_LOCKEDPERCENTAGE_DEL                               = 24303;
//! 锁仓比例修改失败
const int TAPIERROR_LOCKEDPERCENTAGE_MOD                               = 24304;

//=============================================================================
//! 交易权限查询失败
const int TAPIERROR_TRADINGRIGHT_QRY                                   = 24401;
//! 交易权限增加失败
const int TAPIERROR_TRADINGRIGHT_ADD                                   = 24402;
//! 交易权限删除失败
const int TAPIERROR_TRADINGRIGHT_DEL                                   = 24403;
//! 交易权限修改失败
const int TAPIERROR_TRADINGRIGHT_MOD                                   = 24404;

//=============================================================================
//! 最大下单量查询失败
const int TAPIERROR_ONCEMAX_QRY                                        = 24501;
//! 最大下单量增加失败
const int TAPIERROR_ONCEMAX_ADD                                        = 24502;
//! 最大下单量删除失败
const int TAPIERROR_ONCEMAX_DEL                                        = 24503;
//! 最大下单量修改失败
const int TAPIERROR_ONCEMAX_MOD                                        = 24504;

//=============================================================================
//! 最大持仓量查询失败
const int TAPIERROR_POSITIONMAX_QRY                                    = 24601;
//! 最大持仓量增加失败
const int TAPIERROR_POSITIONMAX_ADD                                    = 24602;
//! 最大持仓量删除失败
const int TAPIERROR_POSITIONMAX_DEL                                    = 24603;
//! 最大持仓量修改失败
const int TAPIERROR_POSITIONMAX_MOD                                    = 24604;

//=============================================================================
//! 交易路由控制查询失败
const int TAPIERROR_TRADINGROUTE_QRY                                   = 24701;
//! 交易路由控制增加失败
const int TAPIERROR_TRADINGROUTE_ADD                                   = 24702;
//! 交易路由控制删除失败
const int TAPIERROR_TRADINGROUTE_DEL                                   = 24703;
//! 交易路由控制修改失败
const int TAPIERROR_TRADINGROUTE_MOD                                   = 24704;

//=============================================================================
//! 行情路由控制查询失败
const int TAPIERROR_QUOTEROUTE_QRY                                     = 24801;
//! 行情路由控制增加失败
const int TAPIERROR_QUOTEROUTE_ADD                                     = 24802;
//! 行情路由控制删除失败
const int TAPIERROR_QUOTEROUTE_DEL                                     = 24803;
//! 行情路由控制修改失败
const int TAPIERROR_QUOTEROUTE_MOD                                     = 24804;

//=============================================================================
//! 系统参数查询失败
const int TAPIERROR_SYSTEMPARAMETER_QRY                                = 24901;
//! 系统参数增加失败
const int TAPIERROR_SYSTEMPARAMETER_ADD                                = 24902;
//! 系统参数删除失败
const int TAPIERROR_SYSTEMPARAMETER_DEL                                = 24903;
//! 系统参数修改失败
const int TAPIERROR_SYSTEMPARAMETER_MOD                                = 24904;

//=============================================================================
//! 项目信息定义查询失败
const int TAPIERROR_ITEMINFO_QRY                                       = 25001;
//! 项目值信息定义修改失败
const int TAPIERROR_ITEMVALUEINFO_QRY                                  = 25002;

//=============================================================================
//! 手续费模板信息查询失败
const int TAPIERROR_TEMPLATEFEEINFO_QRY                                = 25101;
//! 手续费模板信息增加失败
const int TAPIERROR_TEMPLATEFEEINFO_ADD                                = 25102;
//! 手续费模板信息删除失败
const int TAPIERROR_TEMPLATEFEEINFO_DEL                                = 25103;
//! 手续费模板信息修改失败
const int TAPIERROR_TEMPLATEFEEINFO_MOD                                = 25104;
//! 手续费模板信息级联删除失败
const int TAPIERROR_TEMPLATEFEEINFO_CASCADE_DEL                        = 25105;

//=============================================================================
//! 保证金模板信息查询失败
const int TAPIERROR_TEMPLATEMARGININFO_QRY                             = 25201;
//! 保证金模板信息增加失败
const int TAPIERROR_TEMPLATEMARGININFO_ADD                             = 25202;
//! 保证金模板信息删除失败
const int TAPIERROR_TEMPLATEMARGININFO_DEL                             = 25203;
//! 保证金模板信息修改失败
const int TAPIERROR_TEMPLATEMARGININFO_MOD                             = 25204;
//! 保证金模板信息级联删除失败
const int TAPIERROR_TEMPLATEMARGININFO_CASCADE_DEL                     = 25205;

//=============================================================================
//! 其他费用类型信息查询失败
const int TAPIERROR_OTHERFEETYPEINFO_QRY                               = 25301;
//! 其他费用类型信息增加失败
const int TAPIERROR_OTHERFEETYPEINFO_ADD                               = 25302;
//! 其他费用类型信息删除失败
const int TAPIERROR_OTHERFEETYPEINFO_DEL                               = 25303;
//! 其他费用类型信息修改失败
const int TAPIERROR_OTHERFEETYPEINFO_MOD                               = 25304;
//! 其他费用类型信息级联删除失败
const int TAPIERROR_OTHERFEETYPEINFO_CASCADE_DEL                       = 25305;

//=============================================================================
//! 品种委托类型查询失败
const int TAPIERROR_COMMODITYORDERTYPE_QRY                             = 25501;
//! 品种委托类型增加失败
const int TAPIERROR_COMMODITYORDERTYPE_ADD                             = 25502;
//! 品种委托类型删除失败
const int TAPIERROR_COMMODITYORDERTYPE_DEL                             = 25503;
//! 品种委托类型修改失败
const int TAPIERROR_COMMODITYORDERTYPE_MOD                             = 25504;

//=============================================================================
//! 品种委托时间有效性查询失败
const int TAPIERROR_ORDERTIMEINFORCE_QRY                               = 25601;
//! 品种委托时间有效性增加失败
const int TAPIERROR_ORDERTIMEINFORCE_ADD                               = 25602;
//! 品种委托时间有效性删除失败
const int TAPIERROR_ORDERTIMEINFORCE_DEL                               = 25603;
//! 品种委托时间有效性修改失败
const int TAPIERROR_ORDERTIMEINFORCE_MOD                               = 25604;

//=============================================================================
//! 属性级别信息查询失败
const int TAPIERROR_ATTRIBUTELEVELINFO_QRY                             = 25701;
//! 属性级别信息增加失败
const int TAPIERROR_ATTRIBUTELEVELINFO_ADD                             = 25702;
//! 属性级别信息删除失败
const int TAPIERROR_ATTRIBUTELEVELINFO_DEL                             = 25703;
//! 属性级别信息修改失败
const int TAPIERROR_ATTRIBUTELEVELINFO_MOD                             = 25704;
//! 属性级别信息级联删除失败
const int TAPIERROR_ATTRIBUTELEVELINFO_CASCADE_DEL                     = 25705;

//=============================================================================
//! 交易日历模板信息查询失败
const int TAPIERROR_CALENDARTEMPLATEINFO_QRY                           = 25801;
//! 交易日历模板信息增加失败
const int TAPIERROR_CALENDARTEMPLATEINFO_ADD                           = 25802;
//! 交易日历模板信息删除失败
const int TAPIERROR_CALENDARTEMPLATEINFO_DEL                           = 25803;
//! 交易日历模板信息修改失败
const int TAPIERROR_CALENDARTEMPLATEINFO_MOD                           = 25804;

//=============================================================================
//! 品种交易日历模板查询失败
const int TAPIERROR_COMMODITYCALENDARTEMPLATE_QRY                      = 25901;
//! 品种交易日历模板增加失败
const int TAPIERROR_COMMODITYCALENDARTEMPLATE_ADD                      = 25902;
//! 品种交易日历模板删除失败
const int TAPIERROR_COMMODITYCALENDARTEMPLATE_DEL                      = 25903;
//! 品种交易日历模板修改失败
const int TAPIERROR_COMMODITYCALENDARTEMPLATE_MOD                      = 25904;

//=============================================================================
//! 实值额查询失败
const int TAPIERROR_ACCOUNTREALVALUE_QRY                               = 26001;
//! 实值额增加失败
const int TAPIERROR_ACCOUNTREALVALUE_ADD                               = 26002;
//! 实值额删除失败
const int TAPIERROR_ACCOUNTREALVALUE_DEL                               = 26003;
//! 实值额修改失败
const int TAPIERROR_ACCOUNTREALVALUE_MOD                               = 26004;

//=============================================================================
//! 自动生成期权组合失败
const int TAPIERROR_TOOPTIONCMB_REQ                                    = 26101;

//=============================================================================
//! 交易日历模板信息基础查询失败
const int TAPIERROR_CALENDARTEMPLATEBASE_QRY                           = 26201;
//! 交易日历模板信息基础增加失败
const int TAPIERROR_CALENDARTEMPLATEBASE_ADD                           = 26202;
//! 交易日历模板信息基础删除失败
const int TAPIERROR_CALENDARTEMPLATEBASE_DEL                           = 26203;
//! 交易日历模板信息基础修改失败
const int TAPIERROR_CALENDARTEMPLATEBASE_MOD                           = 26204;

//----------------账户证件类型错误代码定义-------------------------------------
//=============================================================================
//! 账户证件类型查询失败
const int TAPIERROR_CERTIFICATE_QRY                                    = 26301;

//=============================================================================
//! 服务器标识查询失败
const int TAPIERROR_TRADESERVERFLAG_QRY                                = 26401;
//! 服务器标识增加失败
const int TAPIERROR_TRADESERVERFLAG_ADD                                = 26402;
//! 服务器标识删除失败
const int TAPIERROR_TRADESERVERFLAG_DEL                                = 26403;
//! 服务器标识修改失败
const int TAPIERROR_TRADESERVERFLAG_MOD                                = 26404;
//! 服务器标识级联删除失败
const int TAPIERROR_TRADESERVERFLAG_CASCADE_DEL                        = 26405;

//=============================================================================
//! 服务器标识映射资金账号对应手续费查询失败
const int TAPIERROR_TRADESERVERFLAG_FEETEMPLATE_QRY                    = 26501;

//=============================================================================
//! 服务器标识映射资金账号对应保证金查询失败
const int TAPIERROR_TRADESERVERFLAG_MARGINTEMPLATE_QRY                 = 26601;

//=============================================================================
//! 服务器标识映射资金账号对应手续费信息查询失败
const int TAPIERROR_TRADESERVERFLAG_ACCOUNT_FEEINFO_QRY                = 26701;

//=============================================================================
//! 服务器标识映射资金账号对应保证金信息查询失败
const int TAPIERROR_TRADESERVERFLAG_ACCOUNT_MARGININFO_QRY             = 26801;

//=============================================================================
//! 县市信息查询失败
const int TAPIERROR_COUNTY_QRY                                         = 26901;

//=============================================================================
//! 省份信息查询失败
const int TAPIERROR_PROVINCE_QRY                                       = 27001;
//=============================================================================
//! 银期签到签退查询失败
const int TAPIERROR_BANKLOGINOUT_QRY                                   = 27101;
//! 银期签到签退增加失败
const int TAPIERROR_BANKLOGINOUT_ADD                                   = 27102;

//=============================================================================
//! 银期流水查询失败
const int TAPIERROR_TRANSFERFUTUREBANK_QRY                             = 27201;
//! 银期流水增加失败
const int TAPIERROR_TRANSFERFUTUREBANK_ADD                             = 27202;

//=============================================================================
//! 银期转账参数查询失败
const int TAPIERROR_TRANSFERRENT_QRY                                   = 27301;
//! 银期转账参数增加失败
const int TAPIERROR_TRANSFERRENT_ADD                                   = 27302;
//! 银期转账参数修改失败
const int TAPIERROR_TRANSFERRENT_MOD                                   = 27303;
//! 银期转账参数删除失败
const int TAPIERROR_TRANSFERRENT_DEL                                   = 27304;

//=============================================================================
//! 银期转账时间段查询失败
const int TAPIERROR_TRANSFERTIME_QRY                                   = 27401;
//! 银期转账时间段增加失败
const int TAPIERROR_TRANSFERTIME_ADD                                   = 27402;
//! 银期转账时间段修改失败
const int TAPIERROR_TRANSFERTIME_MOD                                   = 27403;
//! 银期转账时间段删除失败
const int TAPIERROR_TRANSFERTIME_DEL                                   = 27404;

//=============================================================================
//! 银期转账签解约历史流水查询失败
const int TAPIERROR_BANKSIGNEDINFO_QRY                                 = 27501;
//! 银期转账签解约历史流水增加失败
const int TAPIERROR_BANKSIGNEDINFO_ADD                                 = 27502;

//=============================================================================
//! 交易时段模板基础查询失败
const int TAPIERROR_TRADINGTIMEBUCKETBASE_QRY                          = 27601;
//! 交易时段模板基础增加失败
const int TAPIERROR_TRADINGTIMEBUCKETBASE_ADD                          = 27602;
//! 交易时段模板基础删除失败
const int TAPIERROR_TRADINGTIMEBUCKETBASE_DEL                          = 27603;
//! 交易时段模板基础修改失败
const int TAPIERROR_TRADINGTIMEBUCKETBASE_MOD                          = 27604;
//! 交易时段模板基础级联删除失败
const int TAPIERROR_TRADINGTIMEBUCKETBASE_CASCADE_DEL                  = 27605;
//=============================================================================
//! 机构分类信息查询失败
const int TAPIERROR_CLASSIFY_QRY                                       = 27701;

//=============================================================================
//! 组织性质信息查询失败
const int TAPIERROR_ORGANTYPE_QRY                                      = 27801;

//=============================================================================
//! 9.0系统交易日历信息查询失败
const int TAPIERROR_TRADINGCALENDARINFO_QRY                            = 27901;
//! 9.0系统交易日历信息增加失败
const int TAPIERROR_TRADINGCALENDARINFO_ADD                            = 27902;
//! 9.0系统交易日历信息修改失败
const int TAPIERROR_TRADINGCALENDARINFO_MOD                            = 27903;
//! 9.0系统交易日历信息删除失败
const int TAPIERROR_TRADINGCALENDARINFO_DEL                            = 27904;
//! 通过交易日历查询当前交易日和上次结算日查询失败
const int TAPIERROR_TRADING_CLENDAR_SETTLE_TRADE_QRY                   = 27905;

//=============================================================================
//! 交易所交易日止信息查询失败
const int TAPIERROR_EXCHANGETRADINGCALENDARINFO_QRY                    = 28001;
//! 交易所交易日止信息增加失败
const int TAPIERROR_EXCHANGETRADINGCALENDARINFO_ADD                    = 28002;
//! 交易所交易日止信息修改失败
const int TAPIERROR_EXCHANGETRADINGCALENDARINFO_MOD                    = 28003;
//! 交易所交易日止信息删除失败
const int TAPIERROR_EXCHANGETRADINGCALENDARINFO_DEL                    = 28004;
//! 根据交易日查询交易所详细日期查询失败
const int TAPIERROR_EXCHANGE_TRADING_DETAILDATE_QRY                    = 28005;

//=============================================================================
//! 合约临时交割信息查询失败
const int TAPIERROR_CONTRACTNEARDELIVERY_QRY                           = 28101;
//! 合约临时交割信息增加失败
const int TAPIERROR_CONTRACTNEARDELIVERY_ADD                           = 28102;
//! 合约临时交割信息删除失败
const int TAPIERROR_CONTRACTNEARDELIVERY_DEL                           = 28103;
//=============================================================================
//! 审核信息表查询失败
const int TAPIERROR_CHECKTABLEINFO_QRY                                 = 28201;
//! 审核信息表增加失败
const int TAPIERROR_CHECKTABLEINFO_ADD                                 = 28202;
//! 审核信息表修改失败
const int TAPIERROR_CHECKTABLEINFO_MOD                                 = 28203;
//! 审核信息表删除失败
const int TAPIERROR_CHECKTABLEINFO_DEL                                 = 28204;
//! 判断是否为审核表查询失败
const int TAPIERROR_CHECKTABLEBASEINFO_QRY                             = 28205;
//! 审核数据删除信息表查询失败
const int TAPIERROR_CHECKTABLEDELINFO_QRY                              = 28206;
//! 审核数据删除信息表增加失败
const int TAPIERROR_CHECKTABLEDELINFO_ADD                              = 28207;
//! 审核数据删除信息表删除失败
const int TAPIERROR_CHECKTABLEDELINFO_DEL                              = 28208;
//! 审核基础信息表增加失败
const int TAPIERROR_CHECKTABLEBASEINFO_ADD                             = 28209;
//! 审核基础信息表修改失败
const int TAPIERROR_CHECKTABLEBASEINFO_MOD                             = 28210;

//=============================================================================
//! 操作日志查询失败
const int TAPIERROR_OPERATORLOGINFO_QRY                                = 28301;
//! 操作日志增加失败
const int TAPIERROR_OPERATORLOGINFO_ADD                                = 28302;
//! 操作日志删除失败
const int TAPIERROR_OPERATORLOGINFO_DEL                                = 28303;

//! 风险参数查询失败
const int TAPIERROR_RISKPARAMETER_QRY                                  = 28304;
//! 风险参数修改失败
const int TAPIERROR_RISKPARAMETER_MOD                                  = 28305;

//! 出金笔数，金额查询失败
const int TAPIERROR_TRANSFERCOUNTVALUE_QRY                             = 28306;
//! 出金笔数，金额增加失败
const int TAPIERROR_TRANSFERCOUNTVALUE_ADD                             = 28307;
//=============================================================================
//! 禁止自动复核订单查询失败
const int TAPIERROR_BANAUTO_ORDERCHECK_QRY                             = 28401;
//! 禁止自动复核订单增加失败
const int TAPIERROR_BANAUTO_ORDERCHECK_ADD                             = 28402;
//! 禁止自动复核订单删除失败
const int TAPIERROR_BANAUTO_ORDERCHECK_DEL                             = 28403;
//=============================================================================
//! 资金账号对应交易所的行情合约数量查询失败
const int TAPIERROR_USER_QUOTE_QTY_QRY                                 = 28501;
//! 资金账号对应交易所的行情合约数量增加失败
const int TAPIERROR_USER_QUOTE_QTY_ADD                                 = 28502;
//! 资金账号对应交易所的行情合约数量修改失败
const int TAPIERROR_USER_QUOTE_QTY_MOD                                 = 28503;
//! 资金账号对应交易所的行情合约数量删除失败
const int TAPIERROR_USER_QUOTE_QTY_DEL                                 = 28504;
//=============================================================================
//! 父品种板块查询失败
const int TAPIERROR_SECTOR_PARENT_QRY                                  = 28601;
//! 父品种板块增加失败
const int TAPIERROR_SECTOR_PARENT_ADD                                  = 28602;
//! 父品种板块修改失败
const int TAPIERROR_SECTOR_PARENT_MOD                                  = 28603;
//! 父品种板块删除失败
const int TAPIERROR_SECTOR_PARENT_DEL                                  = 28604;
//=============================================================================
//! 计量单位信息查询失败
const int TAPIERROR_MEASURE_UNIT_QRY                                   = 28701;
//! 计量单位换算关系信息查询失败
const int TAPIERROR_MEASURE_CONVERSION_QRY                             = 28702;
//! 计价单位换算关系信息查询失败
const int TAPIERROR_CHARGE_CONVERSION_QRY                              = 28703;

//=============================================================================
//! 计价单位信息查询失败
const int TAPIERROR_CHARGE_UNIT_QRY                                    = 28801;
//! 计价单位信息增加失败
const int TAPIERROR_CHARGE_UNIT_ADD                                    = 28802;
//! 计价单位信息修改失败
const int TAPIERROR_CHARGE_UNIT_MOD                                    = 28803;
//! 计价位信息删除失败
const int TAPIERROR_CHARGE_UNIT_DEL                                    = 28804;
//=============================================================================
//! 用户下单频率查询失败
const int TAPIERROR_USER_ORDER_FREQUENCE_QRY                           = 28901;
//! 用户下单频率增加失败
const int TAPIERROR_USER_ORDER_FREQUENCE_ADD                           = 28902;
//! 用户下单频率修改失败
const int TAPIERROR_USER_ORDER_FREQUENCE_MOD                           = 28903;
//! 用户下单频率删除失败
const int TAPIERROR_USER_ORDER_FREQUENCE_DEL                           = 28904;
//=============================================================================
//! 数据链接查询失败
const int TAPIERROR_DATA_LINKINFO_QRY                                  = 29001;
//! 数据链接增加失败
const int TAPIERROR_DATA_LINKINFO_ADD                                  = 29002;
//! 数据链接修改失败
const int TAPIERROR_DATA_LINKINFO_MOD                                  = 29003;
//! 数据链接删除失败
const int TAPIERROR_DATA_LINKINFO_DEL                                  = 29004;
//=============================================================================
//! 只可平仓提前天数查询失败
const int TAPIERROR_ONLYCANCLOSEDAYS_QRY                               = 29101;
//! 只可平仓提前天数增加失败
const int TAPIERROR_ONLYCANCLOSEDAYS_ADD                               = 29102;
//! 只可平仓提前天数删除失败
const int TAPIERROR_ONLYCANCLOSEDAYS_DEL                               = 29103;
//! 只可平仓提前天数修改失败
const int TAPIERROR_ONLYCANCLOSEDAYS_MOD                               = 29104;

//=============================================================================
//! LME交易日历信息查询失败
const int TAPIERROR_LMETRADINGCALENDARINFO_QRY                         = 29201;
//! LME交易日历信息增加失败
const int TAPIERROR_LMETRADINGCALENDARINFO_ADD                         = 29202;
//! LME交易日历信息修改失败
const int TAPIERROR_LEMTRADINGCALENDARINFO_MOD                         = 29203;
//! LME交易日历信息删除失败
const int TAPIERROR_LEMTRADINGCALENDARINFO_DEL                         = 29204;
//! 根据交易日查询LME详细交易日期查询失败
const int TAPIERROR_LEM_TRADING_DETAILDATE_QRY                         = 29205;
//=============================================================================
//! 手续费区间模板查询失败
const int TAPIERROR_TEMPLATE_MINMAX_FEE_QRY                            = 29301;
//! 手续费区间模板增加失败
const int TAPIERROR_TEMPLATE_MINMAX_FEE_ADD                            = 29302;
//! 手续费区间模板删除失败
const int TAPIERROR_TEMPLATE_MINMAX_FEE_DEL                            = 29303;
//! 手续费区间模板修改失败
const int TAPIERROR_TEMPLATE_MINMAX_FEE_MOD                            = 29304;

// 手续费区间模板级联删除失败
// const int		ERROR_TEMPLATE_MINMAX_FEE_CASCADE_DEL			= 29305;
//=============================================================================

//! 客户对应手续费区间模板查询失败
const int TAPIERROR_ACCOUNT_MINMAX_FEETEMPLATE_QRY                     = 29401;
//! 客户对应手续费区间模板增加失败
const int TAPIERROR_ACCOUNT_MINMAX_FEETEMPLATE_ADD                     = 29402;
//! 客户对应手续费区间模板删除失败
const int TAPIERROR_ACCOUNT_MINMAX_FEETEMPLATE_DEL                     = 29403;
//! 客户对应手续费区间模板修改失败
const int TAPIERROR_ACCOUNT_MINMAX_FEETEMPLATE_MOD                     = 29404;
//=============================================================================
//! 资金账户所属一线通编号系统查询失败
const int TAPIERROR_ACCOUNT_SEAT_INFO_QRY                              = 29411;
//! 资金账户所属一线通编号系统增加失败
const int TAPIERROR_ACCOUNT_SEAT_INFO_ADD                              = 29412;
//! 资金账户所属一线通编号系统删除失败
const int TAPIERROR_ACCOUNT_SEAT_INFO_DEL                              = 29413;
//=============================================================================
//! 一线通账号信息查询失败
const int TAPIERROR_SEAT_INFO_QRY                                      = 29421;
//! 一线通账号信息增加失败
const int TAPIERROR_SEAT_INFO_ADD                                      = 29422;
//! 一线通账号信息删除失败
const int TAPIERROR_SEAT_INFO_DEL                                      = 29423;
//! 一线通账号信息主席已存在增加失败
const int TAPIERROR_SEAT_INFO_MAIN_EXIT_ADD                            = 29422;
//=============================================================================
//! 客户最终手续费查询失败
const int TAPIERROR_ACCOUNTFEE_PARAMETER_QRY                           = 29431;
//! 客户最终保证金查询失败
const int TAPIERROR_ACCOUNTMARGIN_PARAMETER_QRY                        = 29432;
//! 手续费模板批量修改失败
const int TAPIERROR_TEMPLATEFEE_BATCH_MOD                              = 29433;
//! 保证金模板批量修改失败
const int TAPIERROR_TEMPLATEMARGIN_BATCH_MOD                           = 29434;
//=============================================================================
//! 外汇期货最新费率查询失败
const int TAPIERROR_FOREIGN_EXCHANGE_NEWRATE_QRY                       = 29441;
//! 外汇期货当前费率查询失败
const int TAPIERROR_FOREIGN_EXCHANGE_CURRATE_QRY                       = 29442;
//! 外汇期货费率修改失败
const int TAPIERROR_FOREIGN_EXCHANGE_RATE_MOD                          = 29443;
//! 外汇期货费率增加失败
const int TAPIERROR_FOREIGN_EXCHANGE_RATE_ADD                          = 29444;
//! 外汇期货费率删除失败
const int TAPIERROR_FOREIGN_EXCHANGE_RATE_DEL                          = 29445;
//=============================================================================
//! 邮件信息查询失败
const int TAPIERROR_MAIL_INFO_QRY                                      = 29451;
//! 邮件信息增加失败
const int TAPIERROR_MAIL_INFO_ADD                                      = 29452;
//! 邮件信息修改失败
const int TAPIERROR_MAIL_INFO_MOD                                      = 29453;
//! 邮件信息删除失败
const int TAPIERROR_MAIL_INFO_DEL                                      = 29454;
//=============================================================================
//! 外汇利率查询失败
const int TAPIERROR_FOREX_RATE_INFO_QRY                                = 29461;
//! 外汇利率增加失败
const int TAPIERROR_FOREX_RATE_INFO_ADD                                = 29462;
//! 外汇利率修改失败
const int TAPIERROR_FOREX_RATE_INFO_MOD                                = 29463;
//! 外汇利率删除失败
const int TAPIERROR_FOREX_RATE_INFO_DEL                                = 29464;
//=============================================================================
//! 外汇假期查询失败
const int TAPIERROR_FOREX_HOLIDAY_QRY                                  = 29471;
//! 外汇假期增加失败
const int TAPIERROR_FOREX_HOLIDAY_ADD                                  = 29472;
//! 外汇假期修改失败
const int TAPIERROR_FOREX_HOLIDAY_MOD                                  = 29473;
//! 外汇假期删除失败
const int TAPIERROR_FOREX_HOLIDAY_DEL                                  = 29474;
//=============================================================================
//! 客户关联查询失败
const int TAPIERROR_ACCOUNT_RELATEINFO_QRY                             = 29481;
//! 客户关联增加失败
const int TAPIERROR_ACCOUNT_RELATEINFO_ADD                             = 29482;
//! 客户关联修改失败
const int TAPIERROR_ACCOUNT_RELATEINFO_MOD                             = 29483;
//! 客户关联删除失败
const int TAPIERROR_ACCOUNT_RELATEINFO_DEL                             = 29484;
//=============================================================================
//! 结算服务错误号
//=============================================================================
//! 历史委托查询错误
const int TAPIERROR_HISORDER_QRY                                       = 40001;
//! 历史委托增加错误
const int TAPIERROR_HISORDER_ADD                                       = 40002;
//! 历史委托修改错误
const int TAPIERROR_HISORDER_MOD                                       = 40003;
//! 历史委托删除
const int TAPIERROR_HISORDER_DEL                                       = 40004;
//! 交易服务器委托查询错误
const int TAPIERROR_ORDERFORTRADE_QRY                                  = 40005;

//=============================================================================
//! 历史成交查询错误
const int TAPIERROR_HISMATCH_QRY                                       = 40101;
//! 历史成交增加错误
const int TAPIERROR_HISMATCH_ADD                                       = 40102;
//! 历史成交修改错误
const int TAPIERROR_HISMATCH_MOD                                       = 40103;
//! 历史成交删除错误
const int TAPIERROR_HISMATCH_DEL                                       = 40104;
//! 交易服务器成交查询错误
const int TAPIERROR_MATCHFORTRADE_QRY                                  = 40105;

//=============================================================================
//! 历史持仓查询错误
const int TAPIERROR_HISPOSITION_QRY                                    = 40201;
//! 历史持仓增加错误
const int TAPIERROR_HISPOSITION_ADD                                    = 40202;
//! 历史持仓修改错误
const int TAPIERROR_HISPOSITION_MOD                                    = 40203;
//! 历史持仓删除错误
const int TAPIERROR_HISPOSITION_DEL                                    = 40204;
//! 交易服务器持仓查询错误
const int TAPIERROR_POSITIONFORTRADE_QRY                               = 40205;
//! 上一交易日查询错误
const int TAPIERROR_LASTSETTLEDATE_QRY                                 = 40206;
//=============================================================================
//! 历史平仓查询错误
const int TAPIERROR_HISCLOSE_QRY                                       = 40301;

//=============================================================================
//! 历史未到期平仓查询错误
const int TAPIERROR_HISUNEXPCLOSE_QRY                                  = 40401;
//! 历史未到期平仓增加错误
const int TAPIERROR_HISUNEXPCLOSE_ADD                                  = 40402;
//! 历史未到期平仓修改错误
const int TAPIERROR_HISUNEXPCLOSE_MOD                                  = 40403;
//! 历史未到期平仓删除错误
const int TAPIERROR_HISUNEXPCLOSE_DEL                                  = 40404;

//=============================================================================
//! 历史交割查询错误
const int TAPIERROR_HISDELIVERY_QRY                                    = 40501;
//! 历史交割增加错误
const int TAPIERROR_HISDELIVERY_ADD                                    = 40502;
//! 历史交割修改错误
const int TAPIERROR_HISDELIVERY_MOD                                    = 40503;
//! 历史交割删除错误
const int TAPIERROR_HISDELIVERY_DEL                                    = 40504;

//=============================================================================
//! 结算价查询错误
const int TAPIERROR_SETTLEPRICE_QRY                                    = 40601;
//! 结算价增加错误
const int TAPIERROR_SETTLEPRICE_ADD                                    = 40602;
//! 结算价修改错误
const int TAPIERROR_SETTLEPRICE_MOD                                    = 40603;
//! 结算价删除错误
const int TAPIERROR_SETTLEPRICE_DEL                                    = 40604;

//=============================================================================
//! 有效合约生成错误
const int TAPIERROR_VALIDCONTRACT_GEN                                  = 40701;

//=============================================================================
//! 移仓查询错误
const int TAPIERROR_POSITIONMOVE_QRY                                   = 40801;
//! 移仓增加错误
const int TAPIERROR_POSITIONMOVE_ADD                                   = 40802;
//! 移仓删除错误
const int TAPIERROR_POSITIONMOVE_DEL                                   = 40803;

//=============================================================================
//! 客户出入金查询错误
const int TAPIERROR_ACCOUNTCASHINOUT_QRY                               = 40901;
//! 客户出入金增加错误
const int TAPIERROR_ACCOUNTCASHINOUT_ADD                               = 40902;
//! 客户出入金增加通知错误
const int TAPIERROR_ACCOUNTCASHINOUTADD_NOTICE                         = 40903;

//=============================================================================
//! 客户资金调整查询错误
const int TAPIERROR_ACCOUNTCASHADJUST_QRY                              = 41001;
//! 客户资金调增增加错误
const int TAPIERROR_ACCOUNTCASHADJUST_ADD                              = 41002;
//! 客户资金调整增加通知错误
const int TAPIERROR_ACCOUNTCASHADJUSTADD_NOTICE                        = 41003;



//=============================================================================
//! 客户资金汇兑查询错误
const int TAPIERROR_ACCOUNTCASHSWAP_QRY                                = 41201;
//! 客户资金汇兑增加错误
const int TAPIERROR_ACCOUNTCASHSWAP_ADD                                = 41202;
//! 客户资金汇兑增加通知错误
const int TAPIERROR_ACCOUNTCASHSWAPADD_NOTICE                          = 41203;

//=============================================================================
//! 客户转账信息查询错误
const int TAPIERROR_TRANSFERINFO_QRY                                   = 41301;
//! 客户转账信息增加错误
const int TAPIERROR_TRANSFERINFO_ADD                                   = 41302;
//! 客户转账增加通知错误
const int TAPIERROR_ATRANSFERINFOADD_NOTICE                            = 41303;

//=============================================================================
//! Span保证金查询错误
const int TAPIERROR_SPANMARGIN_QRY                                     = 41401;
//! Span保证金增加错误
const int TAPIERROR_SPANMARGIN_ADD                                     = 41402;
//! Span保证金修改错误
const int TAPIERROR_SPANMARGIN_MOD                                     = 41403;
//! Span保证金修改错误
const int TAPIERROR_SPANMARGIN_DEL                                     = 41404;

//=============================================================================
//! 客户资金查询失败
const int TAPIERROR_ACCOUNTFUND_QRY                                    = 41501;
//! 交易查询客户资金失败
const int TAPIERROR_ACCOUNTFUNDFORTRADE_QRY                            = 41502;
//! 客户资金增加失败
const int TAPIERROR_ACCOUNTFUND_ADD                                    = 41503;
//! 客户资金删除失败
const int TAPIERROR_ACCOUNTFUND_DEL                                    = 41504;

//=============================================================================
//! 客户冻结资金查询错误
const int TAPIERROR_ACCOUNTFROZENFUND_QRY                              = 41601;
//! 客户冻结资金增加错误
const int TAPIERROR_ACCOUNTFROZENFUND_ADD                              = 41602;
//! 客户冻结资金增加通知错误
const int TAPIERROR_ACCOUNTFROZENADD_NOTICE                            = 41603;
//! 客户冻结资金修改错误
const int TAPIERROR_ACCOUNTFROZENFUND_MOD                              = 41604;
//! 客户冻结资金修改通知错误
const int TAPIERROR_ACCOUNTFROZENMOD_NOTICE                            = 41605;

//=============================================================================
//! 上手出入金查询错误
const int TAPIERROR_UPPERCASHINOUT_QRY                                 = 41701;
//! 上手出入金增加错误
const int TAPIERROR_UPPERCASHINOUT_ADD                                 = 41702;
//! 上手出入金修改错误
const int TAPIERROR_UPPERCASHINOUT_MOD                                 = 41703;
//! 上手出入金删除错误
const int TAPIERROR_UPPERCASHINOUT_DEL                                 = 41704;

//=============================================================================
//! 上手资金调整查询错误
const int TAPIERROR_UPPERCASHADJUST_QRY                                = 41801;
//! 上手资金调整增加错误
const int TAPIERROR_UPPERCASHADJUST_ADD                                = 41802;
//! 上手资金调整修改错误
const int TAPIERROR_UPPERCASHADJUST_MOD                                = 41803;
//! 上手资金调整删除错误
const int TAPIERROR_UPPERCASHADJUST_DEL                                = 41804;

//=============================================================================
//! 上手资金查询错误
const int TAPIERROR_UPPERFUND_QRY                                      = 41901;

//=============================================================================
//! 结算请求错误
const int TAPIERROR_SETTLEDEAL_QRY                                     = 42001;

//=============================================================================
//! 结算过程查询错误
const int TAPIERROR_SETTLEPROCESS_QRY                                  = 42101;
//! 结算批次号查询错误
const int TAPIERROR_SettleBatchNo_QRY                                  = 42102;
//=============================================================================
//! 日志查询错误
const int TAPIERROR_LOG_QRY                                            = 42201;

//=============================================================================
//! 交易消息发送错误
const int TAPIERROR_TRADEMESSAGE_SEND                                  = 42301;
//! 交易消息查询错误
const int TAPIERROR_TRADEMESSAGE_QRY                                   = 42302;
//! 交易消息推送通知错误
const int TAPIERROR_TRADEMESSAGE_NOTICE                                = 42303;

//=============================================================================
//! 行情消息发送错误
const int TAPIERROR_QUOTEMESSAGE_SEND                                  = 42401;
//! 行情消息查询错误
const int TAPIERROR_QUOTEMESSAGE_QRY                                   = 42402;
//! 行情消息推送通知错误
const int TAPIERROR_QUOTEMESSAGE_NOTICE                                = 42403;

//=============================================================================
//! 交易统计表错误
const int TAPIERROR_TRADINGSTATISTICS_REQ                              = 42501;

//=============================================================================
//! PCS请求失败
const int TAPIERROR_PCS_REQ                                            = 42601;
//! CGM请求失败
const int TAPIERROR_CGM_REQ                                            = 42602;
//! LargeTrader请求失败
const int TAPIERROR_LARGETRADER_REQ                                    = 42603;
//! PCS查询请求失败
const int TAPIERROR_PCS_QRY_REQ                                        = 42604;
//! CGM查询请求失败
const int TAPIERROR_CGM_QRY_REQ                                        = 42605;
//! LargeTrader查询请求失败
const int TAPIERROR_LARGETRADER_QRY_REQ                                = 42606;

//=============================================================================
//! CME成交导入请求失败
const int TAPIERROR_CME_MATCH_IMPORT_REQ                               = 42701;
//! CME成交查询请求失败
const int TAPIERROR_CME_MATCHT_QRY_REQ                                 = 42702;
//! CME持仓导入请求失败
const int TAPIERROR_CME_POSITION_IMPORT_REQ                            = 42703;
//! CME持仓查询请求失败
const int TAPIERROR_CME_POSITION_QRY_REQ                               = 42704;
//! CME成交删除请求失败
const int TAPIERROR_CMEMATCH_DEL_REQ                                   = 42705;
//! CME持仓删除请求失败
const int TAPIERROR_CMEPOSITION_DEL_REQ                                = 42706;

//=============================================================================
//! MQ成交增加请求失败
const int TAPIERROR_MQ_MATCH_ADD_REQ                                   = 42801;
//! MQ成交查询请求失败
const int TAPIERROR_MQ_MATCHT_QRY_REQ                                  = 42802;

//=============================================================================
//! 集合账户平仓信息查询请求失败
const int TAPIERROR_OMNIBUSACCOUNTCLOSEINFO_QRY_REQ                    = 42901;
//! 集合账户平仓信息增加请求失败
const int TAPIERROR_OMNIBUSACCOUNTCLOSEINFO_ADD_REQ                    = 42902;
//! 集合账户平仓信息修改请求失败
const int TAPIERROR_OMNIBUSACCOUNTCLOSEINFO_MOD_REQ                    = 42903;
//! 集合账户平仓信息删除请求失败
const int TAPIERROR_OMNIBUSACCOUNTCLOSEINFO_DEL_REQ                    = 42904;

//=============================================================================
//! 成交核对请求失败
const int TAPIERROR_CHECK_MATCH_REQ                                    = 43001;
//! 持仓核对请求失败
const int TAPIERROR_CHECK_POSITION_REQ                                 = 43002;

//=============================================================================
//! 持仓处理请求失败
const int TAPIERROR_DEAL_POSITION_REQ                                  = 43101;

//=============================================================================
//! 持仓折抵查询请求失败
const int TAPIERROR_POSITIONMORTGAGE_QRY_REQ                           = 43201;
//! 持仓折抵增加请求失败
const int TAPIERROR_POSITIONMORTGAGE_ADD_REQ                           = 43202;
//! 持仓折抵修改请求失败
const int TAPIERROR_POSITIONMORTGAGE_MOD_REQ                           = 43203;
//! 持仓折抵删除请求失败
const int TAPIERROR_POSITIONMORTGAGE_DEL_REQ                           = 43204;

//=============================================================================
//! 大连保证金优惠参数信息查询请求失败
const int TAPIERROR_DCEMARGINPREFERENT_QRY_REQ                         = 43301;
//! 大连保证金优惠参数信息增加请求失败
const int TAPIERROR_DCEMARGINPREFERENT_ADD_REQ                         = 43302;
//! 大连保证金优惠参数信息修改请求失败
const int TAPIERROR_DCEMARGINPREFERENT_MOD_REQ                         = 43303;
//! 大连保证金优惠参数信息删除请求失败
const int TAPIERROR_DCEMARGINPREFERENT_DEL_REQ                         = 43304;

//=============================================================================
//! 郑商所组合申请信息查询请求失败
const int TAPIERROR_ZCEAPPLYCMB_QRY_REQ                                = 43401;
//! 郑商所组合申请信息增加请求失败
const int TAPIERROR_ZCEAPPLYCMB_ADD_REQ                                = 43402;
//! 郑商所组合申请信息修改请求失败
const int TAPIERROR_ZCEAPPLYCMB_MOD_REQ                                = 43403;
//! 郑商所组合申请信息删除请求失败
const int TAPIERROR_ZCEAPPLYCMB_DEL_REQ                                = 43404;

//=============================================================================
//! 成交核对报表请求失败
const int TAPIERROR_MATCHREPORT_REQ                                    = 43501;
//! 持仓核对报表请求失败
const int TAPIERROR_POSITIONREPORT_REQ                                 = 43502;

//=============================================================================
//! 客户授信资金增加请求失败
const int TAPIERROR_ACCOUNTAUTHCASH_ADD_REQ                            = 43601;
//! 客户授信资金查询请求失败
const int TAPIERROR_ACCOUNTAUTHCASH_DEL_REQ                            = 43602;


//=============================================================================
//! 外盘持仓核对请求错误
const int TAPIERROR_FOREIGNPOSITION_CHECK_REQ                          = 43701;
//! 外盘客户资金核对请求错误		
const int TAPIERROR_ACCOUNTFUND_CHECK_REQ                              = 43702;
//! 外盘未到期平仓核对请求错误
const int TAPIERROR_UNEXPCLOSE_CHECK_REQ                               = 43703;

//=============================================================================
//! 其他资金查询请求错误
const int TAPIERROR_OTHERFUND_QRY_REQ                                  = 43801;
//! 其他资金增加请求错误		
const int TAPIERROR_OTHERFUND_ADD_REQ                                  = 43802;
//! 其他资金修改请求错误
const int TAPIERROR_OTHERFUND_MOD_REQ                                  = 43803;
//! 其他资金删除请求错误
const int TAPIERROR_OTHERFUND_DEL_REQ                                  = 43804;

//=============================================================================
//! 客户资金刷新通知请求错误
const int TAPIERROR_ACCOUNTFUND_NOTICE_REQ                             = 43901;

//=============================================================================
//! 根据客户移仓信息查询请求错误
const int TAPIERROR_POSITIONMOVEBYACCOUNT_QRY_REQ                      = 44001;
//! 根据客户移仓信息增加请求错误		
const int TAPIERROR_POSITIONMOVEBYACCOUNT_ADD_REQ                      = 44002;
//! 根据客户移仓信息修改请求错误
const int TAPIERROR_POSITIONMOVEBYACCOUNT_MOD_REQ                      = 44003;
//! 根据客户移仓信息删除请求错误
const int TAPIERROR_POSITIONMOVEBYACCOUNT_DEL_REQ                      = 44004;

//=============================================================================
//! 调单请求错误
const int TAPIERROR_ADJUSTMATCH_REQ                                    = 44101;

//=============================================================================
//! 换汇通知表错误
const int TAPIERROR_SWAPREPORT_REQ                                     = 44201;

//=============================================================================
//! 追保强平报表错误
const int TAPIERROR_ADDFOURCEREPORT_REQ                                = 44301;

//=============================================================================
//! 资金对账表错误
const int TAPIERROR_ACCOUNTFUNDREPORT_REQ                              = 44401;

//=============================================================================
//! 交割警示表错误
const int TAPIERROR_DELIVERYALARMREPORT_REQ                            = 44501;

//=============================================================================
//! 外汇高开低收价格查询请求错误
const int TAPIERROR_OHCL_QRY_REQ                                       = 446001;
//! 外汇高开低收价格增加请求错误		
const int TAPIERROR_OHCL_ADD_REQ                                       = 44602;
//! 外汇高开低收价格修改请求错误
const int TAPIERROR_OHCL_MOD_REQ                                       = 44603;
//! 外汇高开低收价格删除请求错误
const int TAPIERROR_OHCL_DEL_REQ                                       = 44604;

//=============================================================================
//! 待交割信息查询请求错误
const int TAPIERROR_TODELIVERY_QRY_REQ                                 = 44701;
//! 待交割信息增加请求错误		
const int TAPIERROR_TODELIVERY_ADD_REQ                                 = 44702;
//! 待交割信息修改请求错误
const int TAPIERROR_TODELIVERY_MOD_REQ                                 = 44703;
//! 待交割信息删除请求错误
const int TAPIERROR_TODELIVERY_DEL_REQ                                 = 44704;

//=============================================================================
//! 客户质押资金查询请求错误
const int TAPIERROR_ACCOUNTPLEDGE_QRY_REQ                              = 44801;
//! 客户质押资金增加请求错误		
const int TAPIERROR_ACCOUNTPLEDGE_ADD_REQ                              = 44802;

//=============================================================================
//! 客户结售汇查询请求错误
const int TAPIERROR_SETTLESALE_QRY_REQ                                 = 44901;
//! 客户结售汇增加请求错误		
const int TAPIERROR_SETTLESALE_ADD_REQ                                 = 44902;
//! 客户结售汇删除请求错误		
const int TAPIERROR_SETTLESALE_DEL_REQ                                 = 44903;


//=============================================================================
//! 订单操作频率过高
const int TAPIERROR_ORDER_FREQUENCY                                    = 61001;
//! 委托查询返回前不能进行下次查询
const int TAPIERROR_ORDER_QUERYING                                     = 61002;

//=============================================================================
//! 一分钟数据按照根数查询失败
const int TAPIERROR_1MINUTEBYCOUNT_QRY                                 = 70101;
//! 一分钟数据按时间段查询失败	
const int TAPIERROR_1MINUTEBYPERIOD_QRY                                = 70102;
//! 一分钟数据按DATE查询失败	
const int TAPIERROR_1MINUTEBYDATE_QRY                                  = 70103;

//=============================================================================
//! 三分钟数据按照根数查询失败
const int TAPIERROR_3MINUTEBYCOUNT_QRY                                 = 70201;
//! 三分钟数据按时间段查询失败	
const int TAPIERROR_3MINUTEBYPERIOD_QRY                                = 70202;
//! 三分钟数据按DATE查询失败	
const int TAPIERROR_3MINUTEBYDATE_QRY                                  = 70203;

//=============================================================================
//! 五分钟数据按照根数查询失败
const int TAPIERROR_5MINUTEBYCOUNT_QRY                                 = 70301;
//! 五分钟数据按时间段查询失败	
const int TAPIERROR_5MINUTEBYPERIOD_QRY                                = 70302;
//! 五分钟数据按DATE查询失败	
const int TAPIERROR_5MINUTEBYDATE_QRY                                  = 70303;

//=============================================================================
//! 十分钟数据按照根数查询失败
const int TAPIERROR_10MINUTEBYCOUNT_QRY                                = 70401;
//! 十分钟数据按时间段查询失败	
const int TAPIERROR_10MINUTEBYPERIOD_QRY                               = 70402;
//! 十分钟数据按DATE查询失败	
const int TAPIERROR_10MINUTEBYDATE_QRY                                 = 70403;

//=============================================================================
//! 十五分钟数据按照根数查询失败
const int TAPIERROR_15MINUTEBYCOUNT_QRY                                = 70501;
//! 十五分钟数据按时间段查询失败	
const int TAPIERROR_15MINUTEBYPERIOD_QRY                               = 70502;
//! 十五分钟数据按DATE查询失败	
const int TAPIERROR_15MINUTEBYDATE_QRY                                 = 70503;

//=============================================================================
//! 三十分钟数据按照根数查询失败
const int TAPIERROR_30MINUTEBYCOUNT_QRY                                = 70601;
//! 三十分钟数据按时间段查询失败	
const int TAPIERROR_30MINUTEBYPERIOD_QRY                               = 70602;
//! 三十分钟数据按DATE查询失败	
const int TAPIERROR_30MINUTEBYDATE_QRY                                 = 70603;

//=============================================================================
//! 六十分钟数据按照根数查询失败
const int TAPIERROR_60MINUTEBYCOUNT_QRY                                = 70701;
//! 六十分钟数据按时间段查询失败	
const int TAPIERROR_60MINUTEBYPERIOD_QRY                               = 70702;
//! 六十分钟数据按DATE查询失败	
const int TAPIERROR_60MINUTEBYDATE_QRY                                 = 70703;

//=============================================================================
//! 120分钟数据按照根数查询失败
const int TAPIERROR_120MINUTEBYCOUNT_QRY                               = 70801;
//! 120分钟数据按时间段查询失败	
const int TAPIERROR_120MINUTEBYPERIOD_QRY                              = 70802;
//! 120分钟数据按DATE查询失败	
const int TAPIERROR_120MINUTEBYDATE_QRY                                = 70803;

//=============================================================================
//! 240分钟数据按照根数查询失败
const int TAPIERROR_240MINUTEBYCOUNT_QRY                               = 70901;
//! 240分钟数据按时间段查询失败	
const int TAPIERROR_240MINUTEBYPERIOD_QRY                              = 70902;
//! 240分钟数据按DATE查询失败	
const int TAPIERROR_240MINUTEBYDATE_QRY                                = 70903;

//=============================================================================
//! 30秒数据按照根数查询失败
const int TAPIERROR_30SECONDSBYCOUNT_QRY                               = 71001;
//! 30秒数据按时间段查询失败	
const int TAPIERROR_30SECONDSBYPERIOD_QRY                              = 71002;
//! 30秒数据按DATE查询失败	
const int TAPIERROR_30SECONDSBYDATE_QRY                                = 71003;

//=============================================================================
//! Tick数据按照根数查询失败
const int TAPIERROR_TICKBYCOUNT_QRY                                    = 71101;
//! Tick数据按时间段查询失败	
const int TAPIERROR_TICKBYPERIOD_QRY                                   = 71102;
//! Tick数据按DATE查询失败	
const int TAPIERROR_TICKBYDATE_QRY                                     = 71103;

//=============================================================================
//! 日线数据按照根数查询失败
const int TAPIERROR_DAYBYCOUNT_QRY                                     = 71201;
//! 日线数据按时间段查询失败	
const int TAPIERROR_DAYBYPERIOD_QRY                                    = 71202;
//! 日线数据按DATE查询失败	
const int TAPIERROR_DAYBYDATE_QRY                                      = 71203;

//=============================================================================
//! 周线数据按照根数查询失败
const int TAPIERROR_WEEKBYCOUNT_QRY                                    = 71301;
//! 周线数据按时间段查询失败	
const int TAPIERROR_WEEKBYPERIOD_QRY                                   = 71302;
//! 周线数据按DATE查询失败	
const int TAPIERROR_WEEKBYDATE_QRY                                     = 71303;

//=============================================================================
//! 月线数据按照根数查询失败
const int TAPIERROR_MONTHBYCOUNT_QRY                                   = 71401;
//! 月线数据按时间段查询失败	
const int TAPIERROR_MONTHBYPERIOD_QRY                                  = 71402;
//! 月线数据按DATE查询失败	
const int TAPIERROR_MONTHBYDATE_QRY                                    = 71403;

//=============================================================================
//! 年线数据按照根数查询失败
const int TAPIERROR_YEARBYCOUNT_QRY                                    = 71501;
//! 年线数据按时间段查询失败	
const int TAPIERROR_YEARBYPERIOD_QRY                                   = 71502;
//! 年线数据按DATE查询失败	
const int TAPIERROR_YEARBYDATE_QRY                                     = 71503;

//=============================================================================
//! N分钟数据按照根数查询失败
const int TAPIERROR_NMINUTESBYCOUNT_QRY                                = 71601;
//! N分钟数据按时间段查询失败	
const int TAPIERROR_NMINUTESBYPERIOD_QRY                               = 71602;
//! N分钟数据按DATE查询失败	
const int TAPIERROR_NMINUTESBYDATE_QRY                                 = 71603;

//=============================================================================
//! N天数据按照根数查询失败
const int TAPIERROR_NDAYSBYCOUNT_QRY                                   = 71701;
//! N天数据按时间段查询失败	
const int TAPIERROR_NDAYSBYPERIOD_QRY                                  = 71702;
//! N天数据按DATE查询失败	
const int TAPIERROR_NDAYSBYDATE_QRY                                    = 71703;
//=============================================================================
//! N秒数据按照根数查询失败
const int TAPIERROR_NSECONDBYCOUNT_QRY                                 = 71801;
//! N秒数据按时间段查询失败	
const int TAPIERROR_NSECONDSBYPERIOD_QRY                               = 71802;
//! N秒数据按DATE查询失败	
const int TAPIERROR_NSECONDSBYDATE_QRY                                 = 71803;

//! 超过行情最大总订阅数
const int TAPIERROR_SUBSCRIBEQUOTE_MAX                                 = 72001;
//! 超过该交易所行情最大订阅数
const int TAPIERROR_SUBSCRIBEQUOTE_EXCHANGE_MAX                        = 72002;
//! 没有该行情的订阅权限
const int TAPIERROR_SUBSCRIBEQUOTE_NO_RIGHT                            = 72101;
//! 没有该交易所下行情的订阅权限
const int TAPIERROR_SUBSCRIBEQUOTE_NO_EXCHANGE_RIGHT                   = 72102;
/** @}*/

//=============================================================================
/**
 *	\addtogroup G_ERR_TAP_UPPER_GW	上手网关错误代码定义
 *	@{
 */
//=============================================================================
//! 发送数据失败
const int TAPIERROR_ORDER_SEND                                         = 80001;
//! 发送报单失败，网关没连接到交易所
const int TAPIERROR_DLG_NULL                                           = 80002;
//! 报单字段有误
const int TAPIERROR_ORDER_FIELD                                        = 80003;
//! 被上手拒绝
const int TAPIERROR_TRADE_REJ_BYUPPER                                  = 80004;

/** @}*/

//=============================================================================
/**
 *	\addtogroup G_ERR_TAP_PROTOCOL	tap协议API错误代码定义
 *	@{
 */
//=============================================================================

//! 创建交易服务对象失败
const int TAPIERROR_TAPSERVER_CREATE                                   = 81001;
//! 连接总线失败
const int TAPIERROR_CONNECT_BUS                                        = 81002;
//! 接收到的数据错误
const int TAPIERROR_GWRCV_DATA                                         = 81003;
//! 数据帧头标识错误
const int TAPIERROR_FRAME_FLAG                                         = 81004;
//! 数据不全
const int TAPIERROR_GWREC_DATA_PARTICAL                                = 81005;
//! FrameHead_TYPE错误
const int TAPIERROR_FRAMEHEAD_TYPE                                     = 81006;
//! 管理服务发来的数据	
const int TAPIERROR_MANAGESERVER_MATCH                                 = 81007;
//! 没有对应的内部代码
const int TAPIERROR_QRY_INNERCOMM0DITY                                 = 81008;
//! 没有对应的客户编码
const int TAPIERROR_CLIENTNO                                           = 81009;
//! 没能对应的外部代码
const int TAPIERROR_QRY_UPPERCOMMODITY                                 = 81010;
//! 网关当前不能查询交易所时间
const int TAPIERROR_QRY_MARKETSTATE                                    = 81011;
//! 创建交易服务对象失败
const int TAPIERROR_TRADEFRONT_TAPSERVER_CREATE                        = 82001;
//! 连接总线失败
const int TAPIERROR_TRADEFRONT_CONNECT_BUS                             = 82002;
//! 启动链路线程失败
const int TAPIERROR_TRADEFRONT_LINK_THREAD                             = 82003;
//! 订阅登录服务失败
const int TAPIERROR_TRADEFRONT_SUBLOGIN                                = 82004;
//! 订阅登录查询服务失败
const int TAPIERROR_TRADEFRONT_SUBLOGINQUERY                           = 82005;
//! 订阅管理基本服务失败
const int TAPIERROR_TRADEFRONT_SUBMANAGEBASIC                          = 82006;
//! 订阅管理高级服务失败
const int TAPIERROR_TRADEFRONT_SUBMANAGEADVANCED                       = 82007;
//! 订阅结算服务失败
const int TAPIERROR_TRADEFRONT_SUBSETTLE                               = 82008;
//! 订阅结算信息服务失败
const int TAPIERROR_TRADEFRONT_SUBSETTLEMESSAGE                        = 82009;
//! 订阅结算资金服务失败
const int TAPIERROR_TRADEFRONT_SUBSETTLEMONEY                          = 82010;
//! 订阅交易服务失败
const int TAPIERROR_TRADEFRONT_SUBTRADE                                = 82011;
//! 完成端口创建失败
const int TAPIERROR_TRADEFRONT_SERVERSTART_IOCP                        = 82012;
//! 创建并启动工作线程失败
const int TAPIERROR_TRADEFRONT_SERVERSTART_WORKER                      = 82013;
//! 创建并启动侦听线程失败
const int TAPIERROR_TRADEFRONT_SERVERSTART_LISTEN                      = 82014;
//! 侦听端口失败
const int TAPIERROR_TRADEFRONT_SERVERSTART_PORT                        = 82015;
//! 前置不允许该模块登录
const int TAPIERROR_TRADEFRONT_MODULETYPEERR                           = 82016;
//! 前置提交数据失败
const int TAPIERROR_TRADEFRONT_SENDDATAERR                             = 82017;
//! 前置不允许登录
const int TAPIERROR_TRADEFRONT_NOTALLOWLOGIN                           = 82018;
//! 一次请求太多数据
const int TAPIERROR_TRADEFRONT_TOOMANYDATA                             = 82019;
//! 前置没有所要数据
const int TAPIERROR_TRADEFRONT_NODATA                                  = 82020;
//! 下单失败，小前置与服务器断开
const int TAPIERROR_TRADEFRONT_DICONNECT_SMTRADE                       = 82021;
//! 下单失败，前置与交易服务器断开
const int TAPIERROR_TRADEFRONT_DICONNECT_TRADE                         = 82022;
// ----------------行情前置错误代码定义-----------------------------------------------
//! 不支持的行情协议
const int TAPIERROR_QUOTEFRONT_UNKNOWN_PROTOCOL                        = 83001;

/** @}*/

//=============================================================================
/**
 *	\addtogroup G_ERR_TAP_FUTUREBANK	银期服务错误代码定义
 *	@{
 */
//=============================================================================
//! 期货资金账户不存在
const int TAPIERROR_ACCOUNTNO_NOEXIT                                   = 90001;
//! 本银行不允许从期货端发起签解约
const int TAPIERROR_BANKSINGED_NOTALLOW                                = 90002;
//! 银期认证密码错误
const int TAPIERROR_BANKPASSWORDAUTH                                   = 90003;
//! 账户没有该币种资金记录
const int TAPIERROR_BANKFUTUREVALUE_NOTEXIT                            = 90004;
//! 账户对应币种出金金额大于可转资金
const int TAPIERROR_BANKFUTURETRANSFER_NOTENOUGH                       = 90005;
//! 账户对应币种出金超过单笔最大金额
const int TAPIERROR_BANKFUTURETRANSFER_MORE_SIGMAXVALUE                = 90006;
//! 账户对应币种出金超过单日最大出金笔数
const int TAPIERROR_BANKFUTURETRANSFER_MORE_DAYMAXCOUNT                = 90007;
//! 账户对应币种出金超过单日最大出金金额
const int TAPIERROR_BANKFUTURETRANSFER_MORE_DAYMAXVALUE                = 90008;
//! 资金冻结失败
const int TAPIERROR_FUTURE_FROZEN_FAIL                                 = 90009;
//! 转账查询不到账户信息
const int TAPIERROR_BANKFUTURETRANSFER_FTOB_NOACCINFO                  = 90010;
//! 转账查询不到客户银行信息
const int TAPIERROR_BANKFUTURETRANSFER_FTOB_NOACCBANKINFO              = 90011;
//! 转账查询不到客户资金信息
const int TAPIERROR_BANKFUTURETRANSFER_FTOB_NOACCFUNDINFO              = 90012;
//! 转账查询不到转账参数信息
const int TAPIERROR_BANKFUTURETRANSFER_FTOB_NORENTINFO                 = 90013;
//! 转账查询不到已出金信息
const int TAPIERROR_BANKFUTURETRANSFER_FTOB_NOCOUNTVALUEINFO           = 90014;
//! 转账查询不到账户证件信息
const int TAPIERROR_BANKFUTURETRANSFER_FTOB_NOACCCERTINFO              = 90015;
//! 银期网关没开启或异常
const int TAPIERROR_BANKWAY_STOP                                       = 90016;
//! 没有收到或丢失转账流水
const int TAPIERROR_TRANSFERINFO_LOST                                  = 90017;
//! 客户银行禁止转账
const int TAPIERROR_BANK_NOTALLOWTRANSFER                              = 90018;
//! 银行转期货操作已完成,无法冲正
const int TAPIERROR_CASHIN_NOREVERSE                                   = 90019;

// ----------------风险监控服务错误代码定义-----------------------------------------------
//! 风控品种信息查询失败
const int TAPIERROR_RISKCOMMODITY_QRY                                  = 91001;
//! 预算查询不到合约信息
const int TAPIERROR_RISKCONTRACT_FUND                                  = 91002;
//! 风险资金查询不到风险参数
const int TAPIERROR_RISKFUND_QRY                                       = 91003;
//! 合约行情价格增加失败
const int TAPIERROR_CONTRACTQUOTE_ADD                                  = 91004;

/** @}*/

#endif //! TAP_API_ERROR_H
