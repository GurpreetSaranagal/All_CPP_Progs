#include<iostream>
using namespace std;
class complex
{
    int rp, ip;
    public :
    complex(){ rp = ip = 0; }// default constructor
    complex(int real_part, int imaginary_part)// parmeterized constructor
    {
        rp = real_part;
        ip = imaginary_part;
    }
    void show()
    {
        cout<<rp<<" x "<<ip<<" i ";
    }
    friend complex operator+(complex, complex);
    friend complex operator-(complex, complex);

};
// friend functions are not member functions so we will not use :: here 
complex operator+(complex c1, complex c2)// here the calling object is not directly accessible so it is passed as an argument
{
    complex temp;
    temp.rp = c1.rp + c2.rp;
    temp.ip = c1.ip + c2.ip;
    return temp;
}
complex operator-(complex c1, complex c2)
{
    complex temp;
    temp.rp = c1.rp - c2.rp;
    temp.ip = c1.ip - c2.ip;
    return temp;
}
int main()
{
    complex c1(2,4),c2(4,3);
    complex res = c1 + c2;// this translates to res = operator+(c1,c2);
    // complex res = operator+(c1,c2);
    c1.show();
    cout <<" + ";
    c2.show();
    cout << " = ";
    res.show();
    cout <<"\n";

    res = c1 - c2;
    c1.show();
    cout <<" - ";
    c2.show();
    cout << " = ";
    res.show();
    cout <<"\n";

    return 0;
}