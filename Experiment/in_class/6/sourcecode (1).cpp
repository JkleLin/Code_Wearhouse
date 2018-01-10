#include<iostream>
#include<string.h>
using namespace std;
class Cstudent
{
	unsigned reg_num;
	char name[30];
	float math,eng,comp;
	public:
		float Sum();
		float Average();
		void Display();
		void setData(unsigned long r, char* n, float m, float e, float c);
};
void Cstudent::Display()
{
	cout<<reg_num<<" "<<name<<" "<<math<<" "<<eng<<" "<<comp<<endl;
}
float Cstudent::Sum() {
    return (math + eng + comp);
}
float Cstudent::Average() { return (Sum() / 3); }
void Cstudent::setData(unsigned long r, char* n, float m, float e, float c) {
    reg_num = r;
    strcpy (name,n);
    math = m;
    eng = e;
    comp = c;
}
int main()
{
	int n;//学生的数量
	unsigned long num;
	char name[30];
	float math,eng,comp;
	float max=0;
	int max_stu=0;//总成绩最高的学生的下标位置
	cin>>n;
	Cstudent *cp=new Cstudent[n];
//下面代码用于输入每个学生的学号，姓名，数学成绩，英语成绩，计算机成绩，寻找总成绩最高的学生的下标位置
	for (int i = 0; i < n; i++) {
    cin >> num >> name >> math >> eng >> comp;
    cp[i].setData(num,name,math,eng,comp);
    if (cp[i].Sum() > max) {
        max = cp[i].Sum();
        max_stu = i;
    }
}
	cout<<"TOTAL="<<n<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<"CStudent "<<i+1<<" : ";
		cp[i].Display();
	}
	for(int i=0;i<n;i++)
	{
		cout<<"CStudent"<<i+1<<".Sum="<<cp[i].Sum();
		cout<<",CStudent"<<i+1<<".average="<<cp[i].Average()<<endl;
	}
	cout<<"class_Sum_max="<<max<<endl;
	cout<<"The infomation of the CStudent with class_Sum_max : ";
//输出总成绩最高的学生信息
cp[max_stu].Display();
//释放cp
delete cp;
}



