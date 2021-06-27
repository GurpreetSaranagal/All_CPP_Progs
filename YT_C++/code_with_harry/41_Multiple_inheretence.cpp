#include <iostream>
using namespace std;

// class Derieved: visibility_mode base1, visiblility_mode base2
// {
//     class body of class"derived"
// }

class Base1
{
protected:
    int base1int;

public:
    void set_base1int(int v)
    {
        base1int = v;
    }
    void get_base1int()
    {
        cout << "variable of base1 is " << base1int<< endl;
    }
};
class Base2
{
protected:
    int base2int;

public:
    void set_base2int(int v)
    {
        base2int = v;
    }
    void get_base2int()
    {
        cout << "variable of base2 is " << base2int<<endl;
    }
};
class Base3
{
protected:
    int base3int;

public:
    void set_base3int(int v)
    {
        base3int = v;
    }
    void get_base3int()
    {
        cout << "variable of base3 is " << base3int<<endl;
    }
};
class Derived : public Base1, public Base2, public Base3{
    public:
    void show(){
        get_base1int();
        get_base2int();
        get_base3int();
        cout << "The sum of these values is "<< base1int + base2int + base3int<<endl;
    }
};
/*
The inhereted derived class will look like this:
    Data members:
    base1int --> protected
    base2int --> protected 
    Member functions:
    set_base1int --> public
    get_base1int --> public
    set_base2int --> public
    get_base2int --> public
    show --> public
*/
int main()
{
    Derived harry;
    harry.set_base1int(34);
    harry.set_base2int(43);
    harry.set_base3int(3);
    harry.show();
    return 0;
}