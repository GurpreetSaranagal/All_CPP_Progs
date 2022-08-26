#include <iostream>
using namespace std;
int main()
{
    int num, z, rev = 0, rem;
    cout << "Enter a number :";
    cin >> num;
    z = num;
    while (num > 0)
    {
        rem = num % 10;
        num = num / 10;
        rev = (rev * 10) + rem;
    }
    if (rev == z)
        cout << "Given number is Palindrome";
    else
        cout << "Given number is NOT a Palindrom";

    return 0;
}