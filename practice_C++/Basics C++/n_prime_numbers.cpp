#include <iomanip> // this header file contains functions like setw(), setbase(), setfill(' char '), setprecesion()
#include <iostream>
using namespace std;
int main()
{
    int n, flag = 0;
    cout << " Input value of n : ";
    cin >> n;
    cout << " following are the prime numbers from 0 to " << n << endl;
    for (int i = 2; i <= n; i++)
    {

        for (int j = 2; j <= (i / 2) + 1; j++)
        {
            if (i % j == 0)
            {
                flag = 1;   //flag is 1 if number is composite
                break;
            }
            flag = 0;
        }
        if (flag == 0)  //to print number only if flag is 0
        {
            cout << i << setw(4);
        }
    }
    return 0;
}