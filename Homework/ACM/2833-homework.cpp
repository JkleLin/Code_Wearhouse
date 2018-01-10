#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main() {
	int K,alp_rep[26] = { 0 }, id[26] = { 0 }, is_have[26] = { 0 }, result = 0;
	string str; 
	cin >> str >> K;
	for (int i = 0; i < 26; i++)
		id[i] = i;
	for (int i = 0; i < str.size(); i++)
		alp_rep[str[i]-'a']++;
	for (int i = 0; i < 26; i++)
		for (int n = 0; n < 26 - i - 1; n++) {
			if (alp_rep[id[n]] > alp_rep[id[n + 1]]) {
				int temp = id[n];
				id[n] = id[n + 1];
				id[n + 1] = temp;
			}
		}
	for (int i = 0; i < 26; i++) {
		if (K < alp_rep[id[i]])
			break;
		K -= alp_rep[id[i]];
		is_have[id[i]] = 1;
	}
	for (int i = 0; i < 26; i++) {
		if (!is_have[id[i]])
			result++;
	}
	if (result){
		cout << result << endl;
		for (int i = 0; i < str.size(); i++) {
			if (!is_have[str[i] - 'a'])
				cout << str[i];
		}
		cout << endl;
	}
	else cout << 0 << endl;
	return 0;
}
