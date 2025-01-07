#include <iostream>
#include <vector>
using namespace std;

int n;
vector<int> v;
int c = 0;

void b() {
    int i = 0;
    while (true) {
        if (i == v.size()) {
            c++;
            break;
        }
        int k = v[i];
        for (int j = 0; j < k - 1; j++) {
            i++;
            if (v[i] != k) {
                return;
            }
        }
        i++;
    }
}

void f(int a) {
    if (a == n) {
        b();
        return;
    }
    for (int i = 1; i <= 4; i++) {
        v.push_back(i);
        f(a + 1);
        v.pop_back();
    }
}

int main() {
    cin >> n;
    f(0);
    cout << c;
    return 0;
}