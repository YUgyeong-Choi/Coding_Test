// sort�� O(NlogN)
// ���������� O(N^2)
// ������ ������ 10^5�ϱ� ���ѽð��� 3�ʸ� �������Ŀ� ���� ����
#include <vector>
#include <algorithm>
#include <iterator>
#include <iostream>
using namespace std;

vector<int> solution(vector<int> arr) {
    sort(arr.begin(), arr.end());
    return arr;
}

void print(vector<int> vec)
{
    copy(vec.begin(), vec.end(), std::ostream_iterator<int>(cout, " "));
    cout << endl;
}

int main()
{
    print(solution({ 1, -5, 2, 4, 3 }));      // -5 1 2 3 4 
    print(solution({ 2, 1, 1, 3, 2, 5, 4 })); // 1 1 2 2 3 4 5 
    print(solution({ 6, 1, 7 }));             // 1 6 7 

    return 0;
}