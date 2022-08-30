#include<bits/stdc++.h>
using namespace std;

int main(int argc, char* args[]){
    list<int> l;
    list<int> l2(l);
    list<int> l3(5, 100);
    
    for(auto i:l3){
        cout<<i<<" ";
    } cout<<endl;

    l.push_back(1);
    l.push_back(2);
    l.push_back(3);

    // std::list<int>::iterator    
    for(list<int>::iterator it = l.begin(); it != l.end(); it++){
        cout<<*it<<" ";
    }

      
    for(auto it = l.begin(); it != l.end(); it++){
        cout<<*it<<" ";
    }
    for(auto it : l){
        cout<<it<<" ";
    }
}