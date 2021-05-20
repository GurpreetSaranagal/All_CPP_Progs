#include<iostream>
using namespace std;
class rectangle{
    double l,b;
    public :
        void input ()
        {
            cout << " Input the values of length and breadth : "<<endl;
            cin >> l >> b;
        }
        void area (double & ans){
            ans = l*b;

        }
        void perimeter (double &ans)
        {
            ans = 2*(l+b);
        }

};
class circle 
{
    double r;
    public :
        void input ()
        {
            cout <<" Input value of radius : "<< endl;
            cin >> r;

        }
        void area(double &ans)
        {
            ans = 3.142 *r*r;
        }
        void circumference (double &ans)
        {
            ans = 2 * 3.142 * r;
        }

};
int main()
{
    double ans;
    rectangle rect1;
    rect1.input();
    rect1.area(ans);
    cout << "area of rectangle is  : " << ans  << endl;
    rect1.perimeter(ans);
    cout << "perimeter of rectagle is  : "<<ans << endl;
    
    
    circle cir1;
    cir1.input();
    cir1.area(ans);
    cout << "area of circle is  : "<<ans << endl;
    cir1.circumference(ans);
    cout << "circumference of circle is  : "<<ans << endl;
    return 0;
}