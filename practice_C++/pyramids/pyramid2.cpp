// answers to all these PYRAMIDS will be provided in notes respectively

/*
1 
2 5      
3 6 8    
4 7 9 10 
*/ 
#include<iomanip>
#include<iostream>
using namespace std;
int main()
{
    int a,b,i,j,n=4;
    for(i=1; i<=n ; i++)
    {
        a=i;
        b=n-1;
        for (j=1; j<=i; j++)
        {
            cout<< a <<" ";
            a=a+b;
            b--;
        }
        cout<< endl;

    }
}