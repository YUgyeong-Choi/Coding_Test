// custom % h 가 0일때 !! 생각해보기
#include <iostream>
using namespace std;

int main() {
	int a;
	int h, w, custom;
	cin >> a;
	for (int i = 0; i < a; ++i) {
		cin >> h >> w >> custom;

		if (custom % h == 0) {
			cout << h * 100 + custom / h << "\n";
		}
		else {
			cout << (custom % h) * 100 + custom / h + 1 << "\n";
		
		}
		
	}

	return 0;
}