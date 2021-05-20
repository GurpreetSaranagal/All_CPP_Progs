// IMPORTANT  PROGRAM  FOR  EXAMS
//  contains almost every topic of classes

#include <iostream>
using namespace std;
class matrix
{
    int a[10][10], m, n;

public:
    void input();
    void show();
    void add(matrix, matrix);
    matrix add(matrix);
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
    cout << "Input elements of matrix :" << endl;
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
void matrix ::add(matrix m1, matrix m2)
{
    if (m1.m != m2.m || m1.n != m2.n)
    {
        cout << "Addition of matrix is not possible";
        exit(1);
    }
    for (int i = 0; i < m1.m; i++)
        for (int j = 0; j < m1.n; j++)
            a[i][j] = m1.a[i][j] + m2.a[i][j];

    m = m1.m;
    n = m1.n;
}
matrix matrix ::add(matrix m2)
{
    matrix temp;
    if (m != m2.m || n != m2.n)
    {
        cout << "Addition of matirix is not possible";
        exit(1);
    }
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            temp.a[i][j] = a[i][j] + m2.a[i][j];

    temp.m = m;
    temp.n = n;
    return temp;
}
int main()
{
    matrix m1, m2, m3;
    cout << "Input m1 " << endl;
    m1.input();
    cout << "Input m2 " << endl;
    m2.input();
    cout << "Both Matrices are " << endl
         << "M1: " << endl;
    m1.show();
    cout << "M2: " << endl;
    m2.show();
    cout << "Sum of two matrices is :" << endl;
    m3.add(m1, m2);
    m3.show();
    cout << "Again calculating SUM using function returing object" << endl;
    m3 = m1.add(m2);
    m3.show();
    return 0;
}