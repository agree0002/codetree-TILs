#include <iostream>
#include <cmath>
using namespace std;

void f1(int,int);

int main() {
    int a,b;
    cin>>a>>b;
    f1(a,b);
    // 여기에 코드를 작성해주세요.
    return 0;
}

void f1(int a, int b){
    cout<<pow(a,b);
}