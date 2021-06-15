// 19 /04 /21

#include <iostream>
using namespace std;
float SI(float p, float r = 5.5, float t = 1.0); // here default values of arguments are defined that if not given would be taken

int main()
{
    float k;
    k = SI(10000); // here r= 5.5 and t=1.0 as they are not given in calling statement
    cout << " simple interest of 10000 is : " << k << endl;
    k = SI(12000, 6.0); // here only t is taken as default argument
    cout << " simple interest of 12000 , 6.0 is : " << k << endl;
    k = SI(12000, 6.0, 5); // here no argument is taken as default as all arguments are provided in calling statement
    cout << "simple interest of 12000, 6.0, 5 is : " << k << endl;
    return 0;
}
float SI(float p, float r, float t)
{
    return p * r * t;
}