#include <iostream>
using namespace std;

class stack {
public:
	int* arr;
	int s = 0;

	stack(int n) {
		arr = new int[n];
	}

	void push(int x) {
		arr[s] = x;
		s++;
	}


	void pop() {
		if (s == 0) {
			cout << -1 << "\n";
			return;
		}

		cout << arr[s - 1] << "\n";
		arr[s - 1] = 0;
		s--;
	}

	void size() {
		cout << s << "\n";
	}

	void empty() {
		if (s == 0) {
			cout << 1 << "\n";
			return;
		}

		cout << 0 << "\n";
	}

	void top() {
		if (s == 0) {
			cout << -1 << "\n";
			return;
		}

		cout << arr[s - 1] << "\n";
	}

};

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, o, x;
	cin >> n;

	stack STACK(n);

	while (n--) {
		cin >> o;

		if (o == 1) {
			cin >> x;
			STACK.push(x);
		}

		else if (o == 2) {
			STACK.pop();
		}

		else if (o == 3) {
			STACK.size();
		}

		else if (o == 4) {
			STACK.empty();
		}

		else if (o == 5) {
			STACK.top();
		}
	}
}