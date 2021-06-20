#include <iostream>
using namespace std;
class counter
{
    private:
        int count;
    public:
        counter()
        {
            count=0;
        }
        void operator++()// only for prefix increament operator
        // if used as postfix it will cause error 
        {
            count = count+1;
        }
        int show (){
            return count;
        }
};
int main()
{
    counter c1,c2;
    cout<<"\n initial values of c1 object = "<<c1.show();
    cout<<"\n initial values of c2 object = "<<c2.show();
    ++c1;
    ++c2;
    ++c1;
    // c2++; //this statement is invalid
    cout<<"\n final value of object c1 = " << c1.show();
    cout<<"\n final value of object c2 = " << c2.show();
    return 0;
}