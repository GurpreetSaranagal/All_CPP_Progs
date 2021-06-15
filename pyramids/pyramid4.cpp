/*
      1
    2 3 2
  3 4 5 4 3 
4 5 6 7 6 5 4

*/
#include <iomanip>
#include <iostream>
using namespace std;

int main()
{
    int temp, n = 4;
    for (int i = 1; i <= n; i++)
    {
        temp = i;
        for (int s = 1; s <= n - i; s++)
        {
            cout << "  ";
        }
        for (int m = 1; m <= i; m++)
        {

            cout << temp++ << " ";
        }
        temp--;
        for (int l = 1; l <= i - 1; l++)
        {

            cout << --temp << " ";
        }
        cout << endl;
    }
    return 0;
}