#include <iostream>
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
		if (top - but == size)
			return false;
		top[0] = pu;
		top++;
		return true;
	};
	T pop() {
		if (top == but)
			return 0;
		T x = top[-1];
		top--;
		return x;
	}
	T GetTop() {
		if (top == but)
			return 0;
		return top[-1];
	}
	void Clean() {
		top = but;
	}
};

int main() {
	Stack<char> matchpair(50);
	char pairs[50];
	for (;cin >> pairs;)
	{
		matchpair.Clean();
	bool isMatch = true;
	for (int i = 0; pairs[i] != '\0'; i++) {
		switch (pairs[i]) {
		case '(':
		case '[':
		case '{':matchpair.push(pairs[i]); break;
		case ')':if (matchpair.GetTop() == '(')
			matchpair.pop();
				 else
					 isMatch = false;
			break;
		case ']':if (matchpair.GetTop() == '[')
			matchpair.pop();
				 else
					 isMatch = false;
			break;
		case '}':if (matchpair.GetTop() == '{')
			matchpair.pop();
				 else
					 isMatch = false;
			break;
		}
		if (isMatch == false)
			break;
	}
	if (isMatch == false || matchpair.GetTop() != 0)
		cout << "false" << endl;
	else
		cout << "true" << endl;
}
 	return 0;
}