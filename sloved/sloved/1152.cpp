//공백도 문자열을 받는 것
#include <iostream>
#include <string>
using namespace std;

int main() {
	string str;
	int cnt = 0;
	bool isStart = true;
	getline(cin, str);
	for (int i = 0; i < str.size(); ++i) {
		if (str[i] != ' ' && isStart) {
			cnt++;
			isStart = false;
		}

		if (str[i] == ' ') {
			isStart = true;
		}
	}

	cout << cnt;
	return 0;
}