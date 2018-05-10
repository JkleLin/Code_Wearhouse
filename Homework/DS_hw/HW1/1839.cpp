#include <iostream>
#include <math.h>
using namespace std;
int main() {
	int n;
	int sum = 0;
	cin >> n;
	bool *num = new bool[n];
	num[0] = 0;
	for (int i = 0; i < n; i++)
		num[i] = 1;
	for (int i = 1; i < n; i++)
		if (num[i])
			for (int j = 2*i+1; j < n; j += i + 1)
				num[j] = 0;
	for (int i = 1; i < n; i++)
		if (num[i])
			sum++;
	cout << sum;
	return 0;
}