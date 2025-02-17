#include <iostream>
#include <string>
using namespace std;

int main() {
	int a, b, c;
	int mul;
	int cnt[10] = { 0 };
	cin >> a >> b >> c;
	mul = a * b * c;

	string str = to_string(mul);

	for (int i = 0; i < str.size(); ++i) {
		cnt[str[i] - '0']++;
	}

	for (int i = 0; i < 10; ++i) {
		cout << cnt[i] << "\n";
	}

	return 0;
}