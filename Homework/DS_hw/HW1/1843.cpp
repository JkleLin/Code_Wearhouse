#include <iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	int *arr = new int[n];
	bool *IsCheck = new bool[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		IsCheck[i] = 0;
	}
	int repeat = 0;
	int ans;
	for (int i = 0; i <= n; i++) {
		if (IsCheck[i] == 0) {
			for (int j = 0; j < n; j++) {
				if (arr[i] == arr[j]) {
					IsCheck[j] = 1;
					repeat++;
				}
			}
			if (repeat == 1)
				ans = arr[i];
		}
		repeat = 0;
	}
	cout << ans;
	return 0;
}