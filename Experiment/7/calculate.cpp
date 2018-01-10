#include <iostream>
#include <string>
using namespace std;
class Calculator {
	string funtion;
	int getnum(string fun);
public:
	Calculator(string fun) {funtion = fun;}
	void display();
};

int Calculator::getnum(string fun) {
	int num = 0;
	int i = 0;
	if (fun[i] < '0' && fun[i] > '9')
		return 0;
	for (; fun[i] != '='; i++) {
		switch (fun[i]) {
		case '+':
		case '-':
		case '*':
		case '/':if (fun[i + 1] == '+') return 0;
				 else if(fun[i + 1] == '-') return 0;
				 else if (fun[i + 1] == '*') return 0;
				 else if (fun[i + 1] == '/') return 0;
				 else num++; break;
		case '0':
		case '1':
		case '2':
		case '3':
		case '4':
		case '5':
		case '6':
		case '7':
		case '8':
		case '9':break;
		case '=':break;
		default:return 0;
		}
		
	}
	return num+1;
}
void Calculator::display() {
	int num = getnum(funtion);
	double sum = 0;
	if (num == 0) { cout << "error" << endl; return; }
	double *p = new double[num]();
	int *opera = new int[num - 1]();
	int i;
	int n = 0;
	for (i = 0; funtion[i] != '='; i++) {
		switch (funtion[i]) {
		case '0':p[n] = p[n] * 10 + 0; break;
		case '1':p[n] = p[n] * 10 + 1; break;
		case '2':p[n] = p[n] * 10 + 2; break;
		case '3':p[n] = p[n] * 10 + 3; break;
		case '4':p[n] = p[n] * 10 + 4; break;
		case '5':p[n] = p[n] * 10 + 5; break;
		case '6':p[n] = p[n] * 10 + 6; break;
		case '7':p[n] = p[n] * 10 + 7; break;
		case '8':p[n] = p[n] * 10 + 8; break;
		case '9':p[n] = p[n] * 10 + 9; break;
		case '=':break;
		case '+':opera[n] = 1; n++; break;
		case '-':opera[n] = 2; n++; break;
		case '*':opera[n] = 3; n++; break;
		case '/':opera[n] = 4; n++; break;
		{
		default:
			break;
		}
		}
	}
	for (i = num - 1; i >= 0; i--) {
		if (opera[i] == 3) {
			p[i] *= p[i+1];
			p[i+1] = 0;
		}
		if (opera[i] == 4) {
			p[i] /= p[i+1];
			p[i+1] = 0;
		}
	}
	sum = p[0];
	for (i = 0; i <= num - 1; i++) {
		if (opera[i] == 1)
			sum += p[i + 1];
		else if (opera[i] == 2)
			sum -= p[i + 1];
	}
	cout << sum << endl;
	return;
}

void main() {
	string fun;
	for (;;) {
		getline(cin, fun);
		Calculator cal(fun);
		cal.display();
	}
}
