#include <iostream>
#include <stack>
#include <string>
using namespace std;

string solution(int decimal) {
    if (decimal == 1) return "0";

    stack<int> st;
    while(decimal > 0) {
        st.push(decimal % 2);
        decimal /= 2;
    }

    string binary = "";
    while (!st.empty()) {
        binary += to_string(st.top());
        st.pop();
    }

    return binary;
}




//아래 코드는 테스트 코드 입니다
int main()
{
    cout << solution(10) << endl;       // 1010
    cout << solution(27) << endl;       // 11011 
    cout << solution(12345) << endl;    // 11000000111001 

    return 0;
}