// Program to calculate the minimum of two and this numbers of any data type.
#include<bits/stdc++.h>
using namespace std;
template<class T>
T _min (T a, T b ){
    return (a<b? a : b);
}
template<class T>
T _min (T a, T b, T c){
    return (a<b? (a<b? a : c) : (b<c? b:c));
}

int main()
{
    cout<<"_min of two int values: "<<_min(10, 20)<<endl;
    cout<<"_min of two float values: "<<_min(10.43, 20.57)<<endl;

    cout<<"_min of three int values: "<<_min(10, 20, 70)<<endl;
    cout<<"_min of three float values: "<<_min(10.43, 20.57,78.54)<<endl;
    cout<<"_min of three char values: "<<_min('d', 'e','A')<<endl;

    return 0;
}