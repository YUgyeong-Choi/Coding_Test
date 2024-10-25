// 두 수를 뽑아서 더하기, 68644
#include <vector>
#include <set>

using namespace std;

vector<int> solution(vector<int> numbers) {
    set<int> sum;
    for (int i = 0; i < numbers.size(); ++i) {
        for (int j = i+1; j < numbers.size(); ++j) {
            sum.insert(numbers[i] + numbers[j]);
        }
    }

    vector<int> answer(sum.begin(), sum.end());

    return answer;
}



//아래 코드는 테스트 코드 입니다.

#include <iterator>
#include <iostream>
void print(vector<int> vec)
{
    copy(vec.begin(), vec.end(), std::ostream_iterator<int>(cout, " "));
    cout << endl;
}

int main()
{
    print(solution({ 2, 1, 3, 4, 1 }));     // 2 3 4 5 6 7 
    print(solution({ 5, 0, 2, 7 }));        // 2 5 7 9 12 

    return 0;
}