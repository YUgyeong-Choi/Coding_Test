#include <iostream>
using namespace std;

int main() {
	int N = 1000;
	int cnt = 1;

	// 연산 횟수 = N
	for (int i = 0; i < N; i++) {
		cout << "연산 횟수: " << cnt++ << endl;
	}

	// 연산 횟수 = 3N
	cnt = 1;
	for (int i = 0; i < N; i++) {
		cout << "연산 횟수: " << cnt++ << endl;
	}
	for (int i = 0; i < N; i++) {
		cout << "연산 횟수: " << cnt++ << endl;
	}
	for (int i = 0; i < N; i++) {
		cout << "연산 횟수: " << cnt++ << endl;
	}

	//연산 횟수는 3배의 차이가 나지만,일반적으로 상수를 무시하므로 
	//두 코드 모두 시간 복잡도는 O(n)임
	return 0;
}