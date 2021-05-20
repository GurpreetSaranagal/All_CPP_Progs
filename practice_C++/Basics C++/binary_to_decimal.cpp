#include<iostream>
#include<math.h>

using namespace std;

int main() {
    int i, rem, count = 0;
    long int b, n=0;
    cout<< "Enter binary number :"<< endl;
    cin>> b ;
    while( b>0 )
    {
        rem = b % 10 ;
        n = n + rem *pow (2,count);
        ++count;
        b=b/10;
    }
    cout<< "Decimal equivalent : "<< n;

    return 0;
}