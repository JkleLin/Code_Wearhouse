#include <iostream>
#include <cmath>
using namespace std;
const double PI = 3.1415926;
class Cone {
	double r, h;
public:
	Cone(double r0, double h0) {
		r = r0; h = h0;
	}
	double LateralArea() { return (PI*r*sqrt(r*r + h*h)); }
	double FullArea() { return (PI*r*(sqrt(r*r + h*h) + r)); }
	double Volume() { return PI*r*r*h / 3; }
};

void main() {
	double r, h;
	cin >> r >> h;
	Cone obj(r, h);
	cout << "侧面积:" << obj.LateralArea() << endl;
	cout << "全面积:" << obj.FullArea() << endl;
	cout << "体积:" << obj.Volume() << endl;
}