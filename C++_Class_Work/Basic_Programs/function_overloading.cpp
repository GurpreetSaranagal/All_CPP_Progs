// 19/04/21 FUNCTION OVERLOADING
#include<iostream>
#include<iomanip>
using namespace std;
/*
void area_cir(double);
void area_rect(double, double);
// OR
*/
void area(double); //  ON BASIS OF NUMBER OF ARGUMENTS
void area(double, double);
/*
    void sum (int , int);       ] ON BASIS OF TYPE OF ARGUMENTS 
    void sum (double , double );]

    void sum (int , double);    ]
    void sum (double , int);    ] ON BASIS OF ORDER OF ARGUMENTS
*/
int main()
{
    double r,l,b;
    cout<< " enter the radius of circle : ";
    cin >> r;
    cout<< " enter the length and breadth of rectangle: "<< endl;
    cin>> l>>b;
    area(r);
    area(l,b);

    return 0;
}

void area (double r)
{
    double ar;
    ar = 3.142*r*r;
    cout << " the area of circle is "<< setprecision(8)<<ar<<endl;

}
void area (double l, double b)
{
    double ar;
    ar = l*b;
    cout << " the area of rectangle is "<< ar << endl;

}