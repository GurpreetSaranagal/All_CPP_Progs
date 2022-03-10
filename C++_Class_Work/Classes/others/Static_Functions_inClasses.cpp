#include<iostream>
using namespace std;
class account 
{
    long int accno;
    double balance;
    static double rate;
    public:
    void read()
    {
        cout <<"\nEnter accno and balance: "<<endl;
        cin >> accno >> balance;
    }
    void cal_int()
    {
        balance = balance + balance * rate;
        cout << "\nCalculated Interest is " <<  balance * rate;
    }
    void show()
    {
        cout <<"\n Account no is " << accno;
        cout <<"\n Balance is "<< balance;
    }
    static void modify_rate(double incr)
    {
        rate = rate + incr;
    }
    void modify(double incr)
    {
        rate = rate + incr;
    }
};
double account :: rate = 0.05;

int main()
{
    account a1, a2; 
    a1. read ();    a1.cal_int();   a1.show();
    
    account :: modify_rate(0.001);// A static function can be called by using class name any changes made in static variable will be common for all class members as static variable is shared by all abjects and members. Moreover, this method clearly shows that static function changed is common for all
    // a1.modify_rate (0.001); // also valid but confusing
    // while this appears like that only for a1, rate's value is changed
    a2.modify(-0.001);// modify() is accessible only through an object and can't be called using class's name  
    
    
    a2.read();      a2.cal_int();   a2.show();
    
    return 0;
}