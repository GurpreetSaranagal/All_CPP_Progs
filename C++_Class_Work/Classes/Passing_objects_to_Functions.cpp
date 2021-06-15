// an object can be passed to function by three methods 
// 1. Pass by value 
// 2. Pass by address
// 3. Pass by reference 

#include<iostream>
using namespace std;
class account
{
    long accno, bal;
    public:
    void input();
    void show();
    void transfer(account, int); // Pass by value
    void ref_transfer(account& , int);
    void transfer(account* , int );
};

void account :: input ()
{
    cout << "Input account no and bal " << endl;
    cin >> accno >> bal;
}
void account :: show ()
{
    cout << "The balance of acc. no. " << accno <<" is " << bal  << endl;
}
void account :: transfer (account a2, int amt)// here changes made in formal arguments will not be reflected in main as it is call by value
{
    bal = bal - amt;
    a2.bal += amt;
}
void account :: ref_transfer(account &a2, int amt)// here changes will be reflected in main because it is call by reference 
{
    bal -= amt;
    a2.bal += amt;
}
void account :: transfer (account *p, int amt)// here also, changes will refelect in main as it is call by address. This address is stored in pointer of same type as object 
{
    bal -= amt;
    p -> bal += amt;        //(*p).bal += amt;
    // '->' operator os call ARROW OPERATOR which is used to dereference and access the private variable of the object whose address is passed. It is equavalent to statement (*p).bal

}
int main()

{
    int amount ;
    account ramesh, suresh;
    ramesh.input();
    suresh.input();
    cout << "Input amount which is to be transfered"<< endl;
    cin >> amount;

    ramesh. transfer (suresh, amount); // call by value 
    cout << "balance of ramesh" << endl;
    ramesh.show();
    cout << "balance of suresh" << endl;// changes made will not be reflected 
    suresh.show();

    ramesh. ref_transfer(suresh, amount);// call by reference
    cout << "balance of ramesh" << endl;
    ramesh.show();
    cout << "balance of suresh" << endl;
    suresh.show();

    ramesh. transfer (&suresh, amount);// call by address / pointer
    cout << "balance of ramesh" << endl;
    ramesh.show();
    cout << "balance of suresh" << endl;
    suresh.show();

    return 0;
}