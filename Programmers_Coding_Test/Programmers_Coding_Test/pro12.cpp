//주식가격 42584
#include <iostream>
#include <string>
#include <vector>
#include <stack>
using namespace std;
vector<int> solution(vector<int> prices) {

}

//아래 코드는 테스트 코드 입니다.
void print(vector<int> vec)
{
    copy(vec.begin(), vec.end(), std::ostream_iterator<int>(cout, " "));
    cout << endl;
}

int main()
{
    print(solution({ 1, 2, 3, 2, 3 })); // 4 3 1 1 0
    return 0;

}