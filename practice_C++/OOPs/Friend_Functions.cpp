#include<iostream>
using namespace std;
class Numbers;
class Calculate
{
    public:// Note: All Functions are defined later because Numbers class is not completly defined so compiler don't know that if these functions are friend or not 
    int sum(Numbers N);
    int operator-(Numbers N);
    int multiply(Numbers N);
};
class Numbers
{
    int a,b;
    public:
    // friend int Calculate:: sum (Numbers );
    // friend int Calculate:: operator-(Numbers);
    // friend int Calculate:: multiply(Numbers);
    // instead of these all statments we can declare class Calculate as friend of class Numbers as following
    friend class Calculate;
    void read(int aa, int bb)
    {
        a= aa; b=bb;
    }
    void display()
    {
        cout << "\na = " << a <<"\nb = "<<b;
    }
    
};
int Calculate :: sum(Numbers N)
{
    int sum = N.a + N.b;
    return sum;
}
int Calculate:: operator-(Numbers N)
{
    int diff = N.a - N.b;
    return diff;
}
int Calculate::multiply(Numbers N)
{
    int product = N.a * N.b;
    return product;
}
int main()
{
    Numbers N;
    N.read(4, 4);
    Calculate C;
    
    cout <<"\nSum of numbers = " << C.sum(N);
    cout <<"\nDifference of two numbers = " << C-N;
    cout <<"\nProduct of two numbers = " << C.multiply(N);
    return 0;
}