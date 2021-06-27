#include <iostream>
using namespace std;
// multilevel inheritence

class student
{
protected:
    int roll_number;

public:
    void set_roll_number(int);
    void get_roll_number(void);
};
void student ::set_roll_number(int r)
{
    roll_number = r;
}
void student ::get_roll_number()
{
    cout << "The roll number is " << roll_number << endl;
}
// exam is inherited from student class
class Exam : public student
{
protected:
    float maths;
    float physics;

public:
    void set_marks(float, float);
    void get_marks();
};
void Exam::set_marks(float m, float p)
{
    maths = m;
    physics = p;
}
void Exam::get_marks()
{
    cout << "The marks obtained in maths are " << maths << endl;
    cout << "The marks obtained in physics are " << physics << endl;
}

// result is inhereted from Exam
class result : public Exam
{
    float percentage;

public:
    void display_res()
    {
        get_roll_number();
        get_marks();
        cout << "Your percentage is " << (maths + physics) / 2 << "%" << endl;
    }
};
int main()
{
    result harry;
    harry.set_roll_number(420);
    harry.set_marks(88.34, 77.32);
    harry.display_res();
    return 0;
}
/*
    NOTES:      
        if we are inheriting B from A and C from B:[A-->B-->C]    
        1. A is the base class for B and B is the base class for C.
        2. A-->B-->C is called inheritence path.
*/