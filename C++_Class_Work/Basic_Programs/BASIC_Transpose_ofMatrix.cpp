#include<iostream>
using namespace std;
int main()
{
    int a[10][10] , b[10][10], m,n,i,j;
    cout <<"\n Enter the value of m and n";
    cin >> m >> n;
    if (m >10 || n > 10)
    {
        cout <<"Indexes are out of range";
        exit(1);
    }
    cout <<"Input elements of matrix"<<endl;

    for (i=0; i<m; i++)
        for(j=0; j<n; j++)
        {
            cin >> a[i][j];
        }
    cout <<"The Original Matrix is" << endl;

    for (i=0; i<m; i++) {
        for(j=0; j<n; j++)
        {
            cout << a[i][j] <<"  ";
        }
        cout << endl;
    }

    for (i=0; i<m; i++)
        for(j=0; j<n; j++)
        {
            b[j][i] = a[i][j];
        }

    cout <<"The transpose of matrix is :"<<endl;

    for (i=0; i<n; i++){
        for(j=0; j<m; j++)
        {
            cout << b[i][j] << "  ";
        }
        cout << endl;
    }
    return 0;
}