#include <iomanip>
#include <iostream>

using namespace std;
int main()
{
    int l, u, flag = 0;
    cout << " Input values of lower and upper limits: "<< endl;
    cin >> l >> u;
    for (int i = l; i <= u; i++)// only this part is different from other program here i starts from lower limit and ends at upper limit
    {
        for (int j = 2; j <= (i / 2) + 1; j++)
        {
            if (i % j == 0)
            {
                flag = 1;
                break;
            }
            flag = 0;
        }
        if (flag == 0)
        {
            cout << i << setw(4);
        }
    }
}