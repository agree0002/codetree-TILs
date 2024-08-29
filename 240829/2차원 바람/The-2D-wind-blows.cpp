#include <iostream>
using namespace std;

void arrRotate (int arr[][100], int r1, int c1, int r2, int c2) {
    int temp = arr[r1 - 1][c2 - 1];
    for (int i = c2 - 1; i > c1 - 1; i--) {
        arr[r1 - 1][i] = arr[r1 - 1][i - 1];
    }
    for (int i = r1 - 1; i < r2 - 1; i++) {
        arr[i][c1 - 1] = arr[i + 1][c1 - 1];
    }
    for (int i = c1 - 1; i < c2 - 1; i++) {
        arr[r2 - 1][i] = arr[r2 - 1][i + 1];
    }
    for (int i = r2 - 1; i > r1; i--) {
        arr[i][c2 - 1] = arr[i - 1][c2 - 1];
    }
    arr[r1][c2 - 1] = temp;
}

void changeToAverage (int arr[][100], int r1, int c1, int r2, int c2, int n, int m) {
    int arr2[100][100];

    for (int i = r1 - 1; i < r2; i++) {
        for (int j = c1 - 1; j < c2; j++) {
            int sum = arr[i][j];
            int count = 1;

            if (i - 1 >= 0) {
                sum += arr[i - 1][j];
                count++;
            }
            if (i + 1 < n) {
                sum += arr[i + 1][j];
                count++;
            }
            if (j - 1 >= 0) {
                sum += arr[i][j - 1];
                count++;
            }
            if (j + 1 < m) {
                sum += arr[i][j + 1];
                count++;
            }
            arr2[i][j] = sum / count;
        }
    }

    for (int i = r1 - 1; i < r2; i++) {
        for (int j = c1 - 1; j < c2; j++) {
            arr[i][j] = arr2[i][j];
        }
    }
}

void wind (int arr[][100], int r1, int c1, int r2, int c2, int n, int m) {
    arrRotate(arr, r1, c1, r2, c2);
    changeToAverage(arr, r1, c1, r2, c2, n, m);
}

int main() {
    int arr[100][100];
    int n, m, q;
    cin >> n >> m >> q;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            int a;
            cin >> a;
            arr[i][j] = a;
        }
    }

    for (int i = 0; i < q; i++) {
        int r1, c1, r2, c2;
        cin >> r1 >> c1 >> r2 >> c2;
        wind(arr, r1, c1, r2, c2, n, m);
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << arr[i][j] << " ";
        }
        cout << '\n';
    }
    return 0;
}