#include <iostream>
using namespace std;

int main() {
	int N = 1000;
	int cnt = 1;

	// ���� Ƚ�� = n^2
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cout << "���� Ƚ��: " << cnt++ << endl;
		}
	}

	return 0;
}