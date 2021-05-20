/*

1
1 1
1 2 1
1 3 3 1
1 4 6 4 1

*/
#include <iomanip>
#include <iostream>  
using namespace std;

int main()
{
    int temp = 1, n=7;
    for (int i = 0; i < n; i++)
    {
        cout << "1 ";
        for(int j=2; j<=i; j++)
        {
            cout << i<< " ";
        }
        if (i>0)
        {
            cout<<"1 ";
        }
        cout << endl;
    }
    return 0;
}