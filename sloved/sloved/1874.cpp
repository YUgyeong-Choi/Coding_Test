#include <iostream>
#include <stack>
#include <list>
using namespace std;

int main() {
	stack<int> getStack;
	list<char> ansList;

	int cnt = 1;
	int getNum;
	cin >> getNum;

	for (int i = 0; i < getNum; ++i) {
		int x;
		cin >> x;
		while (cnt <= x) {
			getStack.push(cnt);
			cnt++;
			ansList.push_back('+');
		}

		if (getStack.top() == x) {
			getStack.pop();
			ansList.push_back('-');
		}
		else {
			cout << "NO";
			return 0;
		}
	}

	for (auto chr : ansList) {
		cout << chr << "\n";
	}

	return 0;
}
