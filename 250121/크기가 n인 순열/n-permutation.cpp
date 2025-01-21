#include <iostream>
#include <vector>

using namespace std;

int n;
vector<int> v;
bool visited[9];

void print() {
    for (int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }
    cout << "\n";
}

void choose(int curr_num) {
    if (curr_num == n + 1) {
        print();
        return;
    }

    for (int i = 1; i <= n; i++) {
        if (visited[i]) {
            continue;
        }
        v.push_back(i);
        visited[i] = true;
        choose(curr_num + 1);
        v.pop_back();
        visited[i] = false;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;
    choose(1);
    return 0;
}
