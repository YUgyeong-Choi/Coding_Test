#include <iostream>
using namespace std;

int main() {
	int h, min;
	cin >> h >> min;

	if (min < 45) {
		min = 60 - 45 + min;
		h--;
		if (h == -1) {
			h = 23;
		}
	}
	else {
		min = min - 45;
	}

	cout << h << " " << min;

	return 0;
}