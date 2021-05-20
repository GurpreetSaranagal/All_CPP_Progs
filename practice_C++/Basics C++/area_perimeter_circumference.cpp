#include <iostream>
using namespace std;

void area(double, double, double &);
void area(double, double &);
void perimeter(double, double, double &);
void circumference(double, double &);
int main()
{
    double *l, *b, *r, ans;
    int choice;
    l = new double;
    b = new double;
    r = new double;
start:
    cout << "what you want to caluculate" << endl
         << " 1. Area of Rectangle " << endl
         << " 2. Area of Circle " << endl
         << " 3. Perimeter of Rectangle " << endl
         << " 4. Circumference of Circle " << endl;
    cin >> choice;
    switch (choice)
    {
    case 1:
        cout << "you have chosen to calculate Area of Rectangle" << endl
             << "Now input length and breadth " << endl;
        cin >> *l >> *b;
        area(*l, *b, ans);
        cout << " Area of rectangle is " << ans << endl
             << "Do you want to exit(0) or continue(1)  ";
        cin >> choice;
        if (choice == 0)
        {
            break;
        }
        else if (choice == 1)
        {
            goto start;
        }
        else
        {
            cout << " wrong Input ";
            break;
        }

    case 2:

        cout << "you have chosen to calculate Area of Circle" << endl
             << "Now input radius " << endl;
        cin >> *r;
        area(*r, ans);
        cout << " Area of Circle is " << ans << endl
             << "Do you want to exit(0) or continue(1)  ";
        cin >> choice;
        if (choice == 0)
        {
            break;
        }
        else if (choice == 1)
        {
            goto start;
        }
        else
        {
            cout << " wrong Input ";
            break;
        }

    case 3:

        cout << "you have chosen to calculate Perimeter of Rectangle" << endl
             << "Now input length and breadth " << endl;
        cin >> *l >> *b;
        perimeter(*l, *b, ans);
        cout << " Perimeter of rectangle is " << ans << endl
             << "Do you want to exit(0) or continue(1)  ";
        cin >> choice;
        if (choice == 0)
        {
            break;
        }
        else if (choice == 1)
        {
            goto start;
        }
        else
        {
            cout << " wrong Input ";
            break;
        }

    case 4:

        cout << "you have chosen to calculate Circumference of Cricle" << endl
             << "Now input radius " << endl;
        cin >> *r;
        circumference(*r, ans);
        cout << " Circumference of Circle is " << ans << endl
             << "Do you want to exit(0) or continue(1)  ";
        cin >> choice;
        if (choice == 0)
        {
            break;
        }
        else if (choice == 1)
        {
            goto start;
        }
        else
        {
            cout << " wrong Input ";
            break;
        }
    
    default : cout << " choose from the options ";
    
    }

    return 0;
}
void area(double l, double b, double &ans)
{
    ans = l * b;
}

void perimeter(double l, double b, double &ans)
{
    ans = 2 * (l + b);
}

void area(double r, double &ans)
{
    ans = 3.142 * r * r;
}

void circumference(double r, double &ans)
{
    ans = 2 * 3.142 * r;
}