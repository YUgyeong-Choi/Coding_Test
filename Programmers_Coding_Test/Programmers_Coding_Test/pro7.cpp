//방문 길이 49994
#include <string>
#include <vector>

using namespace std;

bool check(int x, int y, char move) {
    if (move == 'U') {
        if (y + 1 > 10) {
            return false;
        }
    }else if (move == 'D') {
        if (y - 1 < 0) {
            return false;
        }
    }
    else if (move == 'L') {
        if (x - 1 < 0) {
            return false;
        }
    }
    else if (move == 'R') {
        if (x + 1 > 10) {
            return false;
        }
    }
    return true;
}

int solution(string dirs)
{
    int answer = 0;
    int x = 5;
    int y = 5;
    vector<vector<int>> array(11, vector<int>(11, 0));
    array[x][y] = 1;

    for (char move : dirs) {
        if (check(x, y, move)) {
            if (move == 'U') {
                y++;
                if (array[x][y] != 1) {
                    answer++;
                    array[x][y] = 1;
                }
            }
            else if (move == 'D') {
                y--;
                if (array[x][y] != 1) {
                    answer++;
                    array[x][y] = 1;
                }
            }
            else if (move == 'L') {
                x--;
                if (array[x][y] != 1) {
                    answer++;
                    array[x][y] = 1;
                }
            }
            else if (move == 'R') {
                x++;
                if (array[x][y] != 1) {
                    answer++;
                    array[x][y] = 1;
                }
            }
        }
    }


    return answer;
}


//아래 코드는 테스트 코드 입니다.
#include <iostream>

int main()
{
    cout << solution("ULURRDLLU") << endl; // 7
    cout << solution("LULLLLLLU") << endl; // 7 

    return 0;
}