#include <iostream>
using namespace std;

class DateType {
	int y, m, d;
public:
	DateType(int y0 = 1, int m0 = 1, int d0 = 1) { y = y0; m = m0; d = d0; };
	void IncrementDay();
	bool Equal(DateType dtc2) {
		if (y == dtc2.y || m == dtc2.m || d == dtc2.d)
			return true;
		else
			return false;
	}
	void PrintDate() {
		cout << y << '/' << m << '/' << d << endl;
	}
	
};

void DateType::IncrementDay() {
	this->d++;
	bool isleapyear = (this->y % 4 == 0 && this->y % 100 != 0 || this->y % 400 == 0);
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
	}//ÅÐ¶ÏÈÕÆÚ
	if (this->m > 12) { this->m = 1; this->y++; }
}

void main() {
	int y, m, d;
	cin >> y >> m >> d;
	DateType d1(y, m, d);
	cin >> y >> m >> d;
	DateType d2(y, m, d);
	d1.IncrementDay();
	bool isequal = d1.Equal(d2);
	d1.PrintDate();
	d2.PrintDate();
	cout << "Date1";
	if (isequal)
		cout << "=";
	else
		cout << "!=";
	cout << "Date2" << endl;
}
