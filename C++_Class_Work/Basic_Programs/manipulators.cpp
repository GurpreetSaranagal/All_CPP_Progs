// date 16/04/2021
// MANIPULATORS IN C++
#include <iomanip> // i/o manipulators
#include <iostream >
using namespace std;
int main()
{
    // int i, j;
    // // endl , dec,oct,hex are manipulators in iostream.h
    // cout << " Input a decimal number : " << endl;
    // cin >> i;
    // cout << " Input a hexadecimal number : ";
    // cin >> hex >> j;
    // cout << endl
    //      << i << endl
    //      << hex << j;
    // cout << endl
    //      << dec << j;
    // cout << endl
    //      << oct << i;
    // // following output manipultors are included in iomanip
    // // setbase(10) == dec ;
    // // setbase(8) == oct;
    // // setbase(16) == hex;

    // cout << " setbase(10) : " << setbase(10) << i << endl
    //      << " setbase(8) : " << setbase(8) << i << endl
    //      << " setbase(16) : " << setbase(16) << j << dec << endl;
    int a = 10;
    // setw(10) == %10d
    cout << dec << a << setw(10) << oct <<  a << setw(10) << hex << a << endl<< setfill('<')
         << setbase(10) << a << setw(10) << setbase(8) << a << setw(10) << setbase(16) << a << endl;

    // setfill ('character') == fills the empty spaces with character specified
//     cout << setfill('<')
//          << setw(10) << a << setw(10) << b << endl
//          << setw(10) << c << setw(10) << d << endl;

    float f = 53.68332;
    cout << " demonstration of setprecision" << endl
            << setprecision(3) << f << endl
            << setprecision(5) << f << endl
            << setprecision(6) << f << endl;
    return 0;
}