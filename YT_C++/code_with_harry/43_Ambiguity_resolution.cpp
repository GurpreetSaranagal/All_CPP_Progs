#include<iostream>
using namespace std;
class Base1
{
    public:
    void greet(){
        cout << "How are you?\n";
    }
};

class Base2
{
    public:
    void greet(){
        cout << "Kaise ho?\n";
    }
};

class Derived : public Base1, public Base2
{
    int a;
    public:
    void greet(){
        Base2::greet();
    }
};
int main()
{
    Base1 base1obj;
    Base2 base2obj;
    base1obj.greet();
    Derived d;
    d.greet();
    return 0;
}