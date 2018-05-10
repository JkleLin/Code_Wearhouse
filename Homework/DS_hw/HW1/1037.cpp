#include <iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	int *arr = new int[n];
	cin >> arr[0];
	int min = arr[0];
	for (int i = 1; i < n; i++) {
		cin >> arr[i];
		if (arr[i] < min)
			min = arr[i];
	}
	int isMiss = 0;
	for (int i = min; i < n; i++) {
		for (int j = 0; j < n; j++)
			if (arr[j] == i)
				isMiss = 1;
		if (isMiss == 0) {
			cout << i;
			break;
		}
		isMiss = 0;
	}
	
	return 0;
}