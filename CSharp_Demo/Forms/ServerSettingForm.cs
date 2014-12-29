using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace TapAPITest_GUI
{
    public partial class ServerSettingForm : Form
    {
        
        public ServerSettingForm()
        {
            InitializeComponent();
            textQuoteIP.DataBindings.Add("Text", Config.QuoteServerSetting, "IP");
            textQuotePort.DataBindings.Add("Text", Config.QuoteServerSetting, "Port");
            textQuoteUserName.DataBindings.Add("Text", Config.QuoteServerSetting, "UserName");
            textQuotePassword.DataBindings.Add("Text", Config.QuoteServerSetting, "Password");
            textTradeIP.DataBindings.Add("Text", Config.TradeServerSetting, "IP");
            textTradePort.DataBindings.Add("Text", Config.TradeServerSetting, "Port");
            textTradeUserName.DataBindings.Add("Text", Config.TradeServerSetting, "UserName");
            textTradePassword.DataBindings.Add("Text", Config.TradeServerSetting, "Password");
        }

    }
}
