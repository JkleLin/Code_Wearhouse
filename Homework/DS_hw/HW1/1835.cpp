#include <iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	int *arr = new int[n];
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	int zero_num = 0;
	for (int i = 0; i < n; i++) {
		if (arr[i] != 0)
			cout << arr[i] << ' ';
		else zero_num++;
	}
	for (int i = 0; i < zero_num; i++)
		cout << 0 << ' ';
	return 0;
}