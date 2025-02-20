#include <iostream>
using namespace std;
//1,000,000 * 1,000,000 -> 1000000000000 천억이 넘음... 당연히 시간초과
//반복문을 한번만 쓰도록 코드를 수정해야 함
#pragma region 내 코드
/*
int main() {
	int min, max;
	cin >> min >> max;

	int cnt = 0;
	for (int i = min; i <= max; ++i) {
		cnt = 0;
		for (int j = 2; j < i; ++j) {
			if (i % j == 0) {
				cnt++;
				break;
			}
		}

		if (cnt == 0) {
			cout << i << "\n";
		}
	}


	return 0;
}
*/
#pragma endregion

// 그래도 안됨 while문을 썼지만 for문 돌리는거랑 다름이 없음 ㅋㅋ
#pragma region while문 코드
/*
int main() {
	int min, max;
	cin >> min >> max;

	bool check = false;
	int i = 2;
	while (1) {
		if (min % i == 0) check = true;
		i++;

		if (i == min) {
			if (!check) {
				cout << min << "\n";
			}
			i = 2;
			min++;
			check = false;
		}

		if (min > max) {
			break;
		}

	}


	return 0;
}
*/
#pragma endregion

// 2가 1이면, 2의 배수들을 모두 0으로 만드는거 (2*1일때 제외)
int arr[1000001];
int main() {
	
	int min, max;
	cin >> min >> max;
	for (int i = 2; i <= max; ++i) arr[i] = 1;
	arr[0] = arr[1] = 0;

	for (int i = 2; i <= max; ++i) {
		if (arr[i] == 1) {
			for (int j = i * 2; j <= max; j = i + j) {
				arr[j] = 0;
			}
		}
	}

	for (int i = min; i <= max; ++i) {
		if (arr[i] == 1) {
			cout << i << "\n";
		}
	}	
	return 0;
}