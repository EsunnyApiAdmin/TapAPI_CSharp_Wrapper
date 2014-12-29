using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace TapAPITest_GUI
{
    static class Program
    {
        /// <summary>
        /// 应用程序的主入口点。
        /// </summary>
        [STAThread]
        static void Main()
        {

            //Config.QuoteServerSetting.IP = "42.159.201.85";
            //Config.QuoteServerSetting.Port = "6668";
            //Config.QuoteServerSetting.UserName = "LIANGXH";
            //Config.QuoteServerSetting.Password = "123456";

            //Config.TradeServerSetting.IP = "42.159.201.85";
            //Config.TradeServerSetting.Port = "8889";
            //Config.TradeServerSetting.UserName = "LIANGXH";
            //Config.TradeServerSetting.Password = "123456";
            
            Application.EnableVisualStyles();
            Application.SetCompatibleTextRenderingDefault(false);
            Application.Run(new MainForm());
        }
    }
}
