#include<iostream>
using namespace std;

class BaseClass{
    public: 
        int var_base;
        void display(){
            cout<<"Displaying Base Class Variable v]var_base: "<<var_base;
        }
};

class DerivedClass : Public BaseClass{
    public: 
        int var_derived;
        void display(){
            cout<<"Displaying Base Class Variable var_base: "<<var_base;
            cout<<"Dispaying derived class varible var_derived: "<<var_derived;
        }
};
int main(){
    BaseClass *base_class_pointer;
    BaseClass obj_derived;
    derivedClass obj_derived;
    base_class_pointer = &obj_derived;
    return 0;
}