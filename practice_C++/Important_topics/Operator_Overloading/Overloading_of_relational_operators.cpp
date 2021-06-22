// In this program comparision operators are overloaded for stirngs 
// Other relational operators can also be overloaded these includes 
// >, <, ==, >=, <=, !=  
// these operators can also be overloaded in the similar way as the > operator

#include<iostream>
#include<string.h>
using namespace std;
class strs 
{
    char str[30];
    public:
    strs(char s[] = '\0')
    {
        strcpy(str,s);
    }
    int operator>(strs);
    int operator<(strs);
    void input();
};
int strs:: operator>(strs ss2)
{
                                // strcmp() returns 1 if str's firstnmatched character's ascii value is smaller than ss2.str's corresponding character
                                // and returns 0 when both strings are same 
                                // and returns -1 if str's first unmatched character's ascii value is greater than ss2.str's corresponding character
    if (strcmp(str, ss2.str) > 0)
        return 1;
                                // this functions returns 1 only if str's first unmatched character's ascii value is smaller than ss2.str's corresponding character
    else
        return 0;
}

int strs :: operator<(strs ss2)
{
    if(strcmp(str, ss2.str) < 0) 
        return 1;
    else
        return 0;
}

void strs:: input()
{
    cin >> str;
}

int main()
{
    string s1 = "abc",s2 = "abc";
    if(s1>s2)
        cout<<"\nalphabetically s1 comes after s2";
    else if(s1<s2)
        cout<<"\nalphabetically s1 comes before s2";
    else
        cout<<"\nboth s1 and s2 are same";
    return 0;
}