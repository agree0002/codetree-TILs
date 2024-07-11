#include <iostream>
#include <queue>
using namespace std;

int main(){
    queue<int> q;
    int n; cin>>n;
    int k; cin>>k;
    for(int i=1;i<=n;i++)
        q.push(i);

    while(!q.empty()){
        for(int i=0;i<k-1;i++){
            q.push(q.front());
            q.pop();
        }
        cout<<q.front()<<" ";
        q.pop();
    }
}