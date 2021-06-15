// 20/04/21
/*
int *p, a;
p= &a;      '&'(ampersand)  address of operator is used to extract address of the variables and can be used with pointers and normal variables
cout << *p; '*'(astrick) indirection or dereferencing operator cannot be used with normal variables
p=p+1;      operations on pointers
cout<< p; 
*/

// interchange the values of numbers using pointers
#include<iostream>

using namespace std;
void swap(int *, int * ); // this program is also an example of functions returning multiple values
void swap(int &, int & );// using pointers and reference variable
int main()
{
    int a,b;
    cout<<"input two numbers "<<endl;
    cin>> a >>b;
    cout<< "before swaping "<<a <<"  "<< b<<endl;
    swap(&a,&b);
    cout << "after swaping using pointers "<<a<< "  "<< b<<endl;
    swap (a,b);
    cout << "after swaping using reference variables "<<a<< "  "<<b;

    return 0;
}
void swap(int* x, int* y)
{
    int t;
    t=*x;
    *x=*y;
    *y=t;
}
void swap(int &x, int &y)// using referencing variable is a lot more easy almost like using normal variables
{
    int t;
    t=x;
    x=y;
    y=t;
}