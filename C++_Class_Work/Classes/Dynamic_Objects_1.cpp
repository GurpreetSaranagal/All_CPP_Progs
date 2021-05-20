// This program is application of dynamic objects on class rectangle
// In this program *single object* is created using *one pointer* 

#include <iostream>
using namespace std;
class rectangle
{
    float l, b;

public:
    rectangle()
    {
        cout << "\n constructor was invoked ";
    }
    void read()
    {
        cout << "\n Input length and Breadth";
        cin >> l >> b;
    }
    void area()
    {
        cout << "\n the area is " << l * b;
    }
    ~rectangle()
    {
        cout << "\n distructor invoked";
    }
};
int main()
{
    rectangle *ptr;
    ptr = new rectangle;
    ptr -> read();
    ( *ptr ).area();
    delete ptr;
    return 0;
}