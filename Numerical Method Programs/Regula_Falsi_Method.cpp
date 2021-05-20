// program to find roots of equation using Regula falsi Method
// false position method
#include<iostream>
#include<process.h>
#include<math.h>
#define f(x) (x*x*x + x - 1)
using namespace std;
int main()
{
    float x1, x2, x3, epsilon, slope, temp;
    int iteration =1;
    cout << "Enter initial approximation of x1 and x2" << endl;
    cout << "Enter value of x1 : ";
    cin >> x1;
    cout << "Enter value of x2 : ";
    cin >> x2;
    cout << "Enter allowed error : ";
    cin >> epsilon ;
    cout << "Enter slope : ";
    cin >> slope;

    if (f(x1) * f(x2) >0)
    {
        cout <<"Initial values are not suitable ";
        exit(1);
    }
    do
    {
        if (fabs( f(x1) - f(x2) )   <   slope)
        {
            cout <<"Slope too small ";
            exit(1);
        }
        temp = x3;
        x3 = x1 - ( (x2 - x1) * f(x1) ) / ( f(x2) - f(x1) ) ;
        cout << " Iteration = " << iteration << "\t\tx3 = " <<x3 <<endl;
        if ( f(x1) * f(x3) < 0)
            x2=x3;
        else 
            x1=x3;
        
        iteration++;
    } while ( fabs (x1 - x2)  >= epsilon && f(x3) != 0 && fabs(x3 - temp)  > epsilon);
    
    cout << "The Approximate root is = "<<x3;
    return 0;
}