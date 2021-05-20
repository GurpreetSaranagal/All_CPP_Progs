#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int a,b,c,n;
    a= 0;b = 1;
    cout << " Enter number of terms (n) : ";
    cin >> n;
    cout<< " Fibonacci series is "<< endl;
    cout<< a<< setw (4)<< b ;
    int count =3;
    while (count <= n)
    {
        c=a+b;
        cout << setw(4)<< c;
        a=b;
        b=c;
        ++ count;
    }
    return 0;
}