#include<iostream>
using namespace std;
class dollar;
class rupee
{
    float r;
    public:
    void show()
    {
        cout << "\nrupee = " << r;
    }
    float operator=( dollar ) ;
};
class dollar
{
    int d;
    public:
    void show ()
    {
        cout <<"\ndollars = " << d;
    }
    friend float rupee :: operator=(dollar );
};


// float rupee :: operator=(dollar dd)
// {
//     r = dd.d * 74.0;
    
// }
int main()
{
    
    return 0;
}