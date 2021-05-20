#include<iostream>
using namespace std;
int main()
{
    long int num;
    cout<<"Enter a number ";
    cin>>num;
    int fact = 1;
    for(int i=2 ; i<= num ; i++)
    {
        fact = fact * i;
    }
    cout<<"Factorial of "<<num<<" is = "<<fact;
    return 0;
}