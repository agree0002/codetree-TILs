#include <iostream>
using namespace std;

bool outArray(int x, int y, int n) {
    return x <= 0 || y <= 0 || x > n || y > n;
}

int turn(int i) {
    if (i == 3) {
        i = 0;
    } else {
        i++;
    }
    return i;
}

int main() {
    int dx[4] = {0,-1,0,1};
    int dy[4] = {1,0,-1,0};
    char arr[101][101];
    int n;
    cin >> n;
    int x, y;
    cin >> x >> y;
    int x2 = x;
    int y2 = y;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> arr[i][j];
        }
    }
    int t = 0;

    int i = 0;
    while (true) {
        int nextX = x + dx[i];
        int nextY = y + dy[i];

        if (arr[nextX][nextY] == '#') {
            i = turn(i);
        } else {
            x = nextX;
            y = nextY;
            t++;
            if (outArray(x, y, n)) {
                break;
            }

            for (int j = 0; j < 3; j++) {
                i = turn(i);
            }
            nextX = x + dx[i];
            nextY = y + dy[i];
            if (arr[nextX][nextY] == '#') {
                i = turn(i);
            } else {
                x = nextX;
                y = nextY;
                t++;
                if (outArray(x, y, n)) {
                    break;
                }
            }

            if (x == x2 && y == y2) {
                cout << -1;
                return 0;
            }
        }
    }

    cout << t;
    return 0;
}