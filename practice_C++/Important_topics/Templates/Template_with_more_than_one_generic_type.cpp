#include<bits/stdc++.h>
using namespace std;

template<class T1, class T2 >
void display(T1 a, T2 b ){
    cout<<"First variable is: "<<a<<"\n"
        <<"Second variable is: "<<b<<"\n";
}
int main()
{
    int i1 =183;
    float f1 = 321.432;
    char c1 = 'G';
    display(i1,f1);
    display(f1,f1);
    display(i1,c1);
    display(c1,f1);

    return 0;
}