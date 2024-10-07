#include <iostream>
using namespace std;

// 평균 구하기 백준 1546
int main() {

// My Code
#pragma region MyCode
/*
	int N, Max(0);
	int Sub[1001] = { 0 };
	float Sum(0);
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> Sub[i];
		if (Sub[i] > Max) {
			Max = Sub[i];
		}
	}

	for (int i = 0; i < N; i++) {
		Sum += Sub[i] / float(Max) * 100;
	}
	cout << Sum / N;

*/

#pragma endregion




//교재 코드
#pragma region BookCode
	int N = 0, Max = 0;
	int A[1000];
	long sum = 0;
	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> A[i];
		if (A[i] > Max) {
			Max = A[i];
		}
		sum += A[i];
	}

	cout << sum * 100.0 / Max / N;
#pragma endregion

	return 0;
}