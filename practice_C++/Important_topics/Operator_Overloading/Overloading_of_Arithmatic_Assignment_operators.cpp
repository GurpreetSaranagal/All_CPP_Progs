#include<iostream>

using namespace std;
class clocks
{
    int hours, mins, secs;
    public:
        clocks(int hh, int mm, int ss)
        {
            hours = hh; 
            mins = mm;
            secs = ss;
        }
        void show()
        {
            cout<<hours<<" "<<mins<<" "<<secs<<"\n";
        }
        void operator+=(clocks tt)
        {
            hours += tt.hours;
            mins += tt.mins;
            secs += tt.secs;
            if(secs > 59)
            {
                mins++;
                secs -= 59;
            }
            if(mins > 59)
            {
                hours ++;
                mins -= 59;
            }

        }
        void operator-=(clocks tt)
        {
            hours -= tt.hours;
            mins -= tt.mins;
            secs -= tt.secs;
            if(secs > 59)
            {
                mins++;
                secs  -= 59;
            }
            if(mins > 59)
            {
                hours ++;
                mins -= 59;
            }
        }
};

int main()
{
    clocks t1(2, 15, 10);
    clocks t2(1, 45, 50);
    t1 += t2;
    t1.show();
    
    t1 -= t2;
    t2.show();
    
    return 0;
}