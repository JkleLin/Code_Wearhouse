#include <iostream>
using namespace std;
class Complex {
	double real, imag;
public:
	Complex() { real = 0; imag = 0; }
	Complex(double r, double i): real(r), imag(i) {};
	Complex AddCom(Complex c2) {
		Complex temp = c2;
		temp.imag += this->imag;
		temp.real += this->real;
		return temp;
	}
	void OutCom() {
		if (real)
			if (imag)
				cout << real << '+' << imag << 'i' << endl;
			else
				cout << real << endl;
		else if (imag)
			cout << imag << 'i' << endl;
		else
			cout << 0 << endl;
	}
};

void main() {
	double real, imag;
	cin >> real >> imag;
	Complex c1(real, imag);
	cin >> real >> imag;
	Complex c2(real, imag);
	Complex c3 = c1.AddCom(c2);
	c1.OutCom();
	c2.OutCom();
	c3.OutCom();
}