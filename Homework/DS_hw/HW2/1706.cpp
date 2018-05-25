#include <iostream>
using namespace std;

int main() {
	int n = 1;
	int all;
	int sum;
	int ans,top;
	while (1) {
		cin >> n;
		all = 0;
		if (n == 0) break;
		bool *num = new bool[n];
		num[0] = 0;
		for (int i = 1; i < n; i++) num[i] = true;
		for (int i = 1; i < n; i++) {
			if (num[i] == 1) {
				for (int j = i + i + 1; j < n; j += i + 1) num[j] = 0;
				all++;
			}
		}
		int *base = new int[all];
		for (int i = 0,j = 0; i < n; i++)
			if (num[i] == true) {
				base[j++] = i + 1;
				top = j;
			}
		ans = 0;
		for (int i = 0; i <= top; i++) {
			sum = 0;
			for (int j = i; j <= top; j++) {
				if (sum < n)
					sum += base[j];
				else
					break;
			}
			if (sum == n)
				ans++;
		}
		cout << ans << endl;
	}
	return 0;
}