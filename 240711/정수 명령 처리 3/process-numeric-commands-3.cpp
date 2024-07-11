#include <iostream>
#include <deque>
using namespace std;

int main(){
    deque<int> d;
    int n; cin>>n;
    for(int i=0;i<n;i++){
        string s; cin>>s;
        if(s=="push_front"){
            int x; cin>>x;
            d.push_front(x);
        }
        else if(s=="push_back"){
            int x; cin>>x;
            d.push_back(x);
        }
        else if(s=="pop_front"){
            cout<<d.front()<<endl;
            d.pop_front();
        }
        else if(s=="pop_back"){
            cout<<d.back()<<endl;
            d.pop_back();
        }
        else if(s=="size") cout<<d.size()<<endl;
        else if(s=="empty") cout<<(d.empty()?1:0)<<endl;
        else if(s=="front") cout<<d.front()<<endl;
        else cout<<d.back()<<endl;
    }
}