#include <iostream>
#include <iterator>
#include <algorithm>
#include <vector>
using namespace std;

/*
     list�� {1, 1, 2, 3, 3, 3, 4}
     unique�� list�� {1, 2, 3, 4, 3, 3, 4} �̷��� ����
     �׸��� �ߺ��� ���� list.begin + 4�� ��ȯ
*/

//������ NlogN
//unique�� N
vector<int> solution(vector<int> list) {
    sort(list.rbegin(), list.rend());
    list.erase(unique(list.begin(), list.end()), list.end()); //��ȯ�� ������ ������ ����
	return list;
}

void print(vector<int> vec)
{
    copy(vec.begin(), vec.end(), std::ostream_iterator<int>(cout, " "));
    cout << endl;
}

int main()
{
    print(solution({ 4, 2, 2, 1, 1, 3, 4 })); // 4 3 2 1  
    print(solution({ 2, 1, 1, 3, 2, 5, 4 })); // 5 4 3 2 1

    return 0;
}