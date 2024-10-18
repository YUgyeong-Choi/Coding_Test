#include <iostream>
using namespace std;

// 나머지 합 구하기 백준 10986
int main() {
	int _iArraySize(0), _iM(0), _iCount(0);
	int iSumArray[106] = { 0 };
	int iCountArray[106] = { 0 };
	
	cin >> _iArraySize >> _iM;
	for (int i = 1; i < _iArraySize; ++i) {
		int _iNum(0);
		cin >> _iNum;
		iSumArray[i] = iSumArray[i - 1] + _iNum;
	}

	for (int i = 0; i < _iArraySize; ++i) {
		int remainder = iSumArray[i] % _iM;
		if (remainder == 0) {
			_iCount++;
		}
		iCountArray[remainder]++;
	}

	for (int i = 0; i <= _iM; ++i) {
		if (iCountArray[i]>1) {
			int _iResult = (iCountArray[i] * (iCountArray[i] - 1) / 2);
			_iCount += _iResult;
		}
	}

	cout << _iCount << endl;
	return 0;
}