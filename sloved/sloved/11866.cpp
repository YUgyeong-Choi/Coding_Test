#include <iostream>
#include <vector>
using namespace std;

bool checkAllZero(int* arr, int num) {
	for (int i = 0; i < num; ++i) {
		if (arr[i] != 0) {
			return false;
		}
	}
	return true;
}

int main() {
	int num, cycle;
	int arr[1001];
	vector<int> answer;
	cin >> num >> cycle;

	for (int i = 0; i < num; ++i) {
		arr[i] = i+1;
	}
	int cnt = 1;

	while (true) {
		if (checkAllZero(arr, num)) break;

		for (int i = 0; i < num; ++i) {
			if (arr[i] != 0) {
				if (cnt == cycle) {
					answer.push_back(arr[i]);
					arr[i] = 0;
					cnt = 0;
				}
				cnt++;
			}

		}
	}
	
	cout << "<";
	for (int i = 0; i < answer.size(); ++i) {
		if (i == answer.size() - 1) {
			cout << answer[i] << ">";
		}
		else {
			cout << answer[i] << ", ";
		}
		
	}

	return 0;
}