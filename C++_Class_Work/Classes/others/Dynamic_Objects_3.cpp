#include<iostream>
using namespace std;
class employee
{
    int code;
    char name;
    float salary;
    public:
    void read()
    {
        cout << "\n Input ID, Name, salary: \n";
        cin >> code >> name >> salary ;
    }
    void show()
    {
        cout << name << "'s "
    }
};
int main()
{
    
    return 0;
}