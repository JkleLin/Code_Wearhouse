#include <iostream>
#include <string>
using namespace std;

class Person {
	string name,sex;
	int age;
public:
	Person(string n, int a, string s) {
		name = n;
		age = a;
		sex = s;
	}
	void virtual Display() {
		cout << name << ' ' << age << ' ' << sex << ' ';
	}
};

class Student:public Person {
	string Reg_Number;
	string department;
public:
	Student (string n, int a, string s, string reg, string dep):Person(n,a,s) {
		Reg_Number = reg;
		department = dep;
	}
	virtual void Display() {
	    Person::Display();
		cout << Reg_Number << ' ' << department;
	}
};

class Teacher:public Person {
	string course,post;
public:
	Teacher ( string n, int a, string s, string cour, string pos):Person(n,a,s) {
		course = cour;
		post = pos;
	}
	virtual void Display() {
	    Person::Display();
		cout << course << ' ' << post;
	}
};

class GraduateStudent:public Person {
	string department,advisor,Reg_Number;
public:
	GraduateStudent(string n, int a, string s,string reg, string dep, string adv):Person(n,a,s) {
		Reg_Number = reg;
		department = dep;
		advisor = adv;
	}
	virtual void Display() {
		Person::Display();
		cout << Reg_Number << ' ' << department << ' ' << advisor;
	}
};

int main() {
	Person per("sun",42,"M");
    Student stu("guo",22,"F", "1001", "comp");
	Teacher tea("fang",38,"M","english","professor");
	GraduateStudent gStu("wu", 25, "M", "1021", "comp", "wei");
	cout << "== per1.Display() => name,age,sex" << endl;
	per.Display();
	cout << endl;
	cout << "== stu1.Display() => name,age,sex,Reg_Number,department" << endl;
	stu.Display();
	cout << endl;
	cout << "== teach1.Display() => name,age,sex,course,post" << endl;
	tea.Display();
	cout << endl;
	cout << "== gStu.Display() => name,age,sex,Reg_Number,department,advisor" << endl;
	gStu.Display();
	cout << endl;
	return 0;
}

