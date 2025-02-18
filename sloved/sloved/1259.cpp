#include <iostream>
using namespace std;

int main() {
	while (1) {
		string str;
		cin >> str;
		if (str[0] == '0') {
			break;
		}

		int cycle = str.size() / 2;
		bool check = true;
		for (int i = 0; i < cycle; ++i) {
			if (str[i] != str[str.size() - i - 1]) {
				check = false;
			}
		}

		if (check) {
			cout << "yes\n";
		}
		else {
			cout << "no\n";
		}

	}

	return 0;
}