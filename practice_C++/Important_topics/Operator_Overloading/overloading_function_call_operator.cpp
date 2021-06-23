// this is a special type of operator overloading 
#include<iostream>
using namespace std;
class xyz
{
    public:
    int operator()(int num)// this functions must be a member functions of class or complier will generate an error
    {
        int ch = num* num* num;
        return ch;
    }
};

int main()
{
    xyz cube;
    int a = 5, res;
    res = cube(a);// cube.operator()(a);
    cout<<res;
    return 0;
}