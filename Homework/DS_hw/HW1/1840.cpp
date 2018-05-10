#include <iostream>
#include <string>
using namespace std;
int main() {
	string stand;
	string put[4];
	bool IsTrue = true;
	cin >> stand;
	for (int i = 0; i < 4; i++)
		cin >> put[i];
	string check;
	check = "0000";
	int addchar = 0;
	for (int i = 0; i < 4; i++) {
		if (check[i] == '0') {
			check[i] = 'a' + addchar;
			for (int j = i+1; j < 4; j++) {
				if (put[j][0] == put[i][0])
					check[j] = 'a' + addchar;
			}
			addchar++;
		}
	}
	for (int i = 0; i < 4; i++)
		if (stand[i] != check[i])
			IsTrue = false;
	cout << (IsTrue ? "true" : "false");
	return 0;
}