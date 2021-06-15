// program to demonstrate the use of 2 dimensional arrays in classes
#include <iostream>
using namespace std;
class matrix
{
    int a[10][10], m, n;

public:
    void input();
    void sum_of_elements();
    void sum_rows();
    void sum_cols();
    void show();
};

void matrix ::input()
{
    cout << " Input the number of rows and columns ";
    cin >> m >> n;
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
        {
            cout << " a[" << i << "] [" << j << "] = ";
            cin >> a[i][j];
        }
}
void matrix ::show()
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << a[i][j] << "    ";
        }
        cout << endl;
    }
}
void matrix ::sum_of_elements()
{
    int sum = 0;
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
        {
            sum = sum + a[i][j];
        }

    cout << " sum of all elements of matrix is = " << sum << endl;
}
void matrix ::sum_rows()
{
    int s;
    for (int i = 0; i < m; i++)
    {
        s = 0;
        for (int j = 0; j < n; j++)
        {
            s = s + a[i][j];
        }
        cout << "sum of row no " << i + 1 << " is = " << s << endl;
    }
}
void matrix ::sum_cols()
{
    int s;
    for (int i = 0; i < n; i++)
    {
        s = 0;
        for (int j = 0; j < m; j++)
        {
            s = s + a[j][i];
        }
        cout << "sum of column no " << i + 1 << " is = " << s << endl;
    }
}

int main()
{
    matrix m1;
    m1.input();
    m1.show();
    m1.sum_of_elements();
    m1.sum_rows();
    m1.sum_cols();
    return 0;
}