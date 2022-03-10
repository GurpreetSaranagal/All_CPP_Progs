#include<iostream>
using namespace std;
class employee 
{
    double bs, ts;
    double da()
    {
        return (0.5 * bs);
    }
    double hra ()
    {
        return (0.2 * bs );
    }

    public :

    void input()
    {
        cout <<" Enter the basic salary "<<endl;
        cin >> bs;
    }

    void cal_tot()
    {
        ts=  bs + da() + hra();
    }

    void show ()
    {
        cout << " total salary "<< ts <<  endl;
        
    }
};
int main()
{
    employee e1;
    e1. input();
    e1. cal_tot();
    e1. show();
    
}