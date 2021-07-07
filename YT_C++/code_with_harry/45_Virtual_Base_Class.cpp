#include<iostream>
using namespace std;

/*
Inheretence:
student [virtual]--> test
student [virtual]--> sports
test , sports --> result
*/
class Student{
    protected:
        int roll_no;
    public:
        void set_number(int a){
            roll_no = a;
        }
        void print_number(){
            cout <<"Your roll number is: "<<roll_no<<"\n";
        }
};
class Test : virtual public Student{// It can be written as public virtual Student
    protected:
        float maths, physics;
    public:
        void set_marks(float m1, float m2){
            maths = m1;
            physics = m2;
        }
        void print_marks(void){
            cout <<"you result is here: \n"
                << "Maths: "<<maths <<"\n"
                << "Physics: "<<physics<<"\n";
        }
};
class Sports:virtual public Student{
    protected:
        float score;
    public:
        void set_score(float s){
            score = s;
        }
        void print_score(void){
            cout << "Your PT score is: "<< score <<"\n";
        }
};
class Result: public Test, public Sports{
    private:
    float total;
    public:
    void display(void){
        total = maths + physics + score;
        print_number();
        print_marks();
        print_score();
        cout <<"your total score is: "<<total<<"\n";
    }
};
int main()
{
    Result res;
    res.set_number(4313);
    res.set_marks(78.32, 77.8);
    res.set_score(9);
    res.display();
    return 0;
}