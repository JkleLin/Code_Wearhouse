#include<iostream>
using namespace std;
int mon[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
class DateType
{
	int y,m,d;
	public:
		DateType(int y0=1,int m0=1,int d0=1)
		{
			y=y0;
			m=m0;
			d=d0;
		}
                void IncrementDay();
                bool Equal(DateType d2);
                 void PrintDate()
		{
			cout<<y<<":"<<m<<":"<<d<<endl;
		}
		 };
               bool DateType::Equal(DateType dtc2) {
		if ((y == dtc2.y && m == dtc2.m) && d == dtc2.d)
			return true;
		else
			return false;
	}

void DateType::IncrementDay() {
	this->d++;
	bool isleapyear = ((this->y % 4 == 0 && this->y % 100 != 0) || this->y % 400 == 0);
	switch (this->m) {
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:if (this->d > 31) { this->d = 1; this->m++; }break;
	case 2:if (isleapyear) {
		       if (this->d > 29) { this->d = 1; this->m++; }
	       }
		   else {
			   if (this->d > 28) { this->d = 1; this->m++; }
		   }break;
	default:if (this->d > 30) { this->d = 1; this->m++; }
	}//判断日期
	if (this->m > 12) { this->m = 1; this->y++; }
}
int main()
{
	int d1_y,d1_m,d1_d,d2_y,d2_m,d2_d;
	cin>>d1_y>>d1_m>>d1_d>>d2_y>>d2_m>>d2_d;
	DateType dt1(d1_y,d1_m,d1_d),dt2(d2_y,d2_m,d2_d);
	dt1.PrintDate();
	dt2.PrintDate();
	if(dt1.Equal(dt2))
		cout<<"True"<<endl;
	else
		cout<<"False"<<endl;
	dt1.IncrementDay(); 
	dt2.IncrementDay();
	dt1.PrintDate();
	dt2.PrintDate();

}

