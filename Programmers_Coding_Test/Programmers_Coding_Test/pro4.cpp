//모의고사 42840
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> firstPattern = { 1,2,3,4,5 };
vector<int> secondPattern = { 2,1,2,3,2,4,2,5 };
vector<int> thirdPattern = { 3,3,1,1,2,2,4,4,5,5 };

vector<int> solution(vector<int> answers) {
    vector<int> count = {0,0,0};
    vector<int> answer;
    for (int i = 0; i < answers.size(); ++i) {
        if (firstPattern[i % firstPattern.size()] == answers[i]) count[0]++;
        if (secondPattern[i % secondPattern.size()] == answers[i]) count[1]++;
        if (thirdPattern[i % thirdPattern.size()] == answers[i]) count[2]++;
    }

    int max = *max_element(count.begin(), count.end());
    for (int i = 0; i < 3; ++i) {
        if (max == count[i]) {
            answer.push_back(i + 1);
        }
    }

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
    print(solution({ 1, 2, 3, 4, 5 }));     // 1 
    print(solution({ 1, 3, 2, 4, 2 }));     // 1 2 3 

    return 0;
}