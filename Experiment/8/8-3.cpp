#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main() {
	fstream f5, f6;
	f5.open("f5.txt", ios::in);
	f6.open("f6.txt", ios::out);
	string str;
	int i = 0;

	while (getline(f5, str)) {
    //判断是否为空行↓
		while (str.size() != 0) {
			if (str[i] == '\0')       //判断是否到行末
				break;
			if (str[i] == '/')
				if (str[i + 1] == '/')//判断是否为注释
					break;
			f6 << str[i];
			i++;
		}
		if (i != 0)
			f6 << endl;
		i = 0;
	}
	f5.close();
	f6.close();
	return 0;
}
