/*
      1
    1 0 1
  1 0 1 0 1
1 0 1 0 1 0 1

*/
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int n=4,temp;
    for (int i=1; i<=n ; i++)
    {
        for (int s=1; s<=n-i; s++)
        {
            cout<<"  ";
        } 
        for(int m=1; m<=i ; m++) 
        {
            cout << (m % 2)<<" ";
            temp=m;
        }

        for(int l=1; l<i ; l++)
        {
            temp--; 
            cout << (temp % 2)<<" ";
        }
        cout <<endl;
    }
}