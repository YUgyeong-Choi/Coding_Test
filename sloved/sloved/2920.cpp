#include <iostream>
using namespace std;

int main() {
	int num;
	int ascending = 1;
	int descending = 8;
	bool checkAscending = true;
	bool checkDescending = true;

	for (int i = 0; i < 8; ++i) {
		cin >> num;
		if (num != ascending) {
			checkAscending = false;
		}

		if (num != descending) {
			checkDescending = false;
		}
		ascending++;
		descending--;
	}

	if (checkAscending) cout << "ascending";
	if (checkDescending) cout << "descending";

	if (!checkAscending && !checkDescending) cout << "mixed";

	return 0;
}