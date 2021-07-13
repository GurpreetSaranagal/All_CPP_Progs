#include<iostream>
#include<string.h>
using namespace std;
class strings
{
    char str[25];
    public:
    void setstr(char *str2){
        strcpy(str, str2);
    }
    int operator>(strings str2){
        if(strcmp(str, str2.str) > 0)
            return 1;
        else 
            return 0;
        
    }
    int operator<(strings str2){
        if(strcmp(str, str2.str) < 0)
            return 1;
        else 
        return 0;
    }
    
    void show(){
        cout<< str;
    }
};
int main()
{
    strings s1, s2;
    char str1[25] = "gurpreet";
    char str2[25] = "Gurpreet";
    s1.setstr(str1);
    s2.setstr(str2);
    if(s1 > s2)
    {
        cout<<"This is true:";
    }
    else
    {
        cout<<"this is false:";
    }
}