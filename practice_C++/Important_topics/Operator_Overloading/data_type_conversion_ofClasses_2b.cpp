#include<iostream>
#define dol_val 74.34
using namespace std;

class dollar
{
    int dol;
    public:
    dollar (double doll)
    {
        dol = doll;
    }
    void show()
    {
        cout<<"\nMoney in Dollars: " << dol;
    }
    double ret_dol(){
        return dol;
    }
};
class rupee
{
    double rs;
    public:
    rupee(dollar d)
    {
        rs = d.ret_dol()*dol_val;
    }
    void show()
    {
        cout<<"\nMoney in Rs = "<<rs;
    }
};

int main()
{
    dollar d1(3);
    d1.show();
    rupee r1 = d1;//convert dollar into rupee
    r1.show();

    return 0;
}