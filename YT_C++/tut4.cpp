#include<iostream>
using namespace std;
int glo =6;// global variable
void sum()
{
    int a;
    cout<< glo;
}
int main()
{
    // int a= 14;
    // int b= 55;
    int glo =0;// local variable of same name can be made but then global variable cannot be used by this function
    glo =90;// this statement will change local variable's value
    int a= 14, b=15;
    float pi= 3.14;
    char c= 'u';
    bool b= true;
    cout <<b<<endl;
    cout<<glo<<endl;
    sum();
    // cout<<"Tis is tutorial 4. \nHere the value of a is "<<a<<",\n value of b is "<<b;
    // cout << "\n The value of pi is: "<<pi;
    // cout << "\n The value of c is: "<<c;
    return 0;
}