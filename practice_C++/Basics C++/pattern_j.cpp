#include<iostream>
using namespace std;
int main()
{
    int i,j,n;
    cout<<"\n Enter how many lines ";
    cin>>n;
    for(j=0; j<=n; j++)
    {
       for ( i = 1; i <= j; i++)
         {
             cout<<" ";
         }    
         for ( i = n-j; i <= 2*n-(2*j+1); i++)
         {
             cout<<i;
         }
         for ( i = 2*n-(2*j+2); i >= n-j; i--)
         {
             cout<<i;
         }
         cout<<"\n";
         
    }
}