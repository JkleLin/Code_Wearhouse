#include <iostream>
using namespace std;

int main() {
	int n[16];
	int i,sum;
	while (1) {
		sum = 0;
		for (i = 0; ; i++) {
			cin >> n[i];
			if (n[i] == 0 || n[0] == -1)
				break;
		}
		if (n[0] == -1)
			break;
		for (int j = 0; j < i; j++) {
			for (int k = 0; k < i; k++)
				if (2 * n[j] == n[k])
					sum++;
		}

		cout << sum << endl;
	}
	return 0;
}