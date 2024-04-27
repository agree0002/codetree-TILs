#include <iostream>
using namespace std;

bool f1(int);
bool f2(int);

int main() {
    int a,b;
    int cnt=0;
    cin>>a>>b;
    for(int i=a; i<=b; i++){
        if(f1(i)) cnt++;
    }
    cout<<cnt;
    return 0;
}

bool f1(int n){
    int cnt=0;
    for (int i=1; i<=n; i++)
        if(n%i==0) cnt++;
    return (cnt==2 && f2(n));
}

bool f2(int n){
    int t=0;
    while(n>0){
        t+=n%10;
        n/=10;
    }
    return (t%2==0);
}