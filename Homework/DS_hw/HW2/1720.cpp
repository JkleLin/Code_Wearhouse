#include <iostream>
using namespace std;

int main() {
	int n,speed,time,sum,lasttime;
	while (cin >> n && n != -1) {
		sum = lasttime = 0;
		for (int i = 0; i < n; i++) {
			cin >> speed >> time;
			sum += speed * (time - lasttime);
			lasttime = time;
		}
		cout << sum << " miles" << endl;
	}
	return 0;
}