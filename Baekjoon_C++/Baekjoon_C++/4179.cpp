#include <iostream>
#include <string>
#include <vector>
#include <queue>
using namespace std;
struct Coord {
    int row, col;
};
vector<vector<char>> maze;
int rows, cols;
int vy[] = { -1, 0 , 1, 0 };
int vx[] = { 0 , -1, 0, 1 };

queue<Coord> fireBFS(queue<Coord> fire) {
    queue<Coord> result;
    while (!fire.empty()) {
        Coord now = fire.front(); fire.pop();
        for (int i = 0; i < 4; i++) {
            int r = now.row + vy[i], c = now.col + vx[i];
            if (0 <= r && r < rows && 0 <= c && c < cols) {
                if (maze[r][c] != '#' && maze[r][c] != 'F') {
                    maze[r][c] = 'F';
                    result.push({ r,c });
                }
            }
        }
    }
    return result;
}
queue<Coord> meBFS(queue<Coord> me) {
    queue<Coord> result;
    while (!me.empty()) {
        Coord now = me.front(); me.pop();
        for (int i = 0; i < 4; i++) {
            int r = now.row + vy[i], c = now.col + vx[i];
            if (0 <= r && r < rows && 0 <= c && c < cols) {
                if (maze[r][c] == '.') {
                    maze[r][c] = 'J';
                    result.push({ r,c });
                }
            }
            else {
                queue<Coord> esc;
                esc.push({ -1, -1 });
                return esc;
            }
        }
    }
    return result;
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    queue<Coord> fire, me;
    bool isEscape = false;
    int time = 0;
    cin >> rows >> cols;
    for (int i = 0; i < rows; i++) {
        string s;
        cin >> s;
        maze.push_back(vector<char>(cols));
        for (int j = 0; j < s.length(); j++) {
            maze[i][j] = s[j];
            if (s[j] == 'J') me.push({ i, j });
            if (s[j] == 'F') fire.push({ i, j });
        }
    }
    while (!me.empty()) {
        time++;
        fire = fireBFS(fire);
        me = meBFS(me);
        if (me.front().row == -1) {
            isEscape = true;
            break;
        }
    }
    if (isEscape) cout << time;
    else cout << "IMPOSSIBLE";
    return 0;
}