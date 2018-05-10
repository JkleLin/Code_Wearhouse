#include <iostream>
using namespace std;
int main() {
	int i, n;
	int a, b;
	cin >> n;
	int *ans = new int[n];
	for (i = 0; i < n; i++) {
	cin >> a >> b;
	ans[i] = a + b;
	}
	for (i = 0; i < n; i++)
		cout << ans[i] << endl;
	return 0;
}