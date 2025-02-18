//시간 제한 잘보기 !!
#include <iostream>
using namespace std;

int getNum(int x, int y) {
	if (y == 1) {
		return 1;
	}
	else if (x == 0) {
		return y;
	}
	else {
		return (getNum(x - 1, y) + getNum(x, y - 1));
	}
}

int main() {
	int T, k, n;
	cin >> T;

	for (int i = 0; i < T; i++) {
		cin >> k >> n;
		cout << getNum(k, n) << "\n";
	}
}