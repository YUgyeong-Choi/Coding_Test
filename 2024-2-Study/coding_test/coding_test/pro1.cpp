#include <iostream>
using namespace std;

//숫자의 합 구하기 백준 11720
int main() {
	int N(0), sum(0);
	string numbers;
	cin >> N >> numbers;

	for (int i = 0; i < N; i++) {
		sum += numbers[i] - '0';
	}
	cout << sum << endl;
	return 0;
}