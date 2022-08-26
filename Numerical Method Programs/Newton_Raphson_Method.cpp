#include<iostream>
#include<process.h>
#include<math.h>
#define f(x)  (x*x - 25)
#define fd(x) (2*x)
using namespace std;
int main()
{
    float x0, x1, y0, y1, epsilon, delta ;
    int iteration, n;
    cout << "Enter initial approximation value of x0 : ";
    cin >> x0;
    cout << "Enter allowed error : ";
    cin >> epsilon ;
    cout << "Enter the value of delta : ";
    cin >> delta;
    cout << "Enter maximum number of iteration : ";
    cin >> n;

    for(iteration = 1 ; iteration <= n ; iteration ++)
    {
        y0 = f(x0) ;
        y1 = fd(x0);
        if ( y1 < delta )
        {
            cout << "Slope of function f(x) is too small near root";
            exit(0);
        }
        x1 = x0 - (y0 /y1);
        cout << "\n Iteration = "<<iteration << "\t\t x0 = " << x0 << "\t\t x1 = " <<x1;
        if ( (fabs ((x1- x0) / x1 ) <= epsilon  )  ||  (f(x1) == 0)  )
        {
            cout <<"\n The approximation root is: " << x1 ;
            cout <<"\n Total number of iteration is: "<<iteration;
            exit(1);
        }
        x0 = x1;

    }
    cout <<"\nSolution cannot find is " << iteration << " iterations";
    return 0;
}