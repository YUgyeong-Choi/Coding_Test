#include <iostream>
using namespace std;

int main() {
	int cnt;
	cin >> cnt;

	int cycle;
	string str;

	for (int i = 0; i < cnt; ++i) {
		cin >> cycle;
		cin >> str;
		for (int j = 0; j < str.size(); ++j) {
			for (int k = 0; k < cycle; ++k) {
				cout << str[j];
			}
		}
		cout << "\n";
	}

	return 0;
}