#include <iostream>
using namespace std;

void output(char *a) {
	int n = 0, i = 0;
	char num[64];
	for (; a[0] != '\0'; a++) {
		if (a[0] >= '0' && a[0] <= '9') {
			for (; a[0] >= '0' && a[0] <= '9'; a++)
				num[i++] = a[0];
			num[i++] = ' ';
			n++;
		}
	}
	num[i] = '\0';
        if (n != 0)
	cout << n << endl;
	for (i = 0; num[i] != '\0'; i++) {
		if (num[i] != ' ')
			cout << num[i];
		else
			cout << endl;
	}
}

int main() {
	char a[64];
	cin.getline(a, 64);
	output(a);
	return 0;
}


