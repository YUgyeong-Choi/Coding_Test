#include <iostream>
#include <stack>
using namespace std;

bool solution(string s) {
    stack<char> st;

    for (char dir : s) {
        if (dir == '(') {
            st.push('(');
        }
        else {
            if (st.empty()) { //solution(")(") 이런 경우 오류가 나기 때문
                return false;
            }
            else {
                st.pop();
            }
        }
    }

    return st.empty();
}



//아래 코드는 테스트 코드 입니다.
int main()
{
    //(true를 출력하면 1 이고, false를 출력하면 0입니다.

    cout << solution("(())()") << endl;  // 1
    cout << solution("((())()") << endl; // 0 
    cout << solution(")(");

    return 0;
}