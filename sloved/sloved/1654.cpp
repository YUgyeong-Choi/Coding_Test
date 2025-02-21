#include <iostream>
using namespace std;

int main() {
	double arr[10001];
	int k, n;
	cin >> k >> n;
	for (int i = 0; i < k; ++i) {
		cin>> arr[i];
	}

	double length = 1, cnt=0, max=0;

	while (1) {
		for (int i = 0; i < k; ++i) {
			cnt += arr[i] / length;
		}

		if (cnt >= n) {
			if (max <= length) {
				max = length;
			}
		}
		else {
			break;
		}
		cnt = 0;
		length++;
	}

	cout << max;
	return 0;
}