#include <iostream>
using namespace std;

// ���ӵ� �ڿ����� �� ���ϱ� ���� 2018
int main() {
	int _iNum;
	int iCount(1), iSum(1), iStartIndex(1), iEndIndex(1);

	cin >> _iNum;

	while (iEndIndex != _iNum) {
		if (iSum == _iNum) {
			iCount++;
			iEndIndex++;
			iSum = iSum + iEndIndex;
		}
		else if (iSum > _iNum) {
			iSum = iSum - iStartIndex;
			iStartIndex++;
		}
		else {
			iEndIndex++;
			iSum = iSum + iEndIndex;
		}
	}

	cout << iCount;
	return 0;
}