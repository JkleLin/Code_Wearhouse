#include <iostream>
#include <fstream>
using namespace std;
int main() {
	fstream f1, f2, f3;
	f1.open("f1.txt", ios::out);
	f2.open("f2.txt", ios::out);
	int i = 1;
	for (; i <= 15; i++) {
		f1 << i*i*1. + 0.5 << ' ';
	}
	for (i = 1; i <= 10; i++) {
		f2 << 10. * i + 0.5 << ' ';
	}
	f2 << 357.9;
	f1.close();
	f2.close();
	f1.open("f1.txt", ios::in);
	f2.open("f2.txt", ios::in);
	double a[26];
	int n = 0;
	for (i = 0; i < 15; i++) {
		f1 >> a[n];
		n++;
	}
	for (i = 0; i < 11; i++) {
		f2 >> a[n];
		n++;
	}

	f1.close();
	f2.close();
	for (n = 0; n < 26; n++)
		for (i = 0; i < 25 - n; i++)
			if (a[i] > a[i + 1]) {
				double t = a[i];
				a[i] = a[i + 1];
				a[i + 1] = t;
			}

	f3.open("f3.txt", ios::out);
	for (i = 0; i < 26; i++) {
		f3 << a[i] << ' ';
	}
	f3.close();
	return 0;
}