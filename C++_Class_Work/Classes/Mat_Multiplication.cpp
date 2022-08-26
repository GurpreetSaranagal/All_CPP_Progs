// yeh hai aam zindagi 
#include <conio.h>
#include <iostream>
#include <process.h>
using namespace std;
class matrix
{
private:
    int a[10][10], m, n;

public:
    void input();
    matrix multiply(matrix);
    void show();
};
void matrix::input()
{
    cout << "\n enter the values of m and n";
    cin >> m >> n;
    if (m > 10 || n > 10)
    {
        cout << "\n m and n should not be more than 10";
        exit(0);
    }
    cout << "\n enter the elements";
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            cin >> a[i][j];
}
matrix matrix::multiply(matrix mm2)
{
    matrix temp;
    if (n != mm2.m)
    {
        cout << "\n matrix multiplication not possible";
        exit(0);
    }
    temp.m = m;
    temp.n = mm2.n;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < mm2.n; j++)
        {
            temp.a[i][j] = 0;
            for (int k = 0; k < n; k++)
            {
                temp.a[i][j] += a[i][k] * mm2.a[k][j];
            }
        }
    }
    return temp;
}
void matrix::show()
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
            cout << a[i][j] << " ";
        cout << "\n";
    }
}
void main()
{
    matrix m1, m2, m3;
    cout << "\n enter m1";
    m1.input();
    cout << "\n enter m2";
    m2.input();
    m3 = m1.multiply(m2);
    m3.show();
    getch();
}