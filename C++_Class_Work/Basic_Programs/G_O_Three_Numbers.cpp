#include<iostream>
using namespace std;

int main()
{
    int a,b,c;
    cout<< " Enter three numbers :" <<endl;
    cin>> a>> b>> c;
    cout << endl;
    if (a > b && a > c)
    {
        cout << a << " is the greatest";
    }
            else if ( b > a && b > c)
        {
            cout << b << " is the greatest";
        }
            else if ( c > a && c > b)
            {
                cout << c << " is the greatest";
            }
                else if ( a==b && a==c && b==c)
                {
                    cout << " All are equal ";
                }
                    else
                    {
                        cout << " Wrong input";
                    }

    return 0;

}