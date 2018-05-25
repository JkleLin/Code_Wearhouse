#include <iostream>
using namespace std;

int main() {
	double x;
	double y;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> x >> y;
		cout << "Property " << i + 1 << ": This property will begin eroding in year " << int(3.1415*(x*x+y*y)/2/50)+1 << "." << endl;
	}
	cout << "END OF OUTPUT." << endl;
	return 0;
}