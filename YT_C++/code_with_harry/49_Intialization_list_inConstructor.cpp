/*
Syntax for intitialization list in constructor:

constructor(argument_list): initilization_section
{
    assignment + other code;
}
class Test {
    int a;
    int b;
    
    pubic:
        Test(int i, int j) : a(i), b(j){
            ...
        }
};

*/
#include<iostream>
using namespace std;
class Test {
    int a;
    int b;
    
    public:
    // VARIOUS USE CASES OF INITIALIZATION SECTION
        // Test(int i, int j) : a(i), b(j)
        // Test(int i, int j) : a(i), b(j+i) // this also works
        // Test(int i, int j) : a(i), b(j*2) // this also works
        // Test(int i, int j) : a(i), b(a + j) // this also works because a's value is available
        // Test(int i, int j) : b(j), a(i+b) // --> RED FLAG this will create problem because a will be initialized first because a is declared

        Test(int i, int j) : a(i)
        { 
            b = j;
            cout <<"Constructor Executed \n";
            cout <<"Value of a is: "<<a <<"\n";
            cout <<"Value of b is: "<<b <<"\n";
        }
};

int main()
{
    Test d(34, 22);
    return 0;
}