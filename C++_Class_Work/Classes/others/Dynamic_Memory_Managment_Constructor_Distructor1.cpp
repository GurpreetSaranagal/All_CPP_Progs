// This program is about Dynamic memory management inside the class using constructor and distructors
// particularly, in this program only p is allocated the memory dynaimcally and object 'l' is a static object which will stay until the main function is over therefore this program is also not so efficient in terms of memory 
#include<iostream>
using namespace std;
class list
{
    int *p,n;
    public:
    list();
    void inputelement();
    void average();
    ~list();
};
list :: list()
{
    cout <<"\n Enter the value of n: ";
    cin >> n;
    p = new int[n];
}
void list :: inputelement()
{
    cout <<"\n Enter the value of elements: \n";
    for(int i=0; i<n; i++)
    {
        cin >> *(p+i);
    }

}
void list :: average()
{
    int sum = 0;
    float avg;
    for(int i=0; i<n; i++)
    {
        sum += *(p+i);
    }
    avg = (float) sum / n;
    cout <<"The average of " << n << " elements is " << avg << "\n";
}
list :: ~list()
{
    cout <<"\n Distructor invoked \n";
    delete [] p;
}
int main()
{
    list l;
    l.inputelement();
    l.average();

    return 0;
}