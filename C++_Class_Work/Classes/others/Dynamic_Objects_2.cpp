// This program is appliction of dynamic memory allocation on student class
// In this program *MULTIPLE OBJECTS* are created using *SINGLE POINTER*
#include <iostream>
using namespace std;
class student
{
    int rollNo;
    float marks;
    char name[20];

public:
    void read()
    {
        cout << "\n Input roll no, name, marks: ";
        cin >> rollNo >> name >> marks;
    }
    void show()
    {
        cout << "\n " << name << "'s Roll No is " << rollNo << " and marks obtained is " << marks << "%";
    }
};
int main()
{
    student *ptr;
    int n;
    cout << "Input number of students : ";
    cin >> n;
    ptr = new student[n]; // this statement creates an array of objects and stores the address of first element into ptr
    for (int i = 0; i < n; i++)
        (ptr + i)->read();
    for (int i = 0; i < n; i++)
        (ptr + i)->show();

    delete[] ptr; // this statement deletes whole array of objects
    return 0;
}