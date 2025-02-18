//모두다 돌기 작은 수부터
#include <iostream>
using namespace std;

int main() {
	int i = 1, k;
	int total, chk=0;
	int num;
	cin >> num;

	while (i <= 1000000) {
		if (i < 10) {
			total = i + i;
		}
		else {
			k = i;
			total = k;
			while (k >= 10) {
				total += (k % 10);
				k = k / 10;
			}
			total += k;
		}

		if (total == num) {
			chk = i;
			break;
		}
		i++;
	}

	if (chk == 0) {
		cout << "0";
	}
	else {
		cout << chk;
	}
	
	return 0;
}