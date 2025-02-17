#include <iostream>
#include <list>
using namespace std;

int main() {
	int a, getNum;
	cin >> a;
	int min = 1000001;
	int max = -1000001;


	for (int i = 0; i < a; ++i) {
		cin >> getNum;
		if (min > getNum) {
			min = getNum;
		}
		if (max < getNum) {
			max = getNum;
		}
	}

	cout << min << " " << max;
	return 0;
}