#include<bits/stdc++.h>
using namespace std;

int main(int argc, char* args[]){
    deque<int> d;

    d.push_back(1);
    d.push_back(2);
    d.push_back(3);

    cout<<endl;
    cout<<"Print first Index Element -> "<<d.at(1)<<endl;

    cout<<"Front "<<d.front()<<endl;
    cout<<"Back "<<d.back()<<endl;

    cout<<"Empty or not : "<<d.empty()<<endl;

    cout<<"Before erase size-> "<< d.size()<<endl;
    for(auto i:d){
        cout<<i<<" ";
    } cout<<endl;

    d.erase(d.begin(), d.begin()+1);

    cout<<"After erase size-> "<< d.size()<<endl;
    for(auto i:d){
        cout<<i<<" ";
    } cout<<endl;
    
}