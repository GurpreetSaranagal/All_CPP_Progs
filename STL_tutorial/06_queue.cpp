#include<bits/stdc++.h>
using namespace std;

int main(){
    queue<string> q;

    q.push("Gurpreet");
    q.push("Sarangal");
    q.push("bca");

    cout<< "Size before pop: "<<q.size()<<endl;
    cout<< "First Element: "<<q.front()<<endl;
    q.pop();
    cout<< "First Element: "<<q.front()<<endl;
    cout<< "last Element: "<<q.back()<<endl;
    cout<< "Size after pop: "<<q.size()<<endl;

    q.push("new element");

    cout<< "Last Element: " <<q.back()<<endl;
    

}