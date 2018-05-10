#include <iostream>
using namespace std;
int main() {
	int n,tar;
	cin >> n >> tar;
	int *arr = new int[n];
	for (int i = 0; i < n; i++) 
		cin >> arr[i];
	for (int i = 0; i < n; i++) { 
		for (int j = i + 1; j < n; j++) {
			if (arr[i] + arr[j] == tar)
				cout << i + 1 << ' ' << j + 1 << endl;
		}
	}
	return 0;
}