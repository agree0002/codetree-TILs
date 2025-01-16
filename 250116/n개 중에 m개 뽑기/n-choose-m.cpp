#include <iostream>
#include <vector>
using namespace std;

int N, M;
vector<int> v;

void print() {
    for (int i = 0; i < M; i++) {
        cout << v[i] << " ";
    }
    cout << "\n";
}

void f(int c, int k) {
    if (c == M + 1) {
        if (k == M)
            print();
        return;
    }

    for (int i = 1; i <= N; i++) {
        if (c >= 2) {
            if (v[c - 2] < i) {
                v.push_back(i);
                f(c + 1, k + 1);
                v.pop_back();
            }
        } else {
            v.push_back(i);
            f(c + 1, k);
            v.pop_back();
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N >> M;
    f(1, 1);

    return 0;
}