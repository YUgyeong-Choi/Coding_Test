#include <iostream>
using namespace std;

int main() {
	int x, cnt;
	cin >> x;
	cnt = x-1;

	for (int i = 0; i < x; ++i) {
		for (int j = cnt; j > 0; --j) {
			cout << " ";
		}

		for (int j = x - cnt; j > 0; --j) {
			cout << "*";
		}

		cout << "\n";
		cnt--;
	}
	return 0;
}