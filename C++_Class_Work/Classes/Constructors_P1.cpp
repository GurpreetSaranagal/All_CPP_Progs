/* Explanation of constructors 
    Definition: 
    A Constructor is a special member function used for automatic initialization of an object. Constructors are used for intializing values to the member data element of a class.
    
    Points:->
    1. These are basically member functions of the class. Therefore, these can also be called in the same way other functions are called for a function 
    2. Name of constructors exactly matches the name of class (even case should match exactly).
    3. Constructors are automatically called when an obect is created.
    4. They don't have any return type not even void. No return type should be mentioned with constructor.
    
    They are of two types :
        Default constructor     [rectangle ()]
        Parameterized Constructor  [rectangle (float, float)]
    */
// even if no constructor is defined, compiler have it's own constructor which is blank ie it does not assign any value. but if any constructor is defined, complier's constructor will not be called in any condition.

#include<iostream>
using namespace std;
class calculator;
class rectangle 
{
    float l, b;
    public:
    rectangle() ; // default consturctor // Constructor Overloading (after all constructor is also a function)
    rectangle(float x, float y)// Parameterized Constructor
    {
        l=x ; b=y;
    }
    void input(){
        cout<<"Enter the value " <<endl;
        cin >> l >> b;
    }  
    friend class calculator;
    
};
rectangle::rectangle()  // Constructors can also be defined outside the class 
    {
        l=2.0;      b=1.5;
    }

class calculator
{
    public:
    float area(rectangle r)
    {
        return  r.l * r.b;
    }

    float perimeter(rectangle r)
    {
        return 2*(r.l+r.b);
    }

    
};
int main()
{
    rectangle r1;
    calculator cal;
    
    cout <<"Using default constructor "<<endl;
    cout <<"Area of default values : " << cal.area(r1) <<endl;
    cout <<"Perimeter of default values :" << cal.perimeter(r1) <<endl;

    cout <<"Now using perameterized constructor :" << endl;
    rectangle r2(6.5, 4.3);
    cout <<"Area of values using perameterized constructor : " << cal.area(r2) <<endl;
    cout <<"Perimeter of values using perameterized constructor :" << cal.perimeter(r2) <<endl;
    
    cout << endl <<"Now using input() function "<< endl;
    r2.input();
    cout <<"Area of values using input() : " << cal.area(r2) <<endl;
    cout <<"Perimeter of values using input() : " << cal.perimeter(r2) <<endl;
    return 0;
}