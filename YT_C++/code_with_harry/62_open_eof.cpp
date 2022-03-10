// open() is a member funtion used to open folders 
// syntax:: ofstream var_name;
//          var_name.open("file_name.txt");
//          var_name<<"This is sample text::: ";
#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
    // ofstream out;
    // out.open("Sample_60.txt");
    // // out<<"This is me\n";
    // // out<<"This is me also";
    // out.close();
    ifstream in;
    string st, st2;
    in.open("Sample_60.txt");
    // in>>st>>st2;
    // cout<<st<<" "<<st2;
    while(in.eof() == 0){
        getline(in, st);
        cout<<st<<endl;
    }

    
    in.close();
    return 0;
}