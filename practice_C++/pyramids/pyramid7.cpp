/*
* 
* * * 
* * * * * 
* * * * * * *
* * * * * * *
* * * * * 
* * *
*
*/
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int n=5; 
    for (int i=1; i<=n ; i++)
    {
        for (int j=1; j<=i; j++)
        {
            cout<<"* ";
        }
        for (int k=1; k<=i-1; k++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    for(int i2=n; i2>=1 ; i2--)
    {
        for(int j2=1; j2<=i2+(i2-1); j2++ )
        {
            cout<<"* ";
        }
        cout<<endl;
    }
}