#include<iostream>  
#include<cmath>  
using namespace std;
int main() {
	while (1) {
		int n;
		cin >> n;
		if (n == 0)
			break;
		double min = 1000000000;
		double v, t0;
		while (n--) {
			cin >> v >> t0;
			if (t0 >= 0 && ceil(t0 + 4500 * 3.6 / v)<min)
				min = ceil(t0 + 4500 * 3.6 / v);
		}
		cout << min << endl;
	}
	return 0;
}