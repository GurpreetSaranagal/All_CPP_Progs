#include<iostream>


using namespace std;// this statement is used to get rid of std :: cout<<
#define PI 3.1427
int main()
{
    int r;
    float cir, area;
    cout<<"\n Enter the radius of the circle: ";
    cin>>r;
    cir= 2*PI *r;
    area = PI*r*r;
    cout<<"\n The cicumference of the circle= "<<cir;
    cout<<"\n The area of circle is= "<<area;
    return 0;

}