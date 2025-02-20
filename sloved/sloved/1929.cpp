#include <iostream>
using namespace std;
//1,000,000 * 1,000,000 -> 1000000000000 õ���� ����... �翬�� �ð��ʰ�
//�ݺ����� �ѹ��� ������ �ڵ带 �����ؾ� ��
#pragma region �� �ڵ�
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

// �׷��� �ȵ� while���� ������ for�� �����°Ŷ� �ٸ��� ���� ����
#pragma region while�� �ڵ�
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

// 2�� 1�̸�, 2�� ������� ��� 0���� ����°� (2*1�϶� ����)
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