#include <iostream>

using namespace std;

int n, m;
int from[10000], to[10000];
bool visited[1001];
int graph[1001][1001];

void DFS(int vertex) {
    for (int curr_v = 1; curr_v <= n; curr_v++) {
        if (graph[vertex][curr_v] && !visited[curr_v]) {
            visited[curr_v] = true;
            DFS(curr_v);
        }
    }
}

int main() {
    cin >> n >> m;

    for (int i = 0; i < m; i++) {
        cin >> from[i] >> to[i];
    }

    for (int i = 0; i < m; i++) {
        graph[from[i]][to[i]] = 1;
        graph[to[i]][from[i]] = 1;
    }

    DFS(1);

    int cnt = 0;
    for (int i = 2; i <= n; i++) {
        if (visited[i]) {
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}