#include <iostream>
using namespace std;

int main() {
	int rope[10001];
	int k, n;
	cin >> k >> n;

	for (int i = 0; i < k; ++i) {
		cin >> rope[i];
	}

	int num = 1;
	int total = 0;
	int maxNum=0;
	while (1) {
		for (int i = 0; i < k; ++i) {
			total += rope[i] / num;
		}

		cout << total << "\n";

		if (total == (n+1) && maxNum < num) {
			maxNum = num;
		}

		if (total < n) {
			break;
		}

		total = 0;
		num++;
	}

	cout << maxNum;


	return 0;
}