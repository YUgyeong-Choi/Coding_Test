#include <iostream>
#include <iterator>
#include <algorithm>
#include <vector>
using namespace std;

/*
     list가 {1, 1, 2, 3, 3, 3, 4}
     unique는 list는 {1, 2, 3, 4, 3, 3, 4} 이렇게 만듦
     그리고 중복이 끝난 list.begin + 4를 반환
*/

//정렬은 NlogN
//unique는 N
vector<int> solution(vector<int> list) {
    sort(list.rbegin(), list.rend());
    list.erase(unique(list.begin(), list.end()), list.end()); //반환된 값부터 끝까지 삭제
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