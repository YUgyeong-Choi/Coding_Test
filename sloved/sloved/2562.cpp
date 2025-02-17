#include <iostream>
using namespace std;

int main() {
	int getNum;
	int max = -1;
	int index = -1;

	for (int i = 0; i < 9; ++i) {
		cin >> getNum;
		if (max < getNum) {
			max = getNum;
			index = i + 1;
		}
	}
	cout << max << "\n" << index;

	return 0;
}