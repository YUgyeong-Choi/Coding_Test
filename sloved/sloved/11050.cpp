//재귀함수 쓰는 문제
#include <iostream>
using namespace std;

int Factorial(int n) {
	if (n <= 1) { 
		return 1;
	}
	else {
		return n * Factorial(n - 1);
	}
}

int main() {
	int a, b;
	cin >> a >> b;

	int answer = Factorial(a) / (Factorial(a - b) * Factorial(b));
	cout << answer;
	return 0;
}