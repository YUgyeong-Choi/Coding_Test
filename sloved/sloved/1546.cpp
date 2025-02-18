#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int getNum;
	vector<double> vecNum;
	cin >> getNum;

	int num;
	for (int i = 0; i < getNum; ++i) {
		cin >> num;
		vecNum.push_back(num);
	}

	auto max = max_element(vecNum.begin(), vecNum.end());
	double sum=0;
	for (int i = 0; i < getNum; ++i) {
		sum += vecNum[i] / (*max) * 100;
	}

	cout << sum / getNum;

	return 0;
}