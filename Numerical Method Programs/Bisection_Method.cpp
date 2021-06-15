// program to find roots of equation using Bisection Method
#include<iostream>
#include<process.h>
#include<math.h>
#define f(x) (x*x*x-x-11)
using namespace std;
int main()
{
    float x1, x2, x3, epsilon;
    int iteration =1;
    cout << "Enter initial approximation of x1 and x2" << endl;
    cout << "Enter value of x1 : ";
    cin >> x1;
    cout << "Enter value of x2 : ";
    cin >> x2;
    cout << "Enter allowed error : ";
    cin >> epsilon ;

    if (f(x1) * f(x2) > 0)
    {
        cout << "Initial values are not suitable";
        exit(1);
    }
    do 
    {
        x3 = (x1 + x2) / 2;
        cout << "\n Iteration = " << iteration <<"\tx3 = "<<x3 << "\t x1 " << x1 << " \t x2 " << x2 << endl;
        if (f(x3) == 0)
        {
            cout << "The aproximate root is : " << x3 <<endl;
            exit(1);
        }
        if (f(x1) * f(x3) < 0)
            x2=x3;
        else 
            x1=x3;
        iteration ++;
    }
    while (fabs((x1 - x2)/x2)  >= epsilon);
    cout << "The approximate root is : " << x3;
    return 0;
}