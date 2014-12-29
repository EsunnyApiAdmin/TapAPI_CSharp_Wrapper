namespace TapAPITest_GUI
{
    partial class MainForm
    {
        /// <summary>
        /// 必需的设计器变量。
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// 清理所有正在使用的资源。
        /// </summary>
        /// <param name="disposing">如果应释放托管资源，为 true；否则为 false。</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows 窗体设计器生成的代码

        /// <summary>
        /// 设计器支持所需的方法 - 不要
        /// 使用代码编辑器修改此方法的内容。
        /// </summary>
        private void InitializeComponent()
        {
            this.btnConfig = new System.Windows.Forms.Button();
            this.btnConnectQuote = new System.Windows.Forms.Button();
            this.btnConnectTrade = new System.Windows.Forms.Button();
            this.btnSubQuote = new System.Windows.Forms.Button();
            this.QuoteView = new System.Windows.Forms.DataGridView();
            this.MainFormInsertOrderPanel = new System.Windows.Forms.Panel();
            this.OrderView = new System.Windows.Forms.DataGridView();
            ((System.ComponentModel.ISupportInitialize)(this.QuoteView)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.OrderView)).BeginInit();
            this.SuspendLayout();
            // 
            // btnConfig
            // 
            this.btnConfig.Location = new System.Drawing.Point(19, 12);
            this.btnConfig.Name = "btnConfig";
            this.btnConfig.Size = new System.Drawing.Size(75, 28);
            this.btnConfig.TabIndex = 0;
            this.btnConfig.Text = "服务器配置";
            this.btnConfig.UseVisualStyleBackColor = true;
            this.btnConfig.Click += new System.EventHandler(this.btnConfig_Click);
            // 
            // btnConnectQuote
            // 
            this.btnConnectQuote.Location = new System.Drawing.Point(121, 12);
            this.btnConnectQuote.Name = "btnConnectQuote";
            this.btnConnectQuote.Size = new System.Drawing.Size(75, 28);
            this.btnConnectQuote.TabIndex = 1;
            this.btnConnectQuote.Text = "连接行情";
            this.btnConnectQuote.UseVisualStyleBackColor = true;
            this.btnConnectQuote.Click += new System.EventHandler(this.btnConnectQuote_Click);
            // 
            // btnConnectTrade
            // 
            this.btnConnectTrade.Location = new System.Drawing.Point(223, 12);
            this.btnConnectTrade.Name = "btnConnectTrade";
            this.btnConnectTrade.Size = new System.Drawing.Size(75, 28);
            this.btnConnectTrade.TabIndex = 2;
            this.btnConnectTrade.Text = "连接交易";
            this.btnConnectTrade.UseVisualStyleBackColor = true;
            this.btnConnectTrade.Click += new System.EventHandler(this.btnConnectTrade_Click);
            // 
            // btnSubQuote
            // 
            this.btnSubQuote.Location = new System.Drawing.Point(325, 12);
            this.btnSubQuote.Name = "btnSubQuote";
            this.btnSubQuote.Size = new System.Drawing.Size(75, 28);
            this.btnSubQuote.TabIndex = 3;
            this.btnSubQuote.Text = "订阅行情";
            this.btnSubQuote.UseVisualStyleBackColor = true;
            this.btnSubQuote.Click += new System.EventHandler(this.btnSubQuote_Click);
            // 
            // QuoteView
            // 
            this.QuoteView.AllowUserToAddRows = false;
            this.QuoteView.AllowUserToDeleteRows = false;
            this.QuoteView.AllowUserToResizeColumns = false;
            this.QuoteView.AllowUserToResizeRows = false;
            this.QuoteView.ColumnHeadersHeightSizeMode = System.Windows.Forms.DataGridViewColumnHeadersHeightSizeMode.AutoSize;
            this.QuoteView.Location = new System.Drawing.Point(12, 57);
            this.QuoteView.MultiSelect = false;
            this.QuoteView.Name = "QuoteView";
            this.QuoteView.ReadOnly = true;
            this.QuoteView.RowTemplate.Height = 23;
            this.QuoteView.SelectionMode = System.Windows.Forms.DataGridViewSelectionMode.FullRowSelect;
            this.QuoteView.Size = new System.Drawing.Size(1328, 234);
            this.QuoteView.TabIndex = 5;
            // 
            // MainFormInsertOrderPanel
            // 
            this.MainFormInsertOrderPanel.Location = new System.Drawing.Point(12, 297);
            this.MainFormInsertOrderPanel.Name = "MainFormInsertOrderPanel";
            this.MainFormInsertOrderPanel.Size = new System.Drawing.Size(1328, 93);
            this.MainFormInsertOrderPanel.TabIndex = 6;
            // 
            // OrderView
            // 
            this.OrderView.AllowUserToAddRows = false;
            this.OrderView.AllowUserToDeleteRows = false;
            this.OrderView.ColumnHeadersHeightSizeMode = System.Windows.Forms.DataGridViewColumnHeadersHeightSizeMode.AutoSize;
            this.OrderView.Location = new System.Drawing.Point(12, 396);
            this.OrderView.MultiSelect = false;
            this.OrderView.Name = "OrderView";
            this.OrderView.ReadOnly = true;
            this.OrderView.RowTemplate.Height = 23;
            this.OrderView.SelectionMode = System.Windows.Forms.DataGridViewSelectionMode.FullRowSelect;
            this.OrderView.Size = new System.Drawing.Size(1328, 332);
            this.OrderView.TabIndex = 7;
            // 
            // MainForm
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 12F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(1352, 740);
            this.Controls.Add(this.btnSubQuote);
            this.Controls.Add(this.btnConfig);
            this.Controls.Add(this.OrderView);
            this.Controls.Add(this.btnConnectQuote);
            this.Controls.Add(this.MainFormInsertOrderPanel);
            this.Controls.Add(this.btnConnectTrade);
            this.Controls.Add(this.QuoteView);
            this.Name = "MainForm";
            this.Text = "启明星API_CSharpDemo";
            this.Load += new System.EventHandler(this.MainForm_Load);
            ((System.ComponentModel.ISupportInitialize)(this.QuoteView)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.OrderView)).EndInit();
            this.ResumeLayout(false);

        }

        #endregion

        private System.Windows.Forms.Button btnConfig;
        private System.Windows.Forms.Button btnConnectQuote;
        private System.Windows.Forms.Button btnConnectTrade;
        private System.Windows.Forms.Button btnSubQuote;
        private System.Windows.Forms.DataGridView QuoteView;
        private System.Windows.Forms.Panel MainFormInsertOrderPanel;
        private System.Windows.Forms.DataGridView OrderView;
        //private System.Windows.Forms.DataGridView QuoteView;
        //private System.Windows.Forms.Button btnQuoteConnect;
        //private System.Windows.Forms.Button btnTradeConnect;
        //private System.Windows.Forms.Button btnServerSetting;
        //private System.Windows.Forms.Button btnSubQuote;

    }
}

