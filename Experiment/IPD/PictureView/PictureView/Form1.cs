using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using System.IO;

namespace PictureView
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private List<string> pathList = new List<string> ();
        private int CurPictureID;

        private void FillDirectorytV ()
        {
            //创建根路径
            TreeNode computer = new TreeNode();
            computer.Name = "computer";
            computer.Text = "计算机";

            //添加到文件列表视窗
            DirectorytV.Nodes.Add(computer);

            //获取设备盘符
            string[] dirs = Directory.GetLogicalDrives();
            foreach (string dir in dirs)
            {
                TreeNode cRoot = new TreeNode(dir);
                computer.Nodes.Add(cRoot);
            }
        }

        private void Form1_Load(object sender, EventArgs e)
        {
            FillDirectorytV();
        }

        private void DirectorytV_BeforeExpand(object sender, TreeViewCancelEventArgs e)
        {
            //获取展开的节点与节点路径
            TreeNode selected_Node = DirectorytV.SelectedNode;
            int childNum = selected_Node.GetNodeCount(true);
            string path = DirectorytV.SelectedNode.FullPath;

            //获取子树
            for (int i = 1; i < childNum; i++)
            {

            }
        }
    }
}
