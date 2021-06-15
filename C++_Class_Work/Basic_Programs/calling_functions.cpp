// 20/04/21
// a function can be called by three ways in c++
// first,  call by value 
//          swap(2, 5); OR swap(a,b);
// 22/04/21
// second, call by address
//             swap(&a, &b); OR swap(a,b); >> where a,b are pointers
// thrid,  call by reference 
//             void swap (int &a, int &b);
//             swap(x,y);>> here a and b should be defined as reference variable in function definition 
#include<iostream>
using namespace std;
void swapn(int, int);
void swap(int *, int *);
void swap(int &, int &);
int main()
{
    int a,b;
    cout << "input values of a, b"<<endl;
    cin >> a >> b;
    cout<< "Before swap a = "<< a << "    b = "<< b<< endl;
    cout<< "**************************************************"<<endl;
    cout<< "Swaping using call by value "<<endl;
    swapn(a,b);
    cout<<"After swaping a = "<< a<< "    b = "<< b<< endl;
    cout<< "**************************************************"<<endl;
    cout<<"Swaping using call by address"<<endl;
    swap(&a,&b);
    cout<<"After swaping a = "<< a << "    b = "<< b<< endl;
    cout<< "**************************************************"<<endl;
    cout<< "Swaping using call by reference"<<endl;
    swap(a,b);
    cout<< "After swaping a = " <<a <<"    b = "<<b << endl;
    cout<< "**************************************************"<<endl;
    return 0;

}
void swapn(int x, int y)
{
    int t;
    t=x;
    x=y;
    y=t;
    cout << "after swaping in function "<< endl <<" a = "<<x <<"    b = "<<y <<endl;
}
void swap(int *x, int *y)
{
    int t;
    
    t=*x;
    *x=*y;
    *y=t;
}
void swap(int &x, int &y)
{
    int t;
    t=x;
    x=y;
    y=t;
}