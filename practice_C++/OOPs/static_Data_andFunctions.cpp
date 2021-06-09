#include<iostream>
using namespace std;
class accounts{
    int acc_no;
    static int No_of_Customers;
    public:
        accounts(){}
        accounts(int acNo)
        {
            acc_no = acNo;
            Inc_counter();
        }
        static void Inc_counter()
        {
            No_of_Customers += 1;
        }
        void show ()
        {
            cout<<"\nAcc No = " << acc_no 
            << "\n No of Customers = " << No_of_Customers;
        }
};
int accounts :: No_of_Customers = 0;
int main()
{
    accounts a1(10232);
    a1.show();
    accounts a2(3211);
    a2.show();
    return 0;
}