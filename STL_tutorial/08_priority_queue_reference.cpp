#include<iostream>
#include<queue>
#include<vector>
#include<functional>
using namespace std;

int main(int argc, char* args[]){
    int myints[] = {10, 20, 60, 50};
    
    // priority_queue<int> second(myints, myints+4);
    priority_queue<int, vector<int>, less<int>> second(myints, myints+4);
    priority_queue<int, vector<int> , greater<int> > third(myints, myints+4);

    int n=second.size();

    for(int i=0; i<n; i++){
        cout<<second.top()<<"  ";
        second.pop();
    } cout<<endl;

    for(int i=0; i<n; i++){
        cout<<third.top()<<"  ";
        third.pop();
    } cout<<endl;


}