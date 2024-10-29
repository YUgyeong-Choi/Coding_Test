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
            if (st.empty()) { //solution(")(") �̷� ��� ������ ���� ����
                return false;
            }
            else {
                st.pop();
            }
        }
    }

    return st.empty();
}



//�Ʒ� �ڵ�� �׽�Ʈ �ڵ� �Դϴ�.
int main()
{
    //(true�� ����ϸ� 1 �̰�, false�� ����ϸ� 0�Դϴ�.

    cout << solution("(())()") << endl;  // 1
    cout << solution("((())()") << endl; // 0 
    cout << solution(")(");

    return 0;
}