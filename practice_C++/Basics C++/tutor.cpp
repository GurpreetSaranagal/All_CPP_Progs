#include<iostream>
using namespace std;
int main()
{
    int samar, rohit;
    samar = 14; 
    rohit = 12;
    if(samar == rohit)
    {
        cout<<"both are same";
    }
    samar = 15;
    if(samar > rohit)
    {
        cout<<"samar is older";
    }
    samar = 25; 
    if (samar < rohit)
    {
        cout<<"rohit is older";
    }
    return 0;
}