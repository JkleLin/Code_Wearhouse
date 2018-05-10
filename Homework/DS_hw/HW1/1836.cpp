#include <iostream>
using namespace std;
int main() {
	int n,move;
	cin >> n >> move;
	int *arr = new int[n];
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	int seat = n - move;
	while (seat < 0)
		seat += n;
	for (int i = 0; i < n; i++) {
		if (seat >= n)
			seat -= n;
		cout << arr[seat] << ' ';
		seat++;
	}
	return 0;
}