//��� 1 - 1
//�ι�° 2~7 - 6 
//����° 8 ~ 19 - 12 
//�׹�° 20~37 - 18 
//�ټ���° 38 ~ 61 - 24
#include <iostream>
using namespace std;

int main() {
	double getNum;
	cin >> getNum;

	double num = 1;
	int cnt = 1;
	int cycle = 0;
	bool checkOut = false;
	while (true) {
		if (getNum == 1) break;

		cnt++;
		cycle += 6;
		for (int i = 0; i < cycle; ++i) {
			num++;
			if (num == getNum) {
				checkOut = true;
				break;
			}
		}
		if (checkOut) break;
	}

	cout << cnt;

	return 0;
}