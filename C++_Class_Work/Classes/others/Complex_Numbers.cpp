#include<iostream>
using namespace std;
class complex
{
    float rp, ip;
    public :
    void add (complex, complex);
    void input();
    void show ();
    void diff(complex, complex);
};

void complex :: input()
{
    cout << "Input real and imaginary part of complex number :" << endl;
    cin >> rp >> ip;
}

void complex :: show()
{
    cout << rp << "  "<< ip;
}

void complex :: add(complex c1, complex c2)
{
    rp = c1.rp + c2.rp;
    ip = c1.ip + c2.ip;
}

void complex :: diff(complex c1, complex c2)
{
    rp = c1.rp - c2.rp;
    ip = c1.ip - c2.ip;
}
int main()
{
    complex c1, c2, c3, c4;
    c1.input();     c2.input();

    c3.add(c1, c2);
    c3.show();  
    cout <<endl;

    c4.diff(c1, c2);
    c4.show();
    cout <<endl;
    return 0;
}