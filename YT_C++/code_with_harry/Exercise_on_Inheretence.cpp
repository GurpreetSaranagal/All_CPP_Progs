/*
create 2 classes
1. Simple calulator... takes input of 2 numbers using a utility function and performs +, -, *, / and display the result using another function. 
2. ScietificCalculator... takes input of 2 numbers using a utility function and performs an four scientific operation of your choice and display the result using another function. 

Create another class HybridCalculator and inherit it using these 2 classes
    q1. What type of inheritence are you using?
    Q2. Which mode of Inheretenance are you using?
    Q3. Create an object of HybridCalculator and display result of simple and scientific calculator.
    Q4. How is code reusability implemeted?
*/
#include <iostream>
#include <math.h>
#include <cmath>
using namespace std;
class SimpleCalculator
{
    protected:
        double op1;
        double op2;
        void utility_output(double ans)
        {
            cout << "The output of performed calculation is " << ans << endl;
        }
        

    public:
    void set_numbers()
        {
            cout << "Input the numbers:" << endl;
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
};

class Hybrid_Calculator: public SimpleCalculator, public Scietific_Calculator{
    public:
        Hybrid_Calculator(int a = 0, int b = 0){
            SimpleCalculator ::op1 = a;
            SimpleCalculator ::op2 = b;
            Scietific_Calculator :: op1 = a;
            Scietific_Calculator :: op2 = b;
        }

};
int main()
{
    Hybrid_Calculator cal(43, 2);
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
    
    return 0;
}
/*

        void simple_sum(double a=0, double b=0){
            double sum ;
            if(a && b)// this will be true only if a and b both are non zero
            // ie if numbers are given their sum will be shown otherwise saved number's
                sum = a+b;
            else{
                sum = op1 + op2;
                a = op1;
                b = op2;
            }

            cout<<"sum of " << a << " and " << b << " : "<<sum;
        }
        void simple_subtract(double a, double b){
            double diff ;
            if(a && b)// this will be true only if a and b both are non zero
                diff = a-b;
            else{
                diff = op1 - op2;
                a = op1;
                b = op2;
            }
            
            cout << "Difference of " << a << " and " << b << " is : "<<diff;
        }
        void simple_multiply(double a, double b){
            double mult ;
            if(a && b)// this will be true only if a and b both are non zero
                mult = a*b;
            else{
                mult = op1 * op2;
                a = op1;
                b = op2;
            }
            
            cout << "Product of " << a << " and " << b << " is : "<<mult;
        }
        void simple_divide(double a, double b){
            double quot ;
            if(a && b)// this will be true only if a and b both are non zero
                quot = a/b;
            else
            {
                quot = op1 / op2;
                a = op1;
                b = op2;
            }
            cout << "Quotient of " << a << " and " << b << " is : "<<quot;
        }
*/