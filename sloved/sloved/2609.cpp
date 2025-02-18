#include <iostream>
using namespace std;

//�ִ����� gcd
//�ּҰ���� lcm
//��Ŭ���� ȣ����
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