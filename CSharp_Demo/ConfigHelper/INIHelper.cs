using System;
using System.IO;
using System.Runtime.InteropServices;
using System.Text;
using System.Collections;
using System.Collections.Specialized;

namespace TapAPITest_GUI
{
    class INIHelper
    {
        public string FileName; //INI文件名 
        [DllImport("kernel32")]
        private static extern bool WritePrivateProfileString(string section, string key, string val, string filePath);
        
        [DllImport("kernel32")]
        private static extern int GetPrivateProfileString(string section, string key, string def, StringBuilder retVal, int size, string filePath);

        public INIHelper(string AFileName)
        {
            FileInfo fileInfo = new FileInfo(AFileName);
            if ((!fileInfo.Exists))
            {
                System.IO.StreamWriter sw = new System.IO.StreamWriter(AFileName, false, System.Text.Encoding.Default);
            }
            FileName = fileInfo.FullName;
        }
 
        public void WriteString(string Section, string Key, string Value)
        {
            if (!WritePrivateProfileString(Section, Key, Value, FileName))
            {
                throw (new ApplicationException("写Ini文件出错"));
            }
        }
        
        public string ReadString(string Section, string Key)
        {
            StringBuilder strValue = new StringBuilder(2048);
            GetPrivateProfileString(Section, Key, "", strValue, 2048, FileName);
            return strValue.ToString();
        }

    }

}
