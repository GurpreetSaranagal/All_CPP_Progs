#include<iostream>
using namespace std;
class emp{
    protected:
        int emp_code;
        char emp_name[20];
        char address[70];
    public:
        void read(){
            cout<<"Input name of employee: ";   cin.getline( emp_name, 20, '\n' ); cout<<"\n";
            cout<<"Input complete address of employee: ";   cin.getline(address, 70, '\n' ); cout<<"\n";
            cout<<"Input code of employee: ";   cin>> emp_code; cout<<"\n";
        }
        void show(){
            cout<<"Name : "<<emp_name <<"\n"
                <<"Code : "<<emp_code <<"\n"
                <<"Address : "<<address <<"\n";
        }
};
class emp_salary: public emp
{
    protected:
        float basic_sal;
        float income_tax;
        float net_salary;
    public:
        void read(){
            emp::read();
            cout<<"Input Basic Salary: ";   cin>>basic_sal; cout<<"\n";
            cout<<"Input Income tax(in %age): ";    cin>>income_tax; cout<<"\n";
        }
        void calculate_salary(){
            net_salary = basic_sal - ((income_tax / 100) * basic_sal);
        }
        void show(){
            emp::show();
            cout<<"Basic Salary - income tax(%age) = net salary \n";
            cout<<basic_sal <<" - " << income_tax << "% = " << net_salary <<"\n";
        }
    
};
int main(){
    emp_salary E;
    E.read();
    E.calculate_salary();
    E.show();
    return 0;
}