#include<bits/stdc++.h>
using namespace std;

int main(int argc, char* args[]){
    priority_queue<int> pq;
    int in = 0;
    while( cin>>in && in!=-1){
        pq.push(in);
    }

    int n = pq.size();
    for(int i=0; i<n; i++){
        cout<<pq.top()<<"  ";
        pq.pop();
    } cout<<endl;

}