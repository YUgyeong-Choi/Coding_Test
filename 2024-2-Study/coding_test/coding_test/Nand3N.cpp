#include <iostream>
using namespace std;

int main() {
	int N = 1000;
	int cnt = 1;

	// ���� Ƚ�� = N
	for (int i = 0; i < N; i++) {
		cout << "���� Ƚ��: " << cnt++ << endl;
	}

	// ���� Ƚ�� = 3N
	cnt = 1;
	for (int i = 0; i < N; i++) {
		cout << "���� Ƚ��: " << cnt++ << endl;
	}
	for (int i = 0; i < N; i++) {
		cout << "���� Ƚ��: " << cnt++ << endl;
	}
	for (int i = 0; i < N; i++) {
		cout << "���� Ƚ��: " << cnt++ << endl;
	}

	//���� Ƚ���� 3���� ���̰� ������,�Ϲ������� ����� �����ϹǷ� 
	//�� �ڵ� ��� �ð� ���⵵�� O(n)��
	return 0;
}