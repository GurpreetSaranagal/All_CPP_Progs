// #include<bits/stdc++.h>
#include<iostream>
using namespace std;

template<class T>
void _swap(T &a, T &b){
    T c;
    c = b;
    b = a;
    a = c;
}
int main()
{
    int a,b;
    float f1, f2;
    char c1, c2;


    cin>> a>> b;
    cout<<"a = "<<a<<":  b = "<<b<<"\n";
    _swap(a,b);
    cout<<"a = "<<a<<":  b = "<<b<<"\n";

    cin>>f1>>f2;
    cout<<"f1 = "<<f1<<":  f2 = "<<f2<<"\n";
    _swap(f1, f2);
    cout<<"f1 = "<<f1<<":  f2 = "<<f2<<"\n";

    cin>>c1>>c2;
    cout<<"c1 = "<<c1<<":  c2 = "<<c2<<"\n";
    _swap(c1, c2);
    cout<<"c1 = "<<c1<<":  c2 = "<<c2<<"\n";
    return 0;
}