#include <iostream>
using namespace std;

void split(double x, int *iPart, double *fPart) {
	*iPart = int(x);
	*fPart = x - *iPart;
}

int main() {
	double x;
	int INT;
	double DOUBLE;
	cin >> x;
	split(x, &INT, &DOUBLE);
	cout << INT << ' ' << DOUBLE;
	return 0;
}