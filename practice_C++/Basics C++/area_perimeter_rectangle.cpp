#include<iostream>
using namespace std;
int main()
{
    void cal_rect(int , int , int  &, int &);
    int l, b, area, perimeter;
    cout<< "Enter length and breadth of rectangle : ";
    cin >> l>> b;
    cal_rect(l,b,area, perimeter);
    cout<< "\n Area of rectangle= "<<area;
    cout<< "\n Perimeter of rectangle= "<<perimeter;

    return 0;
}

void cal_rect (int x, int y, int &ar, int &pr)
{
    ar= x*y;
    pr=2*(x+y);
}