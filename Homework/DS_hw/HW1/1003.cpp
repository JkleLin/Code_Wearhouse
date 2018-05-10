#include <iostream>
using namespace std;
int main() {
	int i, n, k;
	int a = 1, b = 1;
	n = 16;
	int *ans = new int[n];
	for (i = 0; a != 0 || b != 0; i++) {
		cin >> a >> b;
		if (i > n) {
			n = 2*n;
			int *temp = new int[n];
			for (int j = 0; j < i; j++)
				temp[j] = ans[j];
			ans = temp;
		}
		ans[i] = a + b;
	}
	for (k = 0; k < i - 1; k++)
		cout << ans[k] << endl;
	return 0;
}