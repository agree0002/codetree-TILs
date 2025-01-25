#include <iostream>
using namespace std;

int n, m;
int grid[100][100];
bool visited[100][100];

bool inRange(int y, int x) {
    return x >= 0 && x < m && y >= 0 && y < n;
}

bool canGo(int y, int x) {
    if (!inRange(y, x)) {
        return false;
    } else {
        if (visited[y][x] || grid[y][x] == 0) {
            return false;
        } else {
            return true;
        }
    }
}

void DFS(int y, int x) {
    int dy[2] = {1, 0};
    int dx[2] = {0, 1};

    visited[y][x] = true;

    for (int i = 0; i < 2; i++) {
        int next_y = y + dy[i];
        int next_x = x + dx[i];

        if (canGo(next_y, next_x)) {
            DFS(next_y, next_x);
        }

    }
}

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> grid[i][j];
        }
    }

    DFS(0, 0);

    cout << visited[n - 1][m - 1];
    return 0;
}