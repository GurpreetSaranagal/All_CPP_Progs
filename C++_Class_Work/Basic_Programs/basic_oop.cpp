#include<iostream>
using namespace std;
class circle 
{
    float r;
    public:

        void input()
        {
            cout <<" Input radius of circle "<<endl;
            cin >> r;
        }

        void circumference()
        {
            float cr;
            cr = 2 * 3.142 * r;
            cout<<" circumference of circle is " << cr<<endl;
        }

        void area()
        {
            float ar;
            ar=3.142 * r * r;
            cout << " area of circle is "<< ar <<endl;
        }
};
class rectangal
{
    float l,b;
    public :

        void input ()
        {
            cout << "Enter the values of lenght and breadth "<<endl;
            cin>> l>>b;
        }
        void area ()
        {
            float ar;
            ar = l*b;
            cout <<"area is "<< ar <<endl;
        }
        void perimeter()
        {
            float pr;
            pr = 2*(l + b);
            cout << "perimeter is " << pr<<endl;
        }

};
int main()
{
    rectangal r1;
    // cout << "Now input length and breadth of rectangle " <<endl;
    r1.input();
    // cout << "Now calculating area "<<endl;
    r1.area();
    // cout << "Now calculating perimeter " << endl;
    r1.perimeter();

    circle c;
    c.input();
    c.area();
    c.circumference();
    return 0;
}