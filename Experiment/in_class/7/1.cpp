#include <iostream>
using namespace std;

class DateType {
	int y, mon, d;
public:
	DateType(int y0 = 1, int m0 = 1, int d0 = 1) { y = y0; mon = m0; d = d0; };
	void IncrementDay();
	bool Equal(DateType dtc2) {
		if (y == dtc2.y || mon == dtc2.mon || d == dtc2.d)
			return true;
		else
			return false;
	}
	void PrintDate() {
		cout << y << '-' << mon << '-' << d ;
	}
	DateType GetDate() {
		DateType dt(y,mon,d);
		return (dt);
	}
};

void DateType::IncrementDay() {
	this->d++;
	bool isleapyear = (((this->y % 4 == 0) && (this->y % 100 != 0)) || (this->y % 400 == 0));
	switch (this->mon) {
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:if (this->d > 31) { this->d = 1; this->mon++; }break;
	case 2:if (isleapyear) {
		       if (this->d > 29) { this->d = 1; this->mon++; }
	       }
		   else {
			   if (this->d > 28) { this->d = 1; this->mon++; }
		   }break;
	default:if (this->d > 30) { this->d = 1; this->mon++; }
	}//判断日期
	if (this->mon > 12) { this->mon = 1; this->y++; }
}

class TimeType {
    int h,min,s;
public:
	TimeType(int h0, int m0, int s0) {
		h = h0; min = m0; s = s0;
	}
	TimeType() {h = 0; min = 0; s = 0;}
	void PrintTime() {
		cout << h << ':' << min << ':' << s ;
	}
	bool IncrementSec(int t) {
		s += t;
		if (s > 59) {
			s = s-60;
			min++;
		}
		if (min > 59) {
			min = 0;
			h++;
	    }
		if (h > 23) {
			h = 0;
			return true;
		}
		else
			return false;
			
	}
};

class DateTimeType:public DateType, public TimeType {
public:
	DateTimeType():DateType(),TimeType(){};
	DateTimeType(int y, int mon, int d, int h, int min, int s):DateType(y,mon,d),TimeType(h,min,s){};
    void PrintDateTime() {
		PrintDate();
		cout << ' ' ;
		PrintTime();
		cout << endl;
	}
	virtual void IncrementSecond(int t) {
	    bool yup = IncrementSec(t);
	    if (yup) IncrementDay();
	}
};
int main() {
    DateTimeType dttm1(1999,12,31,23,59,59), dttm2;
    (dttm1.GetDate()).PrintDate(); //调用对象成员所属类的公有成员函数
    cout<<endl;
    dttm1.PrintDateTime(); //调用本派生类的成员函数 PrintDateTime
    dttm2.PrintDateTime();
    dttm1.IncrementSecond(30) ; //调用本派生类成员函数
    dttm1.PrintDateTime();
	return 0;
}
