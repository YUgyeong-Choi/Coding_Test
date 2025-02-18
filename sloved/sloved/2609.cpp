#include <iostream>
using namespace std;

//최대공약수 gcd
//최소공배수 lcm
//유클리드 호제법
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
	int a, b;
	cin >> a >> b;

    int gcd_val = gcd(a, b);
	int lcm = a * b / gcd_val;

    cout << gcd_val << "\n";
    cout << lcm;

	return 0;
}