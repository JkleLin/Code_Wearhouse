#include <iostream>
using namespace std;

int main() {
	char str[500];
	int num = 0, i; //
	int ln;            //ln记录长度
	int longest_num = 0;   //最长单词的长度
	int longest_seat = 0;      //最长单词的位置
	int lseat = 0;             //单词位置差
	cin.getline(str, 500);
	
	for (i = 0; str[i] != '\0'; i++) {
		if (str[i] == ' ') {
			num++;
			ln = i - 1 - lseat;
			if (ln > longest_num) {
				longest_num = ln;
				longest_seat = lseat;
			}
			lseat = i;
		}
	}
	cout << num + 1 << ' ';
	for (i = longest_seat; i <= (longest_num + longest_seat); i++)
		cout << str[i];
	cout << endl;
	return 0;
}