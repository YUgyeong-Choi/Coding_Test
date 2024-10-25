//실패율 42889
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;


vector<int> solution(int N, vector<int> stages) {
    vector<int> answer;
    vector<int> count(N + 1, 0);
    vector<pair<float,int>> failRate;

    int totalPeople = stages.size();

    for (int i = 0; i < stages.size(); ++i) {
        count[stages[i]-1]++;
    }
    for (int i = 0; i < N; ++i) {
        if (totalPeople == 0) {
            failRate.push_back({ 0.0f, i + 1 }); 
        }
        else {
            failRate.push_back({ (float)count[i] / totalPeople, i + 1 }); 
        }
        totalPeople -= count[i];
    }

    sort(failRate.begin(), failRate.end(), [](const pair<float, int>& a, const pair<float, int>& b) {
        if (a.first == b.first) {
            return a.second < b.second; // 실패율이 같으면 스테이지 번호로 정렬
        }
        return a.first > b.first; // 실패율 내림차순 정렬
        });

    for (const auto& pair : failRate) {
        answer.push_back(pair.second);
    }

    return answer;
}



//아래 코드는 테스트 코드 입니다.

#include <iterator>
void print(vector<int> vec)
{
    copy(vec.begin(), vec.end(), std::ostream_iterator<int>(cout, " "));
    cout << endl;
}

int main()
{
    print(solution(5, { 2, 1, 2, 6, 2, 4, 3, 3 })); // 3 4 2 1 5
    print(solution(4, { 4, 4, 4, 4, 4 }));          // 4 1 2 3 

    return 0;
}