#include<iostream>
using namespace std; 
class account 
{
    long int accno;
    double balance;
    static double rate;

    public:
    void read ()
    {
        cout <<"\n Enter acc. no. and balance" << endl;
        cin >> accno >> balance;
    }
    void cal_int()
    {
        balance = balance + balance * rate;
    }
    void show()
    {
        cout <<"\n Account Number is " << accno;
        cout <<"\n Interest is "<< rate ;
        cout <<"\n Balance is "<< balance;
    }
};
double account :: rate = 0.05;

int main()
{
    account a1, a2;
    cout << "\nEnter information of a1 " <<endl;
    a1.read();  a1.cal_int();   a1.show();

     
    cout << "\nEnter information of a2 " << endl;
    a2.read();  a2.cal_int();   a2.show();
            
    return 0;
}