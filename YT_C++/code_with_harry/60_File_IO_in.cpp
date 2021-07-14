 #include<iostream>
 #include<fstream>
 /* 
 The useful classes for working with files in C++ are:
 1. fstreambase
 2. ifstream --> derived from fstreambase
 3. ofstream --> derived from fstreambase
 */
 
//  In order to work with files in C++, you will have to open it. There are two ways to open a file:
//  1. using the constructor
//  2. using the member function open() of the class

 using namespace std;

 int main()
 {
     string st = "Harry Bhai";
     string st2;
     // opening files using construction and writing to it
     ofstream out("Sample_60.txt"); // Write opertions
     out<<st;//prints the strings IN THE FILE
     cout<<st<<endl;
     // opening files using construction and reading it
     ifstream in("Sample_60b.txt"); // Write opertions
    //  in >> st2; This inputs all characters until a space character [or newline, or tab]
     getline(in, st2);// This reads all character until a new line character is incountered
     
     cout<<st2;

     return 0;
 }