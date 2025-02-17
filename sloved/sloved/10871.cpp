#include <iostream>
using namespace std;

int main() {
	int x, num;
	int getNum;
	cin >> x >> num;

	for (int i = 0; i < x; ++i) {
		cin >> getNum;
		if (getNum < num) {
			cout << getNum << " ";
		}
	}

	return 0;
}