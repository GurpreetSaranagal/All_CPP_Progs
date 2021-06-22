// In this program we are converting data from one user defined type (class) to another user-defined type (class)
// there are two ways of this conversion 
// One by defining conversion function in the source class (this program)
// Second by defining conversion function in the destination class(2b)
#include<iostream>
using namespace std;
class rupee//destination class
{
    double rs;
    public:
        rupee(double rs1 = 0)
        {
            rs = rs1;
        }
        void show()
        {
            cout<<"\nMoney in rupees "<< rs;
        }
};
class dollar // source class
{
    int dol;
    public:
        dollar(double doll = 0)
        {
            dol = doll;
        }
        operator rupee()
        {
            double dol_value= 74.34;
            double rs1 = dol * dol_value;
            return (rupee(rs1));
            // this statement first creates a unnamed object of class rupee and intitialize it using single parameter constructor( rupee(double) ) which is then returned

        }
        void show()
        {
            cout<<"\n Money in dollars = "<<dol;
        }
};
int main()
{
    dollar d1(3);
    d1.show();
    rupee r1;
    r1 = d1; // convert 'dollar' into 'rupee'
    r1.show();
    
    return 0;
}