#include<iostream>
using namespace std;
class complex
{
    int a , b;
    friend class calculator;
    public: 
        void setNumber(int n1, int n2)
        {
            a= n1;
            b= n2;
        }
        void printNumber()
        {
            cout << "Your number is " << a << " + " << b <<" i"<<endl;
        }
};
class calculator
{
    public:
    int sumReal(complex o1, complex o2)
    {
        return (o1.a + o2.a);
    }
    int sumComp(complex o1, complex o2)
    {
        return (o1.b + o2.b);
    }
};
int main()
{
    complex o1, o2;
    o1.setNumber(1, 4);
    o2.setNumber(5, 7);
    calculator calc;
    int res = calc.sumReal(o1, o2);
    cout << "The sum of real part of o1 and o2 is " << res << endl;
    int resc = calc.sumComp(o1, o2);
    cout << "The sum of complex part of o1 and o2 is " << resc << endl;
    return 0;
}