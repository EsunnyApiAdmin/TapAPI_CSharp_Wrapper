namespace TapAPITest_GUI
{
    partial class InsertOrderPanel
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

        #region 组件设计器生成的代码

        /// <summary> 
        /// 设计器支持所需的方法 - 不要
        /// 使用代码编辑器修改此方法的内容。
        /// </summary>
        private void InitializeComponent()
        {
            this.label1 = new System.Windows.Forms.Label();
            this.textContractID = new System.Windows.Forms.TextBox();
            this.label2 = new System.Windows.Forms.Label();
            this.label3 = new System.Windows.Forms.Label();
            this.cbOrderType = new System.Windows.Forms.ComboBox();
            this.cbOrderSide = new System.Windows.Forms.ComboBox();
            this.label4 = new System.Windows.Forms.Label();
            this.cbOpenCloseMode = new System.Windows.Forms.ComboBox();
            this.label5 = new System.Windows.Forms.Label();
            this.label6 = new System.Windows.Forms.Label();
            this.textPrice = new System.Windows.Forms.TextBox();
            this.label7 = new System.Windows.Forms.Label();
            this.textQty = new System.Windows.Forms.TextBox();
            this.btnInsertOrder = new System.Windows.Forms.Button();
            this.textAccountNo = new System.Windows.Forms.TextBox();
            this.SuspendLayout();
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.Location = new System.Drawing.Point(8, 20);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(53, 12);
            this.label1.TabIndex = 0;
            this.label1.Text = "资金账号";
            // 
            // textContractID
            // 
            this.textContractID.AutoCompleteMode = System.Windows.Forms.AutoCompleteMode.SuggestAppend;
            this.textContractID.AutoCompleteSource = System.Windows.Forms.AutoCompleteSource.CustomSource;
            this.textContractID.Location = new System.Drawing.Point(67, 44);
            this.textContractID.Name = "textContractID";
            this.textContractID.Size = new System.Drawing.Size(136, 21);
            this.textContractID.TabIndex = 3;
            // 
            // label2
            // 
            this.label2.AutoSize = true;
            this.label2.Location = new System.Drawing.Point(20, 47);
            this.label2.Name = "label2";
            this.label2.Size = new System.Drawing.Size(29, 12);
            this.label2.TabIndex = 2;
            this.label2.Text = "合约";
            // 
            // label3
            // 
            this.label3.AutoSize = true;
            this.label3.Location = new System.Drawing.Point(422, 6);
            this.label3.Name = "label3";
            this.label3.Size = new System.Drawing.Size(53, 12);
            this.label3.TabIndex = 4;
            this.label3.Text = "委托类型";
            // 
            // cbOrderType
            // 
            this.cbOrderType.FormattingEnabled = true;
            this.cbOrderType.Items.AddRange(new object[] {
            "市价",
            "限价"});
            this.cbOrderType.Location = new System.Drawing.Point(481, 4);
            this.cbOrderType.Name = "cbOrderType";
            this.cbOrderType.Size = new System.Drawing.Size(53, 20);
            this.cbOrderType.TabIndex = 5;
            this.cbOrderType.Text = "市价";
            // 
            // cbOrderSide
            // 
            this.cbOrderSide.FormattingEnabled = true;
            this.cbOrderSide.Items.AddRange(new object[] {
            "买",
            "卖"});
            this.cbOrderSide.Location = new System.Drawing.Point(481, 28);
            this.cbOrderSide.Name = "cbOrderSide";
            this.cbOrderSide.Size = new System.Drawing.Size(53, 20);
            this.cbOrderSide.TabIndex = 7;
            this.cbOrderSide.Text = "买";
            // 
            // label4
            // 
            this.label4.AutoSize = true;
            this.label4.Location = new System.Drawing.Point(421, 30);
            this.label4.Name = "label4";
            this.label4.Size = new System.Drawing.Size(53, 12);
            this.label4.TabIndex = 6;
            this.label4.Text = "买卖方向";
            // 
            // cbOpenCloseMode
            // 
            this.cbOpenCloseMode.FormattingEnabled = true;
            this.cbOpenCloseMode.Items.AddRange(new object[] {
            "开仓",
            "平仓"});
            this.cbOpenCloseMode.Location = new System.Drawing.Point(482, 53);
            this.cbOpenCloseMode.Name = "cbOpenCloseMode";
            this.cbOpenCloseMode.Size = new System.Drawing.Size(53, 20);
            this.cbOpenCloseMode.TabIndex = 9;
            this.cbOpenCloseMode.Text = "开仓";
            // 
            // label5
            // 
            this.label5.AutoSize = true;
            this.label5.Location = new System.Drawing.Point(422, 55);
            this.label5.Name = "label5";
            this.label5.Size = new System.Drawing.Size(53, 12);
            this.label5.TabIndex = 8;
            this.label5.Text = "开平方式";
            // 
            // label6
            // 
            this.label6.AutoSize = true;
            this.label6.Location = new System.Drawing.Point(240, 20);
            this.label6.Name = "label6";
            this.label6.Size = new System.Drawing.Size(53, 12);
            this.label6.TabIndex = 0;
            this.label6.Text = "委托价格";
            // 
            // textPrice
            // 
            this.textPrice.Location = new System.Drawing.Point(299, 17);
            this.textPrice.Name = "textPrice";
            this.textPrice.Size = new System.Drawing.Size(70, 21);
            this.textPrice.TabIndex = 1;
            // 
            // label7
            // 
            this.label7.AutoSize = true;
            this.label7.Location = new System.Drawing.Point(238, 47);
            this.label7.Name = "label7";
            this.label7.Size = new System.Drawing.Size(53, 12);
            this.label7.TabIndex = 2;
            this.label7.Text = "委托数量";
            // 
            // textQty
            // 
            this.textQty.Location = new System.Drawing.Point(299, 44);
            this.textQty.Name = "textQty";
            this.textQty.Size = new System.Drawing.Size(70, 21);
            this.textQty.TabIndex = 3;
            // 
            // btnInsertOrder
            // 
            this.btnInsertOrder.Location = new System.Drawing.Point(587, 14);
            this.btnInsertOrder.Name = "btnInsertOrder";
            this.btnInsertOrder.Size = new System.Drawing.Size(92, 45);
            this.btnInsertOrder.TabIndex = 10;
            this.btnInsertOrder.Text = "下单";
            this.btnInsertOrder.UseVisualStyleBackColor = true;
            this.btnInsertOrder.Click += new System.EventHandler(this.button1_Click);
            // 
            // textAccountNo
            // 
            this.textAccountNo.AutoCompleteMode = System.Windows.Forms.AutoCompleteMode.SuggestAppend;
            this.textAccountNo.AutoCompleteSource = System.Windows.Forms.AutoCompleteSource.CustomSource;
            this.textAccountNo.Location = new System.Drawing.Point(67, 17);
            this.textAccountNo.Name = "textAccountNo";
            this.textAccountNo.Size = new System.Drawing.Size(136, 21);
            this.textAccountNo.TabIndex = 1;
            // 
            // InsertOrderPanel
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 12F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.Controls.Add(this.btnInsertOrder);
            this.Controls.Add(this.cbOpenCloseMode);
            this.Controls.Add(this.label5);
            this.Controls.Add(this.cbOrderSide);
            this.Controls.Add(this.label4);
            this.Controls.Add(this.cbOrderType);
            this.Controls.Add(this.label3);
            this.Controls.Add(this.textQty);
            this.Controls.Add(this.textContractID);
            this.Controls.Add(this.label7);
            this.Controls.Add(this.label2);
            this.Controls.Add(this.textPrice);
            this.Controls.Add(this.label6);
            this.Controls.Add(this.textAccountNo);
            this.Controls.Add(this.label1);
            this.Name = "InsertOrderPanel";
            this.Size = new System.Drawing.Size(885, 77);
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.TextBox textContractID;
        private System.Windows.Forms.Label label2;
        private System.Windows.Forms.Label label3;
        private System.Windows.Forms.ComboBox cbOrderType;
        private System.Windows.Forms.ComboBox cbOrderSide;
        private System.Windows.Forms.Label label4;
        private System.Windows.Forms.ComboBox cbOpenCloseMode;
        private System.Windows.Forms.Label label5;
        private System.Windows.Forms.Label label6;
        private System.Windows.Forms.TextBox textPrice;
        private System.Windows.Forms.Label label7;
        private System.Windows.Forms.TextBox textQty;
        private System.Windows.Forms.Button btnInsertOrder;
        private System.Windows.Forms.TextBox textAccountNo;
    }
}
