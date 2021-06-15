// 22/4/21
// function can return only one value using return statement in c++
// but pointers or reference variables can be used to return multiple value from a function
#include<iostream>
using namespace std;
void rect(int ,int ,int *,int *);
void rect(int , int , int &, int &);
int main()
{
    int a,b,area, peri;
    cout<< "Input values of length and breadth"<<endl;
    cin>>a>>b; 
    rect(a,b,&area,&peri);
    cout<<" area of rect = "<<area<<endl;
    cout<<" perimeter of rect = "<<peri<<endl;
    cout<<"***********************************"<<endl;
    rect(a,b,area, peri);
    cout<<" area of same rect = "<<area<<endl;
    cout<<" perimeter of same rect = "<<peri<<endl;
    return 0;
}
void rect(int l ,int b , int *ar, int *pr)
{
    *ar=l*b;
    *pr=2*(l+b);

}
void rect(int l, int b, int &ar, int &pr)
{
    ar=l*b;
    pr=2*(l+b);
}