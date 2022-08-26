/* 
Constructor and Inhertence
case 1:
Class B: public A
{
    // order of execution of constructor -> first A() then b()

};

Case 2:
class A: public B, public C{
    // order of execution of constructor -> B() then C() and A()
};

Case 3:
class A: public B, virtual public C{
    // order of execution of constructor -> c() then B() and A()
};
*/
#include<iostream>
using namespace std;
class Base1{
    int data1;
    public:
        Base1(int i){
            data1 = i;
            cout <<"Base1 class constructor Called \n";
        }
        void printDataBase1(void){
            cout<<"The value of data1 is "<<data1 << "\n";
        }
};

class Base2{
    int data2;
    public:
        Base2(int i){
            data2 = i;
            cout <<"Base2 class constructor Called \n";
        }
        void printDataBase2(void){
            cout<<"The value of data2 is "<<data2 << "\n";
        }
};

// Case 4:
class Derived: public Base1,public Base2{
    int derived1, derived2;
    public:
    // this is consturctor with special syntax 
    // Derived takes four values and then distributes them to Base1() and Base2() 
        Derived(int a, int b, int c, int d):Base2(b),Base1(a)
        {
            derived1 = c;
            derived2 = d;
            cout <<"Derived class constructor called \n";
        }
        void printDataDerived(void){
            cout<<"The value of derived1 is "<<derived1 << "\n";
            cout<<"The value of derived2 is "<<derived2 << "\n";
        }
};
int main()
{
    Derived Harry(1,2,3,4);
    Harry.printDataBase1();
    Harry.printDataBase2();
    Harry.printDataDerived();
    return 0;
}