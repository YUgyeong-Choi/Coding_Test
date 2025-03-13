#include <iostream>
#include <stack>
using namespace std;

int main() {
	stack<char> VPS;
	int num;
	cin >> num;
	for (int i = 0; i < num; ++i) {
		string str;
		cin >> str;
		
		int length = str.length();

		for (int i = 0; i < length; ++i) {
			if (VPS.empty() && str[i] == ')') {
				VPS.push(str[i]);
				break;
			}

			if (str[i] == '(') {
				VPS.push(str[i]);
			}
			else {
				VPS.pop();
			}
		}

		if (VPS.empty()) {
			cout << "YES\n";
		}
		else {
			cout << "NO\n";
			while (!VPS.empty()) VPS.pop();
		}

	}


	return 0;
}