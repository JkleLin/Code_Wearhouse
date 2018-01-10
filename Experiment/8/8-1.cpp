#include <iostream>
#include <fstream>
using namespace std;
int main() {
	fstream file;
	file.open("ft.txt" , ios::out);
	if (!file)
		return (-1);
	int k[15] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15 };
	for (int i = 0; i < 15; i++) {
		file << 2 * k[i] - 1 << ' ' << k[i] * k[i] + k[i] - 9.8 << ' ' << char('H' + k[i]) <<endl;
	}
	file.close();
	return 0;
}