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
    counter operator ++()// only for prefix
    {
        counter temp;
        count = count + 1;
        temp.count = count;
        return temp;
    }
    counter operator ++(int )// only for postfix increament operator 
    //Here int is a unused argument used to distiguish between pre and postfix
    {
        counter temp;
        temp.count = count;
        count = count + 1;
        return temp;
    }
    // both the function can be used either on single object or can be used with two through assignment operator 
    int show ()
    {
        return count;
    }
};

int main()
{
    counter c1,c2;
    cout<<"\n initial value of c1 object = " << c1.show();
    cout<<"\n intital value of c2 object = " << c2.show();
    
    c2 = ++c1;// this statement uses counter operator++();
    cout<<"\n after prefix operation ";
    cout<<"\n final value of c1 object = " << c1.show();
    cout<<"\n final value of c2 object = " << c2.show();
    
    c2 = c1++;// and this statement uses counter operator++(int); function
    ++c1;
    //  this statement is also valid 
    // so by difining these functions we can get both the functionality of pervious void operator++() 
    cout<<"\n after postfix operation ";
    cout<<"\n final value of c1 object = " << c1.show();
    cout<<"\n final value of c2 object = " << c2.show();
    return 0;
}