// Employee in an office are required to enter their attendance at the time of reporing for the duty. Manager can at anytime check whether the employee has reported for duty or not. Write a program to stimulate the above problem
#include<iostream>
using namespace std;
class manager;
class employee
{
    int Id;
    char Name[20];
    static int attendence[10];
    public:
        employee ();
        employee(int id )
        {
            if (id >0 && id <=10 && attendence[id] != 1)
            {
                Id = id;
                attendence[Id] = 0;
            }
           
            else 
            {
                cout <<"Invalid ID Number \n input ID again (<10)";
                cin >> Id;
            }
        }
        void input()
        {
            cout << "Input name of the employee : ";
            cin >> Name;
            attendence [Id] = -1;
        }
        void mark_attendence()
        {
            if (attendence[Id] != 1)
                attendence[Id] = 1;
        }
        friend class manager;
};
employee :: employee ()
{
    
}
int employee ::attendence [] ={0,0,0,0,0,0,0,0,0,0};
class manager
{
    int check_att[10];
    public:
    void checks(employee ee)
    {
        if( employee::attendence[ee.Id] == 1 )
        {
            cout <<"Good! " << ee.Name << " ID " << ee.Id << " has marked its attendance \n";
            check_att[ee.Id -1] = 1;
        }
        else if( employee::attendence[ee.Id] == -1)
        {
            cout <<ee.Name<<" ID " << ee.Id << " is present but did'nt marked his attendance \n";
        }
        else if( employee::attendence[ee.Id] == 0)
        {
            cout <<ee.Name<<" ID "<<ee.Id<<" is absent Today";
        }
    }
};
int main()
{
    cout <<"Input number of employees : ";
    int num;
    cin >> num;
    employee arr[num];
    for(int i=0; i < num ;i++)
        arr[i] = employee (i+1);
    manager M;
    for (int i=0; i < num ; i++) 
    {
        arr[i].input();
        arr[i].mark_attendence();
    }
    
    for(int i=0; i < num; i++)
    {
        M.checks(arr[i]);
    }
    return 0;
}