#include<iostream>
using namespace std;
class counter
{
    int count;
    public :
    int show ()
    {
        return count;
    }
    counter operator++(int)
    {
        counter temp;
        count += 1;
        temp.count = count ;
        return temp;
    }
};
int main()
{
    counter c1, c2;
    c1++;
    cout << c1.show() << endl;
    // ++c2;    this causes error due to absence of parameter for the functions
    cout << c2.show() << endl;
    return 0;
}