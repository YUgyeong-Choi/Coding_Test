#include <iostream>
#include <cstdlib>
#include <climits>
using namespace std;

int main() {
	int testcase;
	cin >> testcase;

	long answer = 0;
	int A[100001] = { 0 };

	for (int i = 1; i < 100001; i++) {
		A[i] = rand() * 100;
	}

	for (int t = 1; t < testcase + 1; t++) {
		int start, end;
		answer = 0;
		cin >> start >> end;
		for (int i = start; i <= end; i++ ) {
			answer += A[i];
		}
		cout << t << " " << answer;
	}

	return 0;
}