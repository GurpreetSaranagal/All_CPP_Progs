// Program to read a matrix and find the maximum of each row. Also calculate the average of maximum value obtained in each row
// Prog. 11.33

#include<iostream>
using namespace std;
class Matrix
{
    int mat[20] [20], max[20], row, col; 
    float avg;
    public:
    Matrix(int rows, int cols)
    {
        if(rows > 20 || cols > 20 || rows < 1 || cols < 1){
            cout <<"Invalid order";
            exit(1);
        }
        
        row = rows;     col = cols;
        avg = 0;
    }
    void input();
    void average();
    void output();

};
void Matrix :: input()
{
    cout <<"Please input elements of matrix of order " << row <<" x "<< col <<" \n";
    for(int i=0; i<row; ++i)
    {
        for(int j=0; j<col; ++j)
        {
            cout <<i+1 << " x " <<j+1 <<" th element : ";
            cin >>mat[i][j];
        }
    }
}
void Matrix :: average()
{
    for(int i=0; i<row; i++)
    {
        max[i] = mat[i][0];
        for(int j=0; j<col; j++)
        {
            if(mat[i][j] > max[i])
            {
                max[i] = mat[i][j];
            }
        }
    }
    int sumOfMaxItems = 0;
    for(int i=0; i<row; ++i)
    {
        sumOfMaxItems += max[i];
    }
    avg = (float)sumOfMaxItems / row; 
    
}
void Matrix :: output()
{
    cout <<"The " << row << " x " << col <<" matrix is :\n";
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            cout <<mat[i][j] <<"    ";
        }
        cout << "       Max = " << max[i] <<"\n";
    }
    cout <<"And the average of maximum values is " <<avg <<"\n";
}
int main()
{
    int m,n;
    cout <<"Input the order of matrix (m,n) : \n";
    cin >> m >> n;
    Matrix m1(m,n);
    m1.input();
    m1.average();
    m1.output();
    return 0;
}