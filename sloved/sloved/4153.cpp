#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	vector<int> vecNum;
	while (1) {
		int num;
		for (int i = 0; i < 3; ++i) {
			cin >> num;
			vecNum.push_back(num);
		}

		if ((vecNum[0] == vecNum[1]) && (vecNum[1]==vecNum[2])) {
			break;
		}

		auto max = max_element(vecNum.begin(), vecNum.end());

		int sum = 0;
		for (int i = 0; i < 3; ++i) {
			if (vecNum[i] != *max) {
				sum += vecNum[i] * vecNum[i];
			}
		}

		if (((*max) * (*max)) == sum) {
			cout << "right\n";
		}
		else {
			cout << "wrong\n";
		}

		vecNum.clear();
	}

	return 0;
}