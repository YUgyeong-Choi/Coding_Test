#include <iostream>
using namespace std;

int main() {
	int getNum;
	cin >> getNum;
	int people[50][3];
	for (int i = 0; i < getNum; ++i) {
		cin >> people[i][0] >> people[i][1];
		people[i][2] = 1;
	}

	for (int i = 0; i < getNum; ++i) {
		for (int j = 0; j < getNum; ++j) {
			if (i != j) {
				if (people[i][0] < people[j][0] && people[i][1] < people[j][1]) {
					people[i][2]++;
				}
			}
		}
	}

	for (int i = 0; i < getNum; ++i) {
		cout << people[i][2] << " ";
	}


	return 0;
}