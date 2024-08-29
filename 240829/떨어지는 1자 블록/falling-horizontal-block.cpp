#include <iostream>
using namespace std;

int main() {
    int n, m, k;
    cin >> n >> m >> k;
    int a[101][101];
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            int b;
            cin >> b;
            a[i][j] = b;
        }
    }

    int row = 0;
    bool b = true;
    while (b) {
        row++;
        for (int i = k; i <= k + m - 1; i++) {
            if (a[row][i] == 1) {
                b = false;
                break;
            }
        }
    }

    for (int i = k; i <= k + m - 1; i++) {
        a[row - 1][i] = 1;
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cout << a[i][j] << " ";
        }
        cout << '\n';
    }
    return 0;
}