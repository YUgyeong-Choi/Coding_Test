#include <iostream>
using namespace std;

int main() {
	int num, cycle, cnt = 0;
	int chk = 0;
	cin >> cycle;

	for (int i = 0; i < cycle; ++i) {
		cin >> num;
		chk = 0;
		for (int j = 2; j <= num - 1; ++j) {
			if (num % j == 0) {
				chk = 1;
				break;
			}
		}

		if (chk == 0 && num != 1) {
			cnt++;
		}
	}

	cout << cnt;

	return 0;
}