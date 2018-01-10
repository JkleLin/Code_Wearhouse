#include <iostream>
#include <string>
using namespace std;
class CStudent {
	string reg_num;
	string name;
	double math, eng, comp;
public:
	CStudent(string num, string nam, double mat, double enl, double com) {
		reg_num = num;
		name = nam;
		math = mat;
		eng = enl;
		comp = com;
	}
	double Sum() {
		return (math + eng + comp);
	}
	double Average() { return (Sum() / 3); }
	void Display() { cout << reg_num << ' ' << name << ' ' << math << ' ' << eng << ' ' << comp << endl; }
};