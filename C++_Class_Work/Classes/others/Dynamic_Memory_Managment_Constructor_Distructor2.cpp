// This program is about Dynamic memory management inside the class using constructor and distructors
// particularly, this program is about dynamically allocation an object so that memory can be freed any time in the run time 
// And if memory once allocated is not deallocated by the programmer it will remain allocated and will never deallocate 
// So it is mandatory to deallocate memory. It's a good practice.

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
    list *ptr;
    ptr = new list;
    ptr-> inputelement();
    ptr-> average();
    delete ptr;
    cout <<"\n End of main : ";
    return 0;
}