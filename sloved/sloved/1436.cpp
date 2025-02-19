#include <iostream>
#include <string>

using namespace std;

int main() {
	int getNum;
	int num = 666;
	int cnt = 1;
	string strNum;

	cin >> getNum;

	while (true) {
		if (cnt == getNum) break;
		num++;
		strNum = to_string(num);
		
		if (strNum.find("666") != -1) {
			cnt++;
			if (cnt == getNum) break;
		}
		
	}

	cout << num;

	return 0;
}