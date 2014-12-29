using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace TapAPITest_GUI
{
    class Config
    {
        static public CertInfo Cert = new CertInfo();
        static public ServerSetting QuoteServerSetting = new ServerSetting("Quote");
        static public ServerSetting TradeServerSetting = new ServerSetting("Trade");
        static private INIHelper m_INIHelper = new INIHelper("config.ini");

        public class CertInfo
        {
            private string m_Session;
            public CertInfo()
            {
                m_Session = "Cert"; 
            }

            public string AuthCode
            {
                set
                {
                    m_INIHelper.WriteString(m_Session, "AuthCode", value);
                }
                get
                {
                    return m_INIHelper.ReadString(m_Session, "AuthCode");
                }
            }

        }

        public class ServerSetting
        {
            private string m_Session;
            public ServerSetting(string strSession)
            {
                m_Session = strSession; 
            }

            public string IP
            {
                set
                {
                    m_INIHelper.WriteString(m_Session, "IP", value);
                }
                get
                {
                   return m_INIHelper.ReadString(m_Session, "IP");
                }
            }
            public string Port
            {
                set
                {
                    m_INIHelper.WriteString(m_Session, "Port", value);
                }
                get
                {                    
                    return m_INIHelper.ReadString(m_Session, "Port");
                }
            }

            public string UserName
            {
                set
                {
                    m_INIHelper.WriteString(m_Session, "UserName", value);
                }
                get
                {
                    return m_INIHelper.ReadString(m_Session, "UserName");
                }
            }
            public string Password
            {
                set
                {
                    m_INIHelper.WriteString(m_Session, "Password", value);
                }
                get
                {
                    return m_INIHelper.ReadString(m_Session, "Password");
                }
            }
        }
                

    }
}
