#include <iostream>
using namespace std;

//구간 합 구하기 1 백준 11659
int main() {
	int _iDataNum(0), _iAskNum(0);
	static int iSumArray[100001] = { 0 };
	cin >> _iDataNum >> _iAskNum;

	for (int i = 1; i <= _iDataNum; i++) {
		int _iNum(0);
		cin >> _iNum;
		iSumArray[i] = iSumArray[i - 1] + _iNum;
	}

	for (int j = 0; j < _iAskNum; j++) {
		int _iFrist(0), _iSecond(0);
		cin >> _iFrist >> _iSecond;
		cout << iSumArray[_iSecond] - iSumArray[_iFrist - 1]<<endl; 
	}

	return 0;
}