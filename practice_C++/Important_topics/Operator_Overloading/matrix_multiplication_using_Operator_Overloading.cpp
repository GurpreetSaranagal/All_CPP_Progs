// 7/16/2021 
// this is copy of the same program OOPs > matrix_... because here concept of operator overloading is applied 
#include <iostream>
using namespace std;
class matrix
{
protected:
    int **mat;// this is a ponter to a pointer
    int m, n;

public:
    // constructor to initialize the **mat using new operator
    matrix(int row = 0, int col = 0) : m(row), n(col) //this is initializer list
    {
        mat = new int *[m]; // allocates array of m numbers[elements] of interger pointers
        for (int i = 0; i < m; i++)
        {
            (mat[i]) = new int[n]; // here allocating each pointer with an array of n elements
        }
    }
    void mout();
    void min();
    matrix operator*( matrix); 
    ~matrix (){
        for(int i =0 ; i<m; i++)
        {
            // cout <<"distructor is called for mat[0][0] "<< mat[0][0]<<" for " << i+1 <<" times\n";
            delete [] mat[i];
        }
    }
};
void matrix ::mout()
{
    cout << "The matrix of index " << m << " X " << n << " is :\n";

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << mat[i][j] << "\t";
        }
        cout << "\n\n";
    }
    
}
void matrix ::min()
{
    cout << "Input Matrix of Index: " << m << " X " << n << " -> \n";
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "Index :: " << i+1 << " X " << j+1 << " \t\t";
            cin >> mat[i][j];
        }
    }
}

matrix matrix ::operator*( matrix mat2)
{
    if (n != mat2.m)
    {
        cout << "This multiplication is not possible: ";
        exit(1);
    }
    int sum;
    matrix res(m, mat2.n);          //n-1
    // general formula is res[i][j] =   E[ first[i][k] * second[k][j] ]                  ;E => summision
                                    //k=0
//                      res [i][j] = A[i][k] * b[k][j] + ...
    for (int i = 0; i < res.m; i++)
    {
        for (int j = 0; j < res.n; j++)
        {
            sum = 0;
            for (int k = 0; k < n; k++)
            {
                sum += mat[i][k] * mat2.mat[k][j];
            }
            res.mat[i][j] = sum;
        }
    }
    // cout << "Calculated Product of the matrices :: \n";
    return res;
}
int main()
{
    matrix m1(2,3),m2(3,2);
    m1.min();
    m2.min();
    
    m1.mout();
    m2.mout();

    matrix res = m1 * m2;

    res.mout();
    return 0;
}





//  aur yeh hai mentos zindagi