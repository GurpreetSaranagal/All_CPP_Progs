#include <iostream>
using namespace std;
class time
{
    int hrs, mins;

public:
    void input();
    void add(time, time);
    time add(time);
    void show();
};

void time ::input()
{
    cout << " Input time in hours and minutes " << endl;
    cin >> hrs >> mins;
}

void time ::add(time tt1, time tt2)
{
    hrs = tt1.hrs + tt2.hrs;
    mins = tt1.mins + tt2.mins;
    if (mins >= 60)
    {
        hrs = hrs + 1;
        mins = mins - 60;
    }
}

void time ::show()
{
    cout << "Time : " << endl
         << hrs << " hr : " << mins << " min" << endl;
}

time time ::add(time t2) // demonstration of function returning an object of a class
{                        // this concept is being used in operator overloading
    time temp;
    temp.hrs = hrs + t2.hrs;
    temp.mins = mins + t2.mins;
    if (temp.mins >= 60)
    {
        temp.hrs++;
        temp.mins -= 60;
    }
    return temp;
}
int main()
{
    time t1, t2, t3;
    t1.input();
    t2.input();

    t3.add(t1, t2);
    t3.show();
    cout << endl;
    t3 = t1.add(t2); // this statement will be modified as t3 = t1 + t2 ; which is not possible now
    t3.show();
    return 0;
}