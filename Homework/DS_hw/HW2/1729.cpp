#include <iostream>
#include <string>
using namespace std;

int main() {
	int n,i;
	int x = 1;
	while (cin >> n && n != 0) {
		string *name = new string[n];
		for (i = 0; i < n; i++) {
			cin >> name[i];
		}
		if (n != 0) {
			cout << "SET " << x++ << endl;
			for (i = 0; i < n; i += 2)
				cout << name[i] << endl;
			for ((n % 2 == 0 ? i -= 1 : i -= 3); i > 0; i -= 2)
				cout << name[i] << endl;
		}
	}
	return 0;
}