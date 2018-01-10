#include <iostream>
using namespace std;

int getlong(unsigned long x) {
	int i;
	for (i = 0; x != 0; i++) {
		x /= 10;
	}
	return i;
}

int f(unsigned long x, int n, int &Lxn) {
	int k = getlong(x);
	if (n > k) {
		Lxn = 0;
		return 0;
	}

	int i;
	unsigned long x2 = x;
	for (i = 0; i < (k - n); i++)
		x /= 10;
	Lxn = x % 10;
	for (i = 1; i < n; i++)
		x2 /= 10;
	return (x2 % 10);
}

int main() {
	unsigned long int x;
	int n, Lxn;
	cin >> x >> n;
	int Rxn = f(x, n, Lxn);
	cout << Lxn << ' ' << Rxn << endl;
	return 0;
}