//¦���� �����ϱ� 12973
#include <iostream>
#include <stack>
using namespace std;

int solution(string s) {
    stack<char> check;
    for (char a : s) {
        if (check.empty() || check.top()!=a) {  
            check.push(a);
            continue;
        }

        if (check.top() == a) {
            check.pop();
        }
    }
    if (check.empty()) {
        return 1;
    }
    else {
        return 0;
    }
}


//�Ʒ� �ڵ�� �׽�Ʈ �ڵ� �Դϴ�.
int main()
{
    cout << solution("baabaa") << endl; // 1
    cout << solution("cdcd") << endl;   // 0 
    return 0;
}