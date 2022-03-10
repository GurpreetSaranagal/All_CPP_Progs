/*
1 2 3 4 3 2 1 
1 2 3   3 2 1 
1 2       2 1
1           1
*/
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int n=4;
    for (int i= 1; i<=n; i++)
    {
        for (int j=1; j<=(n-i)+1; j++)
        {
            if (j!=n)
            cout<<j<<" ";
        }
        for (int s1=1; s1<i; s1++)
        {
            cout<<"  ";
        }
        for (int s2=2; s2<i ;s2++)
        {
            cout<<"  ";
        }
        for(int l=(n-i)+1; l>=1 ; l--)
        {
            cout<<l<<" ";
        }
        cout << endl;
    }
}