using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using TapQuoteAPI;

namespace TapAPITest_GUI
{
    class QuoteController
    {
        public  CTapQuoteAPINotify QuoteNotify = null;
        private ITapQuoteAPI m_api = null;
        private uint m_sessionID = 0;

        public delegate void OnQuoteUpdateHandler();
        public event OnQuoteUpdateHandler OnQuoteUpdateEvent;

        public delegate void OnRspLoginHandler(int errorCode, TapAPIQuotLoginRspInfo loginRspInfo);
        public event OnRspLoginHandler OnRspLoginEvent;

        public delegate void OnDisconnectHandler(int reasonCode);
        public event OnDisconnectHandler OnDisconnectEvent;

        public delegate void OnQryContractFinishHandler();
        public event OnQryContractFinishHandler OnQryContractFinishEvent;

        public QuoteController()
        {
            QuoteNotify = new CTapQuoteAPINotify();
            InitEventHandler();
        }
        public int InitQuoteAPI()
        {
            TapAPIApplicationInfo appInfo = new TapAPIApplicationInfo();
            appInfo.AuthCode = Config.Cert.AuthCode;
            int iResult = 0;
            m_api = TapQuote.CreateTapQuoteAPI(appInfo, out iResult);
            if (m_api != null)
            {
                m_api.SetAPINotify(QuoteNotify);
            }
            return iResult;
        }
        public void FreeApi()
        {
            ClearEventHandler();
            if (m_api != null)
            {
                TapQuote.FreeTapQuoteAPI(m_api);
            }
        }

        private void InitEventHandler()
        {
            QuoteNotify.OnRspLoginEvent += QuoteNotify_OnRspLoginEvent;
            QuoteNotify.OnAPIReadyEvent += QuoteNotify_OnAPIReadyEvent;
            QuoteNotify.OnQryFinishEvent += QuoteNotify_OnQryFinishEvent;
            QuoteNotify.OnQuoteUpdateEvent += QuoteNotify_OnQuoteUpdateEvent;
            QuoteNotify.OnDisconnectEvent += QuoteNotify_OnDisconnectEvent;
        }

        private void ClearEventHandler()
        {
            OnQuoteUpdateEvent = null;
            OnRspLoginEvent = null;
            OnDisconnectEvent = null;
            OnQryContractFinishEvent = null;
        }

        void QuoteNotify_OnDisconnectEvent(int reasonCode)
        {
            if (null != OnDisconnectEvent)
            {
                OnDisconnectEvent(reasonCode);
            }
        }

        void QuoteNotify_OnRspLoginEvent(int errorCode, TapAPIQuotLoginRspInfo loginRspInfo)
        {
            if (null != OnRspLoginEvent)
            {
                OnRspLoginEvent(errorCode, loginRspInfo);
            }
        }

        void QuoteNotify_OnQuoteUpdateEvent()
        {
            if (null != OnQuoteUpdateEvent)
            {
                OnQuoteUpdateEvent();
            }
        }
        void QuoteNotify_OnQryFinishEvent(CTapQuoteAPINotify.QuoteQryType qryType)
        {
            switch (qryType)
            {
                case CTapQuoteAPINotify.QuoteQryType.Contract:
                    {
                        if (OnQryContractFinishEvent != null)
                        {
                            OnQryContractFinishEvent();
                        }
                    }
                    break;
                default:
                    break;
            }
        }

        void QuoteNotify_OnAPIReadyEvent()
        {
            m_api.QryContract(out m_sessionID, null);
        }


        public bool Login(string ip, ushort port, string username, string password)
        {
            m_api.SetHostAddress(ip, port);
            TapAPIQuoteLoginAuth loginInfo = new TapAPIQuoteLoginAuth();
            loginInfo.UserNo = username;
            loginInfo.Password = password;
            loginInfo.ISDDA = 'N';
            loginInfo.ISModifyPassword = 'N';
            return (0 == m_api.Login(loginInfo));
        }

        public void Disconnect()
        {
            m_api.Disconnect();
        }

        public bool SubQuote(TapQuoteAPI.TapAPIContract contract)
        {
            int iRet = m_api.SubscribeQuote(out m_sessionID, contract);
            return (0 == iRet);
        }

        public bool UnSubQuote(TapQuoteAPI.TapAPIContract contract)
        {
            int iRet = m_api.UnSubscribeQuote(out m_sessionID, contract);
            return (0 == iRet);
        }

    }
}
