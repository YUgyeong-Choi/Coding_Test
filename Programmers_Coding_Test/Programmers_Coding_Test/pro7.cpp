//�湮 ���� 49994
// ���� ��ǥ U D L R
//5,5��ǥ���� ���� �ѹ� ���ٰ� �ϸ�
//5,5,0(����) = true ���ְ� 5.6.1(�Ʒ�) =true�ؼ� ������ �Ʒ��� ���� count�� ���� �ʵ��� �����ؾ� ��
// opposite_direction�Լ��� �ݴ��� ���� ���ϴ� �Լ�
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

// �׽�Ʈ �ڵ�
int main() {
    cout << solution("ULURRDLLU") << endl; // 7
    cout << solution("LULLLLLLU") << endl; // 7 

    return 0;
}