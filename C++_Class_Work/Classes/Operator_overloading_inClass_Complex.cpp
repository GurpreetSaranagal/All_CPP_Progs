#include<iostream>
using namespace std;
class complex
{
    int rl,im;
    public:
    complex(int real = 0, int imag = 0)
    {
        rl= real;
        im= imag;
    }
    void display()
    {
        cout <<" \n "<< rl <<"  "<<im <<"i";
    }
    complex operator+(complex c2)
    {
        complex temp;
        temp.rl = rl + c2.rl;
        temp.im = im + c2.im;
        return temp;
    }
    complex operator-(complex c2)
    {
        complex temp; 
        temp.rl = rl - c2.rl;
        temp.im = im - c2.im;
        return temp;
    }
};
int main()
{
    complex c1(1,5), c2(2,4);
    complex sum = c1 + c2;
    complex diff = c1 - c2;
    c1.display();
    c2.display();
    cout <<"\n sum of these complex numbers is :";
    sum.display();
    cout <<"\n Difference of these complex numbers is :";
    diff.display();
    return 0;
}