#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	char WB[8][8] = {
		'W','B','W','B','W','B','W','B',
		'B','W','B','W','B','W','B','W',
		'W','B','W','B','W','B','W','B',
		'B','W','B','W','B','W','B','W',
		'W','B','W','B','W','B','W','B',
		'B','W','B','W','B','W','B','W',
		'W','B','W','B','W','B','W','B',
		'B','W','B','W','B','W','B','W'
	};
	char BW[8][8] = {
		'B','W','B','W','B','W','B','W',
		'W','B','W','B','W','B','W','B',
		'B','W','B','W','B','W','B','W',
		'W','B','W','B','W','B','W','B',
		'B','W','B','W','B','W','B','W',
		'W','B','W','B','W','B','W','B',
		'B','W','B','W','B','W','B','W',
		'W','B','W','B','W','B','W','B'
	};

	int n, m;
	char arr[50][50];
	int less = 64;
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> arr[i][j];
		}
	}

	for (int i = 0; i <= n - 8; ++i) {
		for (int j = 0; j <= m - 8; ++j) {
			int cntB = 0, cntW = 0;

			for (int x = 0; x < 8; ++x) {
				for (int y = 0; y < 8; ++y) {
					if (arr[i + x][j + y] != BW[x][y]) cntB++;
					if (arr[i + x][j + y] != WB[x][y]) cntW++;
				}
			}

			int getMin = min(cntB, cntW);
			if (getMin < less) {
				less = getMin;
			}
		}
	}
	cout << less;

	return 0;
}