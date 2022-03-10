#include<iostream>
using namespace std;
class dis 
{
    int feet, inch;
    public:
    dis(int ft=0, int in=0)
    {
        feet = ft;  inch=in;
    }
    void display ()
    {
        cout <<"\n "<<feet <<"\' "<<inch <<"\"";
    }
    dis operator-(dis d2)
    {
        dis temp;
        temp.feet = feet - d2.feet;
        temp.inch = inch - d2.feet;
        if (temp.inch > 12)
        {
            ++temp.feet ;
            temp.inch -= 12;
        }
    }
    dis operator+(dis d2)
    {
        dis temp;
        temp.feet = feet + d2.feet;
        temp.inch = inch + d2.feet;
        if (temp.inch > 12)
        {
            ++temp.feet ;
            temp.inch -= 12;
        }
    }
    int operator>(dis d2)
    {
        if (feet == d2.feet)
            if(inch > d2.inch)
                return 1;
        if (feet > d2.feet)
        {
            return 1;
        }
        else{
           
            return 0;
        }
    }
    int operator<(dis d2)
    {
        if (feet == d2.feet)
            if(inch < d2.inch)
                return 1;
        
        if (feet < d2.feet)
        {
            return 1;
        }
        else{
            
            return 0;
        }
    }
    int operator==(dis d2)
    {
        if(feet == d2.feet)
        {
            if(inch == d2.inch)
                return 1;
        }
        else
            return 0;
            
    }
    
    
};
int main()
{
    dis d1(5, 8), d2(7, 3);
    dis sum = d1 + d2;
    dis diff = d1 - d2;
    if (d1 > d2)
    {
        cout << "\n d1 is greater distance";
    }
    if(d1 < d2)
    {
        cout << "\n d2 is greater distance";
    }
    if(d1 == d2)
    {
        cout << "\n Both d1 and d2 are same";
    }
    sum.display();
    diff.display();

    return 0;
}