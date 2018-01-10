#include <iostream> 
#include <cstdio> 
#include <cstdlib> 
using namespace std;
class Score {
private:
	int Chinese, Math, English;
	static int TotalScore;
	static int TotalStudent;
public:
	Score() {}
	void setScore(int c, int m, int e) {

		Chinese = c;
		Math = m;
		English = e;
		TotalScore += c + m + e;
		TotalStudent++;

	}
	int Sum() {

		return (Chinese + Math + English);

	}
	void Show() {

		cout << Chinese << ' ' << Math << ' ' << English << endl;

	}
	double static getAve() {

		return (TotalScore / TotalStudent);

	}
};
int Score::TotalScore = 0;
int Score::TotalStudent = 0;


int main() {
	int n, op, i, c, m, e;
	cin >> n;
	int id = 1;
	Score sco[11];
	while (n--) {
		cin >> op;
		if (op == 1) {
			cin >> c >> m >> e;

			sco[id++].setScore(c, m, e);

		}
		else if (op == 2) {
			cin >> i;

			cout << sco[i].Sum() << endl;

		}
		else if (op == 3) {
			cin >> i;

			sco[i].Show();

		}
		else {

			printf("%.2f", Score::getAve());

		}
	}
	return 0;
}