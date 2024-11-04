//��ȣ ȸ���ϱ� 76502
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

        if (check(changeS)) iCount++; //���� ���ư��� �� �ϳ��� ����
        //�ٵ� �ذῡ���� s[(start+i)%sz]�� ���ϰ� ���� 5����¥�� ������ 1~4���� 5�� �Ǿ��� �� %5�ؼ� 0���� ������
    }

    return iCount;
}

//�Ʒ� �ڵ�� �׽�Ʈ �ڵ� �Դϴ�.
#include <iostream>
int main()
{
    cout << solution("[](){}") << endl; // 3
    cout << solution("}]()[{") << endl; // 2 
    cout << solution("[)(]") << endl;   // 0 
    cout << solution("}}}") << endl;    // 0   
    return 0;
}