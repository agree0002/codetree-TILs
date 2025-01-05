#include <iostream>
#include <vector>

using namespace std;

int K, N;
vector<int> v;

void print() {
    for (int i = 0; i < N; i++) {
        cout << v[i] << " ";
    }
    cout << "\n";
}

void f(int c) {
    if (c == N) {
        print();
        return;
    }

    for (int i = 1; i <= K; i++) {
        v.push_back(i);
        f(c + 1);
        v.pop_back();
    }
}

int main() {
    cin >> K >> N;
    f(0);
    return 0;
}
