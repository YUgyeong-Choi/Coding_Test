#include <iostream>
using namespace std;

#pragma region �ð��ʰ� �ڵ�
/*
int main() {
	int a, b, v;
	cin >> a >> b >> v;

	int cnt = 0;
	int up = 0;
	while (true) {
		cnt++;
		up += a;
		if (up >= v) {
			break;
		}
		up -= b;
	}
	cout << cnt;

	return 0;
}
*/
#pragma endregion

int main() {
	int a, b, v, day;
	cin >> a >> b >> v;

	//����-�̲������� % �ö󰣰Ÿ� == 0 �̸� �����ߴ�
	if ((v - b) % (a - b) == 0) {
		day = (v - b) / (a - b);
	}
	else { //�̰� ���� �����ϴ�
		day = (v - b) / (a - b)+1;
	}

	cout << day;

	return 0;
}

