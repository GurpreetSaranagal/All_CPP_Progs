// by overloading assignment operator we can perform data type convertion 
// either from primitive to user defined and vice versa ,or from one user defined to another user defined 
// In this program we have overloaded assignment operator to convert primitive data type to user defined data type
// and vice versa
#include<iostream>
using namespace std;
class time {
    int hours, mins, secs;
    public:
        time(){hours = mins = secs = 0;}
        time(int h, int m, int s)
        {
            hours = h;
            mins = m;
            secs = s;
            if(secs > 59)
            {
                mins += secs/60;
                secs -= secs%60;
            }
            if (mins > 59)
            {
                hours += mins/60;
                mins -= mins%60;
            }
        }
        void operator=(int s)// functions to convert basic data type to user defined data type
        {

            secs = s;
            if (secs > 59)
            {
                mins = secs/60;
                secs = secs%60;
            }
            if(mins > 59)
            {
                hours = mins/60;
                mins = mins%60;
            }
        }
        // in order to conveZVZVrt USER DEFINED DATA TYPE to basic we need to overload cast operators
        // SYNTAX for defining TYPECAST OPERATOR OVERLOADING FUNCTION
        // operator typename(){...}
        //this overloaded typecast operator function doesnot have any return type (not even void) because the returntype is the typename to which tho object is being converted. Moreover, it does not take any parameter.
        operator int() 
        {
            int s=0;
            s = (hours * 60 * 60) + (mins * 60) + secs;
            return s;
        }
        void show()
        {
            cout<<hours<<" "<<mins<<" "<<secs;
        }
};

int main()
{
    time t1;
    t1.show();
    cout<<"\n";
    t1 = 3600;
    t1.show();
    int sec = t1;
    cout <<"\ntotal seconds = "<<sec;
    return 0;
}