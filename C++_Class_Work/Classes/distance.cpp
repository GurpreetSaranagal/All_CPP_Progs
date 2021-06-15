#include<iostream>
using namespace std;
class distances
{
    int feet;
    float inches;

    public:
    void input ();
    void add (distances, distances);
    void show ();
};

void distances :: input ()
{
    cout <<"Input distance in feet and inches : "<<endl;
    cin >> feet >>inches;
}
void distances :: show()
{
    cout << feet <<"\'  "<<inches<<"\" ";
}
void distances ::add (distances d1, distances d2)
{
    feet = d1.feet + d2.feet;
    inches = d1.inches + d2.inches;
    if (inches >= 12)
    {
        feet = feet + 1;
        inches = inches - 12;
    }
}
int main()
{
    distances d1, d2, d3;
    d1.input();
    d2.input();

    d3.add(d1,d2);
    d3.show();
    
    return 0;
}