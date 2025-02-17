// EOF를 받으면 프로그램이 종료되도록 해야 함
#include <iostream>
using namespace std;

int main() {
	int a, b;

	while (cin >> a >> b) {
		cout << a + b << "\n";
	}

	return 0;
}