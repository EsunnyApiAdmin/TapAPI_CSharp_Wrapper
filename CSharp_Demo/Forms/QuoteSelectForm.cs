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
    public partial class QuoteSelectForm : Form
    {
        public QuoteSelectForm()
        {
            InitializeComponent();
            listNotSelected.Sorted = true;
            listSelected.Sorted = true;
        }

        private void QuoteSelectForm_Load(object sender, EventArgs e)
        {
            cbExchange.Items.Clear();
            cbExchange.Items.AddRange(DataManager.Quote.ContractMgr.ExchangeSet.ToArray());
            if(cbExchange.Items.Count > 0)
            {
                cbExchange.SelectedIndex = 0;
            }
            listSelected.Items.Clear();
            listSelected.Items.AddRange(DataManager.Quote.ContractMgr.GetSubscribedContractList().ToArray());            
        }

        private void btnOK_Click(object sender, EventArgs e)
        {
            foreach (string item in listNotSelected.Items)
            {
                DataManager.Quote.ContractMgr.OnUnSubscribed(item);
            }

            foreach (string item in listSelected.Items)
            {
                DataManager.Quote.ContractMgr.OnSubscribed(item);
            }
        }

        private void btnAdd_Click(object sender, EventArgs e)
        {
            foreach (string item in listNotSelected.SelectedItems)
            {
                listSelected.Items.Add(item);
            }
            while (listNotSelected.SelectedItems.Count != 0)
            {
                listNotSelected.Items.RemoveAt(listNotSelected.SelectedIndices[0]);
            }
        }

        private void btnRemove_Click(object sender, EventArgs e)
        {
            foreach (string item in listSelected.SelectedItems)
            {
                listNotSelected.Items.Add(item);
            }
            while (listSelected.SelectedItems.Count != 0)
            {
                listSelected.Items.RemoveAt(listSelected.SelectedIndices[0]);
            }
        }

        private void btnClear_Click(object sender, EventArgs e)
        {
            foreach (string item in listSelected.Items)
            {
                listNotSelected.Items.Add(item);
            }
            listSelected.Items.Clear();
        }

        private void cbExchange_SelectedIndexChanged(object sender, EventArgs e)
        {
            listNotSelected.Items.Clear();
            string strExchangeNo = cbExchange.SelectedItem.ToString();
            List<string> UnSubscribedContract=  DataManager.Quote.ContractMgr.GetUnSubscribedContractList(strExchangeNo);
            foreach (string c in listSelected.Items)
            {
                UnSubscribedContract.Remove(c);
            }
            listNotSelected.Items.AddRange(UnSubscribedContract.ToArray());
        }



    }
}
