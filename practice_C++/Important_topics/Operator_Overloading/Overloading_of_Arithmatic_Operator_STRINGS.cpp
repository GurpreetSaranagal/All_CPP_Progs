// In this program operator + is overloaded to peform concatinate function and then return that concatinated string to store it in third object
//other binary operators can also be overloaded these opearators includes 
// +, -, <, >, +=, !=, *, /, %, 
#include<iostream>
#include<string.h>
#define size 40
using namespace std;
class strs 
{
    char str[size];
    public:
    strs()// a default constructor that sets str to null
    {
        strcpy(str,"");
    }
    strs(char *s)// Parameterized constructor that accepts character array and stores it in the member function str of size 40
    {
        strcpy(str, s);
    }
    void show()
    {
        cout<< str;
    }
    strs operator+(strs);// This Function performs Concatination
};
strs strs:: operator+(strs ss2)
{
    strs temp;// first a temporary object is declared 
    strcpy(temp.str, str);// now temp's str is initialized with calling object's str
    // strcat(temp.str," ");// Just to add a space between concatinated strings(or charater arrays)
    strcat(temp.str,ss2.str);// and then, temp's str is concatinated with str of passed object ss2 which is accessed as ss2.str
    return temp;// and then temp is returned 
}

int main()
{
    char a[]="Happy";
    char b[]="Diwali";
    strs s1 = a;// strs s1 = "Happy"; causes a warning and idk why
    strs s2 = b;
    strs s3;
    cout<<"\n before concatination" ;
    cout<<"\n s1 = ";
    s1.show();
    
    cout<<"\n s2 = ";
    s2.show();

    cout<<"\n s3 = ";
    s3.show();

    s3 = s1 + s2;

    cout<<"\n after concatenation";
    cout<<"\n s3 = ";
    s3.show();
    return 0;
}