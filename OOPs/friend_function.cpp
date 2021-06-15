#include<iostream>
using namespace std;
class complex
{
    int a, b;
    public :
        void setNumber(int n1, int n2)
        {
            a=n1;
            b=n2;
        }
        void printNumber()
        {
            cout << "Your number is "<<a<<" + "<< b<<"i" <<endl;

        }
        friend complex sumComplex(complex, complex);
        // friend int main();
};
complex sumComplex(complex o1, complex o2)
{
    complex o3;
    // o3.a = o1.a + o2.b;
    // o3.b = o1.b + o2.b;
    o3.setNumber((o1.a + o2.a), (o1.b + o2.b));
    // It cannot access the members directly by thier names and need object_name.member_name to access any member.
    // cout << a is invalid
    return o3;
}
int main()
{
    complex c1, c2, sum;
    c1.setNumber(1,4);
    c2.setNumber(5,8);
    c1.printNumber(); 
    c2.printNumber();
    sum = sumComplex(c1, c2);
    // cout << sum . a << " is the private value \n";
    // cout << sum . b << " is the private value \n";
    // c1.sumComplex(); VALID ONLY IF main() IS MADE FREIND OF CLASS COMPLEX
    sum.printNumber();
    return 0;
}