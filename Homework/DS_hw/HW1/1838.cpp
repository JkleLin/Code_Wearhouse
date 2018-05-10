#include <iostream>
#include <string>
using namespace std;
int main() {
	string s, t;
	cin >> s >> t;

	if (s.length() != t.length()) {
		cout << 'no';
		return 0;
	}

	bool IsSame = true;
	for (int i = 0; s[i + 1] != '\0' && IsSame; i++) {
		if (s[i] != s[i + 1]) {
			int tem = s[i] - t[i];
			for (int j = 0; s[j] != '\0'; j++) {
				if (s[j] == s[i] && (s[j] - tem) != t[j]) {
					IsSame = false;
					break;
				}
			}
		}
	}

	if (IsSame)
		for (int i = 0; s[i + 1] != '\0' && IsSame; i++) {
			if (t[i] != s[i + 1]) {
				int tem = t[i] - s[i];
				for (int j = 0; t[j] != '\0'; j++) {
					if (t[j] == t[i] && (t[j] - tem) != s[j]) {
						IsSame = false;
						break;
					}
				}
			}
		}

	if (IsSame)
		cout << "yes";
	else cout << "no";
	return 0;
}