#include <iostream>
#include <queue>
using namespace std;

int main(){
    int n; cin>>n;
    queue<int> q;

    for(int i=0;i<n;i++){
        string s; cin>>s;
        if(s=="push"){
            int x; cin>>x;
            q.push(x);
        }
        else if(s=="pop"){
            cout<<q.front()<<endl;
            q.pop();
        }
        else if(s=="size") cout<<q.size()<<endl;
        else if(s=="empty") cout<<(q.empty()?1:0)<<endl;
        else cout<<q.front()<<endl;
    }
}