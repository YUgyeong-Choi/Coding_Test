#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<int> vecNum;
	int getNum, answerNum;
	int max=0;
	cin >> getNum >> answerNum;
	for (int i = 0; i < getNum; ++i) {
		int num;
		cin >> num;
		vecNum.push_back(num);
	}

	for (int i = 0; i < vecNum.size(); ++i) {
		for (int j = 0; j < vecNum.size(); ++j) {
			for (int k = 0; k < vecNum.size(); ++k) {

				if ((i == j) || (j == k) || (i == k)) continue;

				int sum = vecNum[i] + vecNum[j] + vecNum[k];
				if (max < sum && sum <= answerNum) {
					max = sum;
				}
			}
		}
	}

	cout << max;

	return 0;
}