// �ε��Ҽ����� ���� ����
// double �ڷ����� �⺻ ��� ������ �Ҽ��� 6�ڸ�����

#include <iostream>
using namespace std;

int main() {
	double x, y;
	cin >> x >> y;

	cout.precision(12);
	cout << fixed;
	cout << x / y;

	return 0;
}