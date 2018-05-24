#include <iostream>
#include <string>
using namespace std;

struct listNode {
	string name;
	listNode *link;
};

int main() {
	listNode *first = new listNode;
	listNode *p = first;
	listNode *d;
	int n;
	cin >> n;
	string name;
	for (int i = 0; i < n; i++) {
		cin >> name;
		d = new listNode;
		d->name = name;
		p->link = d;
		p = d;
	}
	p->link = first->link;
	d = first;
	first = first->link;
	d->link = 0;
	delete d;

	int star = 0, pass = 0;
	cin >> name;
	for (int i = 0; name[i] != '\0'; i++) {
		if (name[i] != ',') {
			pass = pass * 10 + name[i] - '0';
		}
		else
		{
			star = pass;
			pass = 0;
		}

	}

	for (int i = 1; i < star; i++) {
		first = first->link;
	}

	for (int j = 0; j < n; j++) {
		for (int i = 2; i < pass; i++) {
			first = first->link;
		}
		if (first->link == first) {
			cout << first->name << endl;
			break;
		}
		p = first->link;
		d = p->link;
		first->link = d;
		p->link = 0;
		cout << p->name << endl;
		first = d;
		delete p;
	}

	return 0;
}