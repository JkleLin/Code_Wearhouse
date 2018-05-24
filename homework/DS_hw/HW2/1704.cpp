#include <iostream>
using namespace std;

int main() {
	int n = 12;
	double month[12];
	double all = 0;
	for (int i = 0; i < n; i++) {
		cin >> month[i];
		all += month[i];
	}
	cout << '$' << all / 12;
	return 0;
}