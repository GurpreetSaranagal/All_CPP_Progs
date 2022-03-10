#include<iostream>
using namespace std;

int main(){
    int a, b;
    cout << " Input two numbers : \n";
    cin >> a >> b;
    if(a > b)
        cout<<a<<" is larger than "<< b;
    if(b>a)
        cout << b<<" is larger than "<< a;
    if(a==b)
        cout << " both are same";
    return 0;
}