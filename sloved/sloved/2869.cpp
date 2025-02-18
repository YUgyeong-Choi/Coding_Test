#include <iostream>
using namespace std;

#pragma region 시간초과 코드
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

	//길이-미끄러진거 % 올라간거리 == 0 이면 도달했다
	if ((v - b) % (a - b) == 0) {
		day = (v - b) / (a - b);
	}
	else { //이건 조금 부족하다
		day = (v - b) / (a - b)+1;
	}

	cout << day;

	return 0;
}

