#include<iostream>
#include<process.h>
#define max_size 5
using namespace std;
class array
{
    int arr[max_size];
    public:
    array();
    
    int &operator[](int n)
    {
        if(n >= 0 && n<max_size)
            return arr[n];
        else
            cout<<"\nindex out of range\n";
            exit(1);
    }
};
array :: array()
{
    for(int i=0; i<max_size; i++)
    {
        cout<<"\nInput "<<i<<" th element";
        cin>> arr[i];
    }
}
int main()
{
    int t;
    array  a1;
    
    t = a1[2];
    cout<< "3rd element is "<<t<<endl;
    a1[3] = 9991;
    cout<<"changed 4th element is "<<a1[3];
    a1[7] = 3223;
    return 0;
}