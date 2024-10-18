#include <iostream>
using namespace std;

// 구간 합 구하기 2 백준 11660
int main() {
	int _iArraySize(0), _iAskNum(0);
	static int iArray[1024][1024] = { 0 };
	static int iSumArray[1024][1024] = { 0 };

	cin >> _iArraySize >> _iAskNum;
	for (int i = 1; i <= _iArraySize; ++i) {
		for (int j = 1; j <= _iArraySize; ++j) {
			cin >> iArray[i][j];
			iSumArray[i][j] = iSumArray[i - 1][j] + iSumArray[i][j - 1] - iSumArray[i - 1][j - 1] + iArray[i][j];
		}
	}

	for (int i = 0; i < _iAskNum; i++) {
		int x1(0), y1(0), x2(0), y2(0);
		cin >> x1 >> y1 >> x2 >> y2;

		int _iResult = iSumArray[x2][y2] - iSumArray[x1 - 1][y2] - iSumArray[x2][y1 - 1] + iSumArray[x1 - 1][y1 - 1];
		cout << _iResult << endl;
	}

	return 0;
}