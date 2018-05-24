#include <iostream>
using namespace std;

class Stack {
private:
	int *n;
	int *but;
	int *top;
public:
	Stack(int size) {
		n = new int[size];
		but = &n[0];
		top = &n[0];
	}
	void push(int x) {
		top[0] = x;
		top++;
	}
	int pop() {
		top--;
		return top[0];
	}
	int getTop() {
		if (!this->isEmpty())
			return top[-1];
		else
			return false;
	}
	bool isEmpty() {
		return (but == top);
	}
};

int main() {
	int n;
	bool isFind = false;
	cin >> n;
	Stack num(n);
	int x;
	for (int i = 0; i < n; i++) {
		cin >> x;
		num.push(x);
	}
	Stack ans(n);
	Stack peek(n);
	for (int i = 0; i < n; i++) {
		x = num.pop();
		if (peek.isEmpty()) {
			peek.push(x);
			ans.push(-1);
		}
		else {
			while (x >= peek.getTop() && !peek.isEmpty()) {
				peek.pop();
			}
			if (peek.isEmpty())
				ans.push(-1);
			else
			    ans.push(peek.getTop());
			peek.push(x);
		}
	}
	for (int i = 0; i < n; i++)
		cout << ans.pop() << ' ';
	return 0;
}