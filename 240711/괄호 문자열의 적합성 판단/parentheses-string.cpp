#include <iostream>
#include <stack>
using namespace std;

int main(){
    stack<int> s;
    string w;
    cin>>w;

    for(int i=0;i<w.size();i++){
        if(w[i]=='(') s.push(1);
        else if(w[i]==')' && s.empty()){
            cout<<"No";
            return 0;
        }
        else s.pop();
    }

    if(s.empty()) cout<<"Yes";
    else cout<<"No";
    return 0;
}