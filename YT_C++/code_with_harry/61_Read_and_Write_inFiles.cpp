#include<iostream>
#include<fstream>

using namespace std;
int main()
{   
    //connecting out file with hout stream
    // ofstream hout("Sample_60b.txt");
    //creating a name string and filling it with the string entered by the user 
    // string name;
    // cout<<"Enter your name: ";
    // cin>>name;
    // writing a string to the file
    // hout<<"My Name is " + name;

    // hout.close();

    ifstream hin("Sample_60b.txt");
    string content;
    // hin>>content;
    getline(hin, content);
    cout<<"The content of this file is: "<<content;
    return 0;
}