// 32/4/21
// pointers can be used access elements of an array as follows
        // int a[]={10, 20, 30, 40, 50};
        // int *p=&a[0]; OR =a;
        // for (int i=0; i<5 ; i++)
        //      cout << *(p+i)<<" ";
// different operations can also be applied on pointers like adding or subtracting a number , subtracting a pointer from another, logical and comparsion operators, but a pointer CAN NOT be added to other pointer.
    // p=&a[0];
    // p=p+2;
    // p=p-1;

    // int a[]={10, 20, 30, 40, 50};
    // int *p, *q;
    // p= &a[1];
    // q= &a[3];
    // cout << (p - q) << endl; VALID 
    //      this statement returns how many elements the pointers are far from each other 
    // cout << (p + q) << endl; NOT VALID

    // p=&a[0];
    // q= a;
    // if (p == q) COMPARISION OPERATOR
    //      cout << "both the pointers points to same location "<<endl;
    // else
    //      cout << "both the pointers points to different locations "<<endl;

// how to access two dimensional array using pointers

#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int row= 2,col=3;
    int a[row][col]={ {10,20,30},
                      {40,50,60} };
    int *p,i,j;
    p=&a[0][0];
    for (i=0; i<row ; i++)
    {
        for (j=0; j<col ; j++)
        {
            cout << *(p+(i*col)+j)<< "   ";// | --> very important formula to access two dimenstional array 
            //________________________________|
        }
        cout<<endl;
    }
    return 0;
}