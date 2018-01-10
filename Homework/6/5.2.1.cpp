#include <iostream>
using namespace std;

int mon_day(int n) {
	int days = 0;
	for (int i = 1; i < n; i++)
	switch (i) {
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:days += 31; break;
	case 2:days += 28; break;
	default:days += 30;
	}
	return days;
}//计算月——日

int get_leapyearday(int year1,int year2) {
	int n = 0;
	if (year1 < year2) {
		for (; year1 <= year2; year1++)
			if (year1 % 4 == 0 && year1 % 100 != 0 || year1 % 400 == 0)
				n++;
	}
	else
		for (; year2 <= year1; year2++)
			if (year2 % 4 == 0 && year2 % 100 != 0 || year2 % 400 == 0)
				n++;
	return n;
}

class Date {
	public:
		Date(int y, int m, int d) {
			year = y;
			month = m;
			day = d;
		}//构造函数
		Date() {
			year = 2000;
			month = 1;
			day = 1;
		}

		void isLeapYear() {
			if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
				cout << year << " is leap year." << endl;
			else
				cout << year << " isn't leap year." << endl;
		}//判断是否为闰年

		int getSkip(Date o) {
			int days = 0;
			days = (365 * (year - o.year)) + get_leapyearday(year, o.year)*(year > o.year ? 1 : -1);
			days += mon_day(month) + day;
			days -= mon_day(o.month) + o.day;
			return abs(days);
		}
	private:
		int year;
		int month;
		int day;
	};


int main() {
	int y, m, d;
	cin >> y >> m >> d;
	Date one(y, m, d);
	cin >> y >> m >> d;
	Date two(y, m, d);
	//输入两个日期

	one.isLeapYear();
	two.isLeapYear();
	//判断闰年

	cout << one.getSkip(two) << endl;
	//求日期差
	return 0;
}