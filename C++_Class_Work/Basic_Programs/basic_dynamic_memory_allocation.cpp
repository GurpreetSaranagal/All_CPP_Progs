// 23/4/21
// DYNAIMC MEMORY ALLOCATION
// new -> memory allocation 
// delete -> memory deallocation
/*
#include<iostream>
using namespace std;
int main()
{
    int *p;
    p= new int ; // this statement allocates new memeory to the pointer
    cout << "enter the number "<<endl;
    cin >> *p;
    cout << "value entered is "<<*p;
    delete p; // this statement deallocate already allocated memory 
    return 0;
}
*/
#include<iostream>
using namespace std;
int main()
{
    int *p, i, n, s=0;
    cout<<"Enter the number of elements "<<endl;
    cin >> n;
    p = new int [n]; 
    // this statement allocates continous memory locations = n * sizeof(type) and initiates the pointer by returning address of first memory location allocated 
    // this program is to calculate sum of all the elements of array

    cout << " Enter the elements "<<endl;
    for(i=0; i<n; i++)
        cin >> *(p+i);
    for(i=0; i<n ; i++)
        s=s+*(p+i);
    cout<<" sum is "<<s;
    delete []p;
    return 0;
}