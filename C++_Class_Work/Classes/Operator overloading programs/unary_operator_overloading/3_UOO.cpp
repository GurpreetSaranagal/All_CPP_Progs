// operator overloading using friend functions
#include<iostream>
using namespace std;
class counter 
{
    private:
        int count;
    public:
        counter()
        {
            count = 0;
        }
        friend counter operator++(counter &);
        friend counter operator++(counter &, int );
        int show()
        {
            return count;
        }
};
counter operator++(counter &cc)// for prefix increament operator 
{
    counter temp;
    temp.count = cc.count;
    cc.count += 1;
    return temp;
}
counter operator++(counter &cc, int)// for postfix increament operator
//Here int is a unused argument used to distiguish between pre and postfix
{
    counter temp;
    cc.count += 1;
    temp.count = cc.count;
    return temp;
}
int main()
{   
    counter C,c2;
    cout <<"\n Initial value of count : "<<C.show();
    C++;
    cout<<"\n Value after postfix : "<<C.show();
    c2=++C;
    cout<<"\n Value after perfix : "<< C.show();
    cout<<"\n Value after perfix of c2 : "<< c2.show();
    return 0;
}