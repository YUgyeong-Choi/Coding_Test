#include <iostream>
using namespace std;

//������ �� ���ϱ� ���� 11720
int main() {
	int N(0), sum(0);
	string numbers;
	cin >> N >> numbers;

	for (int i = 0; i < N; i++) {
		sum += numbers[i] - '0';
	}
	cout << sum << endl;
	return 0;
}