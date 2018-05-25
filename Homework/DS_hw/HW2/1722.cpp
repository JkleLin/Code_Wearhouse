#include<iostream>  
using namespace std;

int main() {
	int n;
	unsigned int male;
	unsigned int female;
	unsigned int all;
	while (cin >> n && n != -1) {
		male = female = 0;
		all = 1;
		for (int i = 0; i < n; i++) {
			unsigned int f, m;
			f = female;
			m = male;
			all = 1 + (female + 1) + 2 * male;
			female = m;
			male = 1 + f + m;
		}
		cout << male << ' ' << all << endl;
	}
	return 0;
}