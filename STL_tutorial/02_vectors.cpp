#include<bits/stdc++.h>
using namespace std;

int main(int argc, char* args[]){
    vector<int> v;
    vector<int> a(5, 1);
    vector<int> last(a);

    cout<<"print last"<<endl;
    for(int i:last){
        cout<<i<<"  ";
    } cout<<endl;
    cout<<"Capacity ->"<< v.capacity()<<endl;

    v.push_back(1);
    cout<<"Capacity ->"<< v.capacity()<<endl;
    
    v.push_back(2);
    cout<<"Capacity ->"<< v.capacity()<<endl;

    v.push_back(3);
    cout<<"Capacity ->"<< v.capacity()<<endl;

    cout<<"Size -> "<<v.size()<<endl;

    cout<<"Before pop: "<<endl;
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    } cout<<endl;

    v.pop_back();

    cout<<"After pop: "<<endl;
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    } cout<<endl;

    

}