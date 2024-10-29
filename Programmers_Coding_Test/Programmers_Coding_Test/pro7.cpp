//방문 길이 49994
// 방향 좌표 U D L R
//5,5좌표에서 위로 한번 갔다고 하면
//5,5,0(위로) = true 해주고 5.6.1(아래) =true해서 위에서 아래로 갈때 count가 되지 않도록 구현해야 함
// opposite_direction함수가 반대의 방향 구하는 함수
#include <iostream>
#include <string>
using namespace std;

bool visited[11][11][4];

int dx[] = { 0,1,0,-1 };
int dy[] = { -1,0,1,0 };

int todir(char dir) {
    int ret;
    if (dir == 'U') ret = 0;
    else if (dir == 'R') ret = 1;
    else if (dir == 'D') ret = 2;
    else ret = 3;
    return ret;
}

bool isNotValid(int x, int y) { return x < 0 || y < 0 || x>10 || y>10; }
int opposite_direction(int dir) { return (dir + 1) % 4; }

int solution(string dirs){
    int answer = 0;
    int x = 5, y = 5;

    for (auto c : dirs) {
        int dir = todir(c);
        int nx = x + dx[dir];
        int ny = y + dy[dir];

        if (isNotValid(nx, ny)) {
            continue;
        }

        if (visited[y][x][dir] == false) {
            visited[y][x][dir] = true;
            visited[ny][nx][opposite_direction(dir)] = true;
            answer++;
        }

        x = nx;
        y = ny;
    }
    return answer;
}

// 테스트 코드
int main() {
    cout << solution("ULURRDLLU") << endl; // 7
    cout << solution("LULLLLLLU") << endl; // 7 

    return 0;
}