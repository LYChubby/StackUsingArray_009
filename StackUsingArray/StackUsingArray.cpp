#include<iostream>
#include<string>
using namespace std;

class program {
private:
	string stack_array[5];
	int top;

public:
	program() {
		top = -1;
	}

	string push(string element) {
		if (top == 4) {
			cout << "Stack Full" << endl;
			return "";
		}

		top++;
		stack_array[top] = element;

		cout << endl;
		cout << element << " Ditambahkan (Pushed)" << endl;
		return;
	}

	void pop() {
		if (empty()) {
			cout << "\nStack Is Empty. Cannot Pop" << endl;
			return;
		}
		cout << "\nThe Popped Element Is : " << stack_array[top] << endl;
		top--;
	}

	bool empty() {
		return (top == -1);
	}
};

