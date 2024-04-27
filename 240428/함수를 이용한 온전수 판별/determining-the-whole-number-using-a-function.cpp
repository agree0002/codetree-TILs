#include <iostream>
using namespace std;

bool f1(int);
bool f2(int);
bool f3(int);

int main() {
    int a,b;
    int cnt=0;
    cin>>a>>b;
    for (int i=a; i<=b; i++)
        if(!(f1(i))) cnt++;
    cout<<cnt;
    return 0;
}

bool f1(int n){
    return (n%2==0 || f2(n));
}

bool f2(int n){
    return (n%10==5 || f3(n));
}

bool f3(int n){
    return (n%3==0 && n%9!=0);
}