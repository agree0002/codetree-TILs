#include <iostream>

using namespace std;

int n, m;
int grid[20][20];
int k = 1;
bool b = false;

int main() {
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> grid[i][j];
        }
    }

    // Write your code here!
    for (int x = 0; x < m; x++) {
        k = 1;
        while (true) {
            b = false;
            if (k == n * n + 1) break;
            for (int i = 0; i < n; i++) {
                if (b) break;
                for (int j = 0; j < n; j++) {
                    if (grid[i][j] == k) {
                        int max = 0;
                        int xidx, yidx;
                        for (int t = i - 1; t <= i + 1; t++) {
                            for (int a = j - 1; a <= j + 1; a++) {
                                if (t >= 0 && t < n && a >= 0 && a < n) {
                                    if (grid[t][a] != k) {
                                        if (max < grid[t][a]) {
                                            max = grid[t][a];
                                            xidx = t;
                                            yidx = a;
                                        }
                                    }
                                }
                            }
                        }

                        int temp = grid[i][j];
                        grid[i][j] = grid[xidx][yidx];
                        grid[xidx][yidx] = temp;
                        k++;
                        b = true;
                        break;
                    }
                }
            }
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << grid[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}