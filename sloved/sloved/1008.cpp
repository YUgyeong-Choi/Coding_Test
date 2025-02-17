// 부동소수점에 관한 문제
// double 자료형은 기본 출력 형식이 소수점 6자리까지

#include <iostream>
using namespace std;

int main() {
	double x, y;
	cin >> x >> y;

	cout.precision(12);
	cout << fixed;
	cout << x / y;

	return 0;
}