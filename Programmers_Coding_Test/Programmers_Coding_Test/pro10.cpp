//괄호 회전하기 76502
#include <iostream>
#include <string>
#include <stack>
using namespace std;

bool check(string _copyS) {
    stack<char> check;
    int iCheckWhatPush(0);
    for (char a : _copyS) {
        if (check.empty()) {
            if ((a == ')') || (a == ']') || (a == '}')) return false;
        }
        
        if (a == '(' || a == '[' || a == '{') {
            check.push(a);
        }
        else if (a == ')') {
            if (check.top() == '(') {
                check.pop();
            }
            else return false;
        }
        else if (a == ']') {
            if (check.top() == '[') {
                check.pop();
            }
            else return false;
        }
        else if (a == '}') {
            if (check.top() == '{') {
                check.pop();
            }
            else return false;
        }

    }

    return true;
}

int solution(string s) {
    int iCount(0);
    string changeS="";
    for (int i = 0; i < s.length(); ++i) {
        changeS = "";
        for (int j = i; j < s.length(); ++j) {
            changeS += s[j];
        }
        for (int j = 0; j < i; ++j) {
            changeS += s[j];
        }

        if (check(changeS)) iCount++; //나는 돌아가는 걸 하나씩 구현
        //근데 해결에서는 s[(start+i)%sz]로 편하게 구현 5길이짜리 있을때 1~4가면 5가 되었을 때 %5해서 0으로 가도록
    }

    return iCount;
}

//아래 코드는 테스트 코드 입니다.
#include <iostream>
int main()
{
    cout << solution("[](){}") << endl; // 3
    cout << solution("}]()[{") << endl; // 2 
    cout << solution("[)(]") << endl;   // 0 
    cout << solution("}}}") << endl;    // 0   
    return 0;
}