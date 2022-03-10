#include <iostream>
using namespace std;
class matrix
{
    int a[10][10], m, n;

public:
    void input();
    void show();
    void transpose(matrix);
};
void matrix ::input()
{
    cout << "Input values of rows and columns :" << endl;
    cin >> m >> n;
    if (m > 10 || n > 10)
    {
        cout << "Matrix order out of range ";
        exit(1);
    }
    cout <<"Input elements of matrix :" << endl;
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            cin >> a[i][j];
}
void matrix ::show()
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
            cout << a[i][j] << "   ";
        cout << endl;
    }
}
void matrix ::transpose(matrix m1)
{
    for (int i = 0; i < m1.m; i++)
        for (int j = 0; j < m1.n; j++)
            a[j][i] = m1.a[i][j];

    m = m1.n;
    n = m1.m;
}
int main()
{
    matrix m1,m2;
    m1.input();
    cout <<"The Original matrix is :"<<endl;
    m1.show();
    cout << "Now calculating transpose "<<endl;
    m2.transpose(m1);
    cout << "Transpose is :"<<endl;
    m2.show();
    return 0;
}