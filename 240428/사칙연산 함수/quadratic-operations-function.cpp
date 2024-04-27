#include <iostream>
using namespace std;

void f1(int, int);
void f2(int, int);
void f3(int, int);
void f4(int, int);

int main() {
    int a,c;
    char o;
    cin>>a>>o>>c;
    if(o=='+') f1(a,c);
    else if(o=='-') f2(a,c);
    else if(o=='/') f3(a,c);
    else if(o=='*') f4(a,c);
    else cout<<"False";
    return 0;
}

void f1(int a, int c){
    cout << a << " + " << c << " = " << a+c;
}

void f2(int a, int c){
     cout << a << " - " << c << " = " << a-c;
}

void f3(int a, int c){
     cout << a << " / " << c << " = " << a/c;
}

void f4(int a, int c){
     cout << a << " * " << c << " = " << a*c;
}