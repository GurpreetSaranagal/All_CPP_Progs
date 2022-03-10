#include <iostream>
using namespace std;
class Base1
{
public:
    void greet()
    {
        cout << "How are you?\n";
    }
};

class Base2
{
public:
    void greet()
    {
        cout << "Kaise ho?\n";
    }
};

class Derived : public Base1, public Base2
{
    int a;

public:
    void greet()
    {
        Base2::greet();
    }
};

class B
{
public:
    void say()
    {
        cout << "Hello world \n";
    }
};

class D : public B
{
    int a;
    // D's new say() method will override base class's say() method
public:
    void say()
    {
        cout << "Hello my beautifl people \n";
    }
};
int main()
{
    //      Ambiguity 1

    // Base1 base1obj;
    // Base2 base2obj;
    // base1obj.greet();
    // Derived d;
    // d.greet();

    //      Ambiguity 2

    D d;
    d.say();

    return 0;
}