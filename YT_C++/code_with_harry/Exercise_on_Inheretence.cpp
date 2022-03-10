/*
create 2 classes
1. Simple calulator--> takes input of 2 numbers using a utility function* and performs +, -, *, / and display the result using another function. 
2. ScietificCalculator--> takes input of 2 numbers using a utility function* and performs an four scientific operation of your choice and display the result using another function. 

Create another class HybridCalculator and inherit it using these 2 classes
    q1. What type of inheritence are you using?
    Q2. Which mode of Inheretenance are you using?
    Q3. Create an object of HybridCalculator and display result of simple and scientific calculator.
    Q4. How is code reusability implemeted?
*An UTILITY function is a  private function used only within member funtions generally for input and output

Ans 1. I have used mulitilevel inheretence 
Ans 2. I have used public mode of inheretence
Ans 3. Alredy done
Ans 4. I have implemented it by reusing the fuctions defined in both the base classes with the object of derived class i.e. hybrid_calculator. So we are able to perform the fuctions of both the classes like sum and cube. I have just defined the constructor of derived class which provides all the values to data members of base classes.

*/
#include <iostream>
// #include <math.h>
#include <cmath>
using namespace std;
class SimpleCalculator
{
    protected:
        double op1;
        double op2;
        void utility_output(double ans)
        {
            cout << ": " << ans << "\n";
        }
        

    public:
    void set_numbers()
        {
            cout << "Input two numbers:" << "\n";
            cin >> op1 >> op2;
        }
        void sum()
        {
            utility_output(op1 + op2);
        }
        void subtract()
        {
            utility_output(op1 - op2);
        }
        void multiply()
        {
            utility_output(op1 * op2);
        }
        void divide()
        {
            utility_output(op1 / op2);
        }
        void PerformOperations(){
            sum();
            subtract();
            multiply();
            divide();
        }
};
class Scietific_Calculator
{
    protected:
        double op1, op2;
        
        void show_output(double ans)
        {
            cout << ans ;
        }

    public:
        void set_numbers()
            {
                cout << "Input two numbers(double) : " << endl;
                cin >> op1 >> op2;
            }
        void cube()
        {
            cout << "Cube of "<<op1<< " is ";
            show_output(op1 * op1 * op1);
            cout << endl;
            cout << "Cube of "<<op2<<" is ";
            show_output(op2 * op2 * op2);
            cout << endl;
        }
        void sin_of_number(){
            cout<<"The sin of "<<op1 <<" (in Radians) is ";
            show_output(sin(op1));
            cout << endl;


            cout<<"The sin of "<<op2 <<" (in Radians) is "; 
            show_output(sin(op2));
            cout<< endl;
        }
        void square_roots()
        {
            cout << "The square root of "<< op1<< " is ";
            show_output(sqrt(op1)); cout << endl;

            cout << "The square root of "<< op2<< " is ";
            show_output(sqrt(op2)); cout << endl;
        }
        void exponent(){
            cout<< "The value of exp(" << op1 <<") is : "<< exp(op1) <<"\n";
            cout<< "The value of exp(" << op2<< ") is : "<< exp(op1) <<"\n";
        }
};

class Hybrid_Calculator: public SimpleCalculator, public Scietific_Calculator{
    public:
        Hybrid_Calculator(double a = 0, double b = 0){
            SimpleCalculator ::op1 = a;
            SimpleCalculator ::op2 = b;
            Scietific_Calculator :: op1 = a;
            Scietific_Calculator :: op2 = b;
        }

};
int main()
{
    double a,b;
    cout <<"input any two numbers(double): \n";
    cin >> a >> b;
    Hybrid_Calculator cal(a,b);
    cout<<"\ncalling sum() :\n";
    cal.sum();
    cout<<"\ncalling subtract() :\n";
    cal.subtract();
    cout<<"\ncalling multiply() :\n";
    cal.multiply();
    cout<<"\ncalling divide() :\n";
    cal.divide();
    cout<<"\ncalling cube() :\n";
    cal.cube();
    cout<<"\ncalling sin() :\n";
    cal.sin_of_number();
    cout<<"\ncalling square_roots() :\n";
    cal.square_roots();
    cout<<"\nCalling exponent() :\n";
    cal.exponent();
    // cal.PerformOperations();
    
    return 0;
}
