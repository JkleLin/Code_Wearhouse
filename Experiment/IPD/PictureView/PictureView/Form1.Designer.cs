namespace PictureView
{
    partial class Form1
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
        /// 设计器支持所需的方法 - 不要修改
        /// 使用代码编辑器修改此方法的内容。
        /// </summary>
        private void InitializeComponent()
        {
            this.components = new System.ComponentModel.Container();
            this.toolStrip1 = new System.Windows.Forms.ToolStrip();
            this.OpenButton = new System.Windows.Forms.ToolStripButton();
            this.toolStripSeparator1 = new System.Windows.Forms.ToolStripSeparator();
            this.ZoomaddButton = new System.Windows.Forms.ToolStripButton();
            this.ZoomsubButton = new System.Windows.Forms.ToolStripButton();
            this.RestoreButton = new System.Windows.Forms.ToolStripButton();
            this.toolStripSeparator2 = new System.Windows.Forms.ToolStripSeparator();
            this.FrontButton = new System.Windows.Forms.ToolStripButton();
            this.NextButton = new System.Windows.Forms.ToolStripButton();
            this.DirectorytV = new System.Windows.Forms.TreeView();
            this.panel1 = new System.Windows.Forms.Panel();
            this.MainpBox = new System.Windows.Forms.PictureBox();
            this.toolTip1 = new System.Windows.Forms.ToolTip(this.components);
            this.toolStrip1.SuspendLayout();
            this.panel1.SuspendLayout();
            ((System.ComponentModel.ISupportInitialize)(this.MainpBox)).BeginInit();
            this.SuspendLayout();
            // 
            // toolStrip1
            // 
            this.toolStrip1.ImageScalingSize = new System.Drawing.Size(20, 20);
            this.toolStrip1.Items.AddRange(new System.Windows.Forms.ToolStripItem[] {
            this.OpenButton,
            this.toolStripSeparator1,
            this.ZoomaddButton,
            this.ZoomsubButton,
            this.RestoreButton,
            this.toolStripSeparator2,
            this.FrontButton,
            this.NextButton});
            this.toolStrip1.Location = new System.Drawing.Point(0, 0);
            this.toolStrip1.Name = "toolStrip1";
            this.toolStrip1.RenderMode = System.Windows.Forms.ToolStripRenderMode.Professional;
            this.toolStrip1.Size = new System.Drawing.Size(800, 27);
            this.toolStrip1.Stretch = true;
            this.toolStrip1.TabIndex = 0;
            this.toolStrip1.Text = "toolStrip1";
            // 
            // OpenButton
            // 
            this.OpenButton.DisplayStyle = System.Windows.Forms.ToolStripItemDisplayStyle.Image;
            this.OpenButton.Image = global::PictureView.Properties.Resources.OpenFile;
            this.OpenButton.ImageTransparentColor = System.Drawing.Color.Magenta;
            this.OpenButton.Name = "OpenButton";
            this.OpenButton.Size = new System.Drawing.Size(24, 24);
            this.OpenButton.Text = "toolStripButton1";
            this.OpenButton.ToolTipText = "打开";
            // 
            // toolStripSeparator1
            // 
            this.toolStripSeparator1.Name = "toolStripSeparator1";
            this.toolStripSeparator1.Size = new System.Drawing.Size(6, 27);
            // 
            // ZoomaddButton
            // 
            this.ZoomaddButton.DisplayStyle = System.Windows.Forms.ToolStripItemDisplayStyle.Image;
            this.ZoomaddButton.Image = global::PictureView.Properties.Resources.ZoomAdd;
            this.ZoomaddButton.ImageTransparentColor = System.Drawing.Color.Magenta;
            this.ZoomaddButton.Name = "ZoomaddButton";
            this.ZoomaddButton.Size = new System.Drawing.Size(24, 24);
            this.ZoomaddButton.Text = "toolStripButton2";
            this.ZoomaddButton.ToolTipText = "放大";
            // 
            // ZoomsubButton
            // 
            this.ZoomsubButton.DisplayStyle = System.Windows.Forms.ToolStripItemDisplayStyle.Image;
            this.ZoomsubButton.Image = global::PictureView.Properties.Resources.ZoomSub;
            this.ZoomsubButton.ImageTransparentColor = System.Drawing.Color.Magenta;
            this.ZoomsubButton.Name = "ZoomsubButton";
            this.ZoomsubButton.Size = new System.Drawing.Size(24, 24);
            this.ZoomsubButton.Text = "toolStripButton3";
            this.ZoomsubButton.ToolTipText = "缩小";
            // 
            // RestoreButton
            // 
            this.RestoreButton.DisplayStyle = System.Windows.Forms.ToolStripItemDisplayStyle.Image;
            this.RestoreButton.Image = global::PictureView.Properties.Resources.Restore;
            this.RestoreButton.ImageTransparentColor = System.Drawing.Color.Magenta;
            this.RestoreButton.Name = "RestoreButton";
            this.RestoreButton.Size = new System.Drawing.Size(24, 24);
            this.RestoreButton.Text = "toolStripButton4";
            this.RestoreButton.ToolTipText = "还原";
            // 
            // toolStripSeparator2
            // 
            this.toolStripSeparator2.Name = "toolStripSeparator2";
            this.toolStripSeparator2.Size = new System.Drawing.Size(6, 27);
            // 
            // FrontButton
            // 
            this.FrontButton.DisplayStyle = System.Windows.Forms.ToolStripItemDisplayStyle.Image;
            this.FrontButton.Image = global::PictureView.Properties.Resources.Front;
            this.FrontButton.ImageTransparentColor = System.Drawing.Color.Magenta;
            this.FrontButton.Name = "FrontButton";
            this.FrontButton.Size = new System.Drawing.Size(24, 24);
            this.FrontButton.Text = "toolStripButton5";
            this.FrontButton.ToolTipText = "上一张";
            // 
            // NextButton
            // 
            this.NextButton.DisplayStyle = System.Windows.Forms.ToolStripItemDisplayStyle.Image;
            this.NextButton.Image = global::PictureView.Properties.Resources.Next;
            this.NextButton.ImageTransparentColor = System.Drawing.Color.Magenta;
            this.NextButton.Name = "NextButton";
            this.NextButton.Size = new System.Drawing.Size(24, 24);
            this.NextButton.Text = "toolStripButton6";
            this.NextButton.ToolTipText = "下一张";
            // 
            // DirectorytV
            // 
            this.DirectorytV.Dock = System.Windows.Forms.DockStyle.Left;
            this.DirectorytV.Font = new System.Drawing.Font("宋体", 10.5F);
            this.DirectorytV.Location = new System.Drawing.Point(0, 27);
            this.DirectorytV.Name = "DirectorytV";
            this.DirectorytV.Size = new System.Drawing.Size(128, 423);
            this.DirectorytV.TabIndex = 1;
            this.DirectorytV.BeforeExpand += new System.Windows.Forms.TreeViewCancelEventHandler(this.DirectorytV_BeforeExpand);
            // 
            // panel1
            // 
            this.panel1.Controls.Add(this.MainpBox);
            this.panel1.Dock = System.Windows.Forms.DockStyle.Fill;
            this.panel1.Location = new System.Drawing.Point(128, 27);
            this.panel1.Name = "panel1";
            this.panel1.Size = new System.Drawing.Size(672, 423);
            this.panel1.TabIndex = 2;
            // 
            // MainpBox
            // 
            this.MainpBox.Dock = System.Windows.Forms.DockStyle.Fill;
            this.MainpBox.Location = new System.Drawing.Point(0, 0);
            this.MainpBox.Name = "MainpBox";
            this.MainpBox.Size = new System.Drawing.Size(672, 423);
            this.MainpBox.TabIndex = 3;
            this.MainpBox.TabStop = false;
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(8F, 15F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(800, 450);
            this.Controls.Add(this.panel1);
            this.Controls.Add(this.DirectorytV);
            this.Controls.Add(this.toolStrip1);
            this.Name = "Form1";
            this.Text = "图片浏览器";
            this.Load += new System.EventHandler(this.Form1_Load);
            this.toolStrip1.ResumeLayout(false);
            this.toolStrip1.PerformLayout();
            this.panel1.ResumeLayout(false);
            ((System.ComponentModel.ISupportInitialize)(this.MainpBox)).EndInit();
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.ToolStrip toolStrip1;
        private System.Windows.Forms.ToolStripButton OpenButton;
        private System.Windows.Forms.ToolStripSeparator toolStripSeparator1;
        private System.Windows.Forms.ToolStripButton ZoomaddButton;
        private System.Windows.Forms.ToolStripButton ZoomsubButton;
        private System.Windows.Forms.ToolStripButton RestoreButton;
        private System.Windows.Forms.ToolStripSeparator toolStripSeparator2;
        private System.Windows.Forms.ToolStripButton FrontButton;
        private System.Windows.Forms.ToolStripButton NextButton;
        private System.Windows.Forms.TreeView DirectorytV;
        private System.Windows.Forms.Panel panel1;
        private System.Windows.Forms.PictureBox MainpBox;
        private System.Windows.Forms.ToolTip toolTip1;
    }
}

