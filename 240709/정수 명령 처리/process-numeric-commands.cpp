#include <iostream>
#include <stack>
using namespace std;

int main() {
    int n; cin>>n;
    stack<int> s;
    for (int i=0;i<n;i++) {
        string a; cin>>a;
        if (a=="push") {
            int x; cin>>x;
            s.push(x);
        }

        else if (a=="pop") {
            cout<<s.top()<<endl;
            s.pop();
        }

        else if (a=="size") {
            cout<<s.size()<<endl;
        }

        else if (a=="empty") {
            cout<<(s.empty() ? 1 : 0)<<endl;
        }

        else {
            cout<<s.top()<<endl;
        }
    }
    return 0;
}