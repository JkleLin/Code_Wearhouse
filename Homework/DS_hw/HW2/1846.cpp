#include <iostream>
#include <cstring>
using namespace std;
template <class T>
class Stack {
private:
	int size;
	T *stor;
	T *but;
	T *top;
public:
	Stack(int ms) {
		size = ms;
		stor = new T[size];
		but = stor;
		top = stor;
	};
	bool push(T pu) {
		top[0] = pu;
		top++;
		return true;
	};
	T pop() {
		if (top == but)
			return 0;
		top--;
		T x = top[0];
		return x;
	}
	T getTop() {
		if (top == but)
			return 0;
		return top[-1];
	}
	bool isEmpty() {
		return (top == but);
	}
};

int main() {
	int steps,x;
	char opera[20];
	cin >> steps;
	Stack<int> mstack(steps);
	Stack<int> mins(steps);
	for (int i = 0; i < steps; i++) {
		cin >> opera;

		if (strcmp(opera, "push") == 0) {
			cin >> x;
			if (mstack.isEmpty())
				mins.push(x);
			else if (x <= mins.getTop())
				mins.push(x);
			mstack.push(x);
		}
		else if (strcmp(opera, "getMin") == 0) {
			cout << mins.getTop() << endl;
		}
		else if (strcmp(opera, "top") == 0) {
			cout << mstack.getTop() << endl;
		}
		else if (strcmp(opera, "pop") == 0) {
			int t = mstack.pop();
			if (t == mins.getTop())
				mins.pop();
		}

	}
 	return 0;
}