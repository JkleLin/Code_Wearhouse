#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

//Ïß¶Î
class Beeline {
public:
	Beeline(int x1, int y1, int x2, int y2){
		xo = x1;
		yo = y1;
		xt = x2;
		yt = y2;
	}
	Beeline() {
		xo = yo = xt = yt = 0;
	}
	double Length() {
		return (sqrt((xo - xt)*(xo - xt) + (yo - yt)*(yo - yt)));
	}
	void show() {
		cout << '(' << xo << ',' << yo << "),(" << xt << ',' << yt << ')' << endl;
	}
private:
	int xo,yo,xt,yt;
};

//Èý½ÇÐÎ
class Triangle {
public:
	Triangle(Beeline line1, Beeline line2, Beeline line3) {
		a = line1;
		b = line2;
		c = line3;
	}
	double Area() {
		double p, s;
		p = (a.Length() + b.Length() + c.Length()) / 2;
		s = sqrt(p*(p - a.Length())*(p - b.Length())*(p - c.Length()));
		return s;
	}
	void print() {
		cout << "Three edges' point are listed as follows:\n";
		a.show();
		b.show();
		c.show();
		cout << "The area of this triangle is: " << setprecision(2) << fixed << Area() << endl;
	}
private:
	Beeline a, b, c;
};

int main() {
	int x1, y1, x2, y2, x3, y3;
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
	Beeline line1(x1, y1, x2, y2), line2(x2, y2, x3, y3), line3(x3, y3, x1, y1);
	Triangle tri(line1, line2, line3);
	tri.print();
	return 0;
}