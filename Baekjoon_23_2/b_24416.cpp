#include <iostream>
using namespace std;

int rec_fib(int n, int sum) {
	if (n == 1 or n == 2) {
		return sum + 1;
	}
	else {
		return (rec_fib(n - 1, sum) + rec_fib(n - 2, sum));
	}
}

int  dyn_fib(int n, int sum) {
	int* arr = new int[n+1];

	arr[1] = 1;
	arr[2] = 1;

	for (int i = 3; i <= n; i++) {
		arr[i] = arr[i - 1] + arr[i - 2];
		sum++;
	}

	return sum;
}

int main() {
	int n;

	cin >> n;
	cout << rec_fib(n, 0) << " " << dyn_fib(n, 0);

}