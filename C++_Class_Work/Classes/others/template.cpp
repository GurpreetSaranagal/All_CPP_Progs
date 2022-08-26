#include<iostream>
using namespace std;
template< class T1,class T2 >
void show(T1 a,T2 b)
{
    cout<<"a = " << a 
        <<endl<<"b = "<<b;
}
int main()
{
    int a,b;
    a=1;
    b=3;
    show(a,b);
    return 0;
}