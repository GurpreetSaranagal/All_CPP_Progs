#include<iostream>
using namespace std;
class xyz
{
    public:
    int operator()(int num)
    {
        int ch = num* num* num;
        return ch;
    }
};
int main()
{
    xyz cube;
    int a = 5, res;
    res = cube(a);
    cout<<res;
    return 0;
}