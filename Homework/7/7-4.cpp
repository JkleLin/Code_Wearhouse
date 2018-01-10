#include<iostream> 
#include<string> 
using namespace std;
class Score {
private:


	int Phy, Math, Eng;
	string ID, Name;
	double Ave;

public:

	Score() {}
	Score(string id, string name, int phy, int math, int eng) {
		ID = id;
		Name = name;
		Phy = phy;
		Math = math;
		Eng = eng;
	}
	void Average() {
		Ave = (Phy + Math + Eng) / 3.0;
	}
	void Print() {
		cout << ID << ' ' << Name << ' ' << Phy << ' ' << Math << ' ' << Eng << ' ' << Ave << endl;
	}

};
int main() {
	string id, name;
	int phy, math, eng;
	cin >> id >> name >> phy >> math >> eng;
	Score sco(id, name, phy, math, eng);
	sco.Average();
	sco.Print();
	return 0;
}