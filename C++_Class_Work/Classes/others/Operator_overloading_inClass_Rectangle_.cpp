#include<iostream>
using namespace std;
class rectangle
{
    int area, perimeter;
    protected:
    int length, breadth;
    public:
    rectangle(){    length = 0; breadth = 0; area = perimeter = 0; }
    rectangle(int len, int brdth)
    {
        length = len; 
        breadth = brdth;
    }
    void display ();
    int calcarea();
    int calcperimeter();
    rectangle operator-(rectangle r2)
    {
        rectangle temp;
        temp.area= area - r2.area;
        temp.perimeter = perimeter - r2.perimeter;
        return temp;
    }

};

void rectangle :: display()
{
    cout<<"\n Length = " << length << " and Breadth = " << breadth 
        <<"\n Area is = " << area 
        <<"\n Perimeter is = "<< perimeter;
}
int rectangle :: calcarea()
{
    area = length * breadth;
    return area;
}
int rectangle :: calcperimeter()
{
    perimeter = 2*(length + breadth);
    return perimeter;
}

int main()
{
    rectangle r1(20, 10), r2(10, 5);
    int area1 = r1.calcarea(),      area2 = r2.calcarea();
    int peri1 = r1.calcperimeter() ,    peri2 = r2.calcperimeter();
    r1. display();
    cout <<"\n";
    r2.display();
    rectangle ans = r1 - r2;
    cout <<"\n";
    ans.display();
    return 0;
}