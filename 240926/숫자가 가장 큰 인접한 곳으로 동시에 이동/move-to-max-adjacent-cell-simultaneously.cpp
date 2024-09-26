#include <iostream>
using namespace std;

int main() {
	cin.tie(NULL);
    cin.sync_with_stdio(false);
	
	int n, m, t;
	int arr[20][20];
	int count[20][20];
	int nextCount[20][20];
	int cnt = 0;
	int dx[] = {-1,1,0,0};
	int dy[] = {0,0,-1,1};
	cin >> n >> m >> t;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> arr[i][j];
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			count[i][j] = 0;
			nextCount[i][j] = 0;
		}
	}
	for (int i = 0; i < m; i++) {
		int r, c;
		cin >> r >> c;
		count[r - 1][c - 1] = 1;
	}

	for (int i = 0; i < t; i++) {
		for (int x = 0; x < n; x++) {
			for (int y = 0; y < n; y++) {
				int nx = x;
				int ny = y;
				if (count[x][y] == 1) {
					int max = arr[x][y];
					for (int k = 0; k < 4; k++) {
						int nextX = x + dx[k];
						int nextY = y + dy[k];
						if (nextX >= 0 && nextX < n && nextY >= 0 && nextY < n) {
							if (arr[nextX][nextY] > max) {
								max = arr[nextX][nextY];
								nx = nextX;
								ny = nextY;
							}
						}
					}
					nextCount[nx][ny]++;
				}
			}
		}

		for (int x = 0; x < n; x++) {
			for (int y = 0; y < n; y++) {
				if (nextCount[x][y] > 1) {
					nextCount[x][y] = 0;
				}
			}
		}
		
		for (int x = 0; x < n; x++) {
			for (int y = 0; y < n; y++) {
				count[x][y] = nextCount[x][y];
				nextCount[x][y] = 0;
			}
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (count[i][j] == 1) {
				cnt++;
			}
		}
	}

	cout << cnt;
	return 0;
}