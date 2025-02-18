#include <iostream>
#include <math.h>
#include <string>
using namespace std;

#pragma region 50점짜리 코드

/*
int main() {
    int getNum;
    cin >> getNum;
    string str;
    cin >> str;

    int sum = 0;
    for (int i = 0; i < getNum; ++i) {
        sum += (str[i] - 'a' + 1) * pow(31, i);
    }

    int M = 1234567891;
    cout << sum % M;

    return 0;
}
*/
#pragma endregion



int main() {
    int getNum;
    cin >> getNum;
    string str;
    cin >> str;

    long long sum = 0;
    int M = 1234567891;
    long long power31 = 1; 

    for (int i = 0; i < getNum; ++i) {
        sum = (sum + (str[i] - 'a' + 1) * power31) % M;
        power31 = (power31 * 31) % M; 
    }

    cout << sum << endl;

    return 0;
}