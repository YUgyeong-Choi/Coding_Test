#include <iostream>
using namespace std;

int main() {
	int sum = 0;
	int getNum;
	for (int i = 0; i < 5; ++i) {
		cin >> getNum;
		sum += getNum * getNum;
	}

	cout << sum % 10 << endl;

	return 0;
}