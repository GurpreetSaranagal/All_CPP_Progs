#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    vector<int> increment(vector<int> arr, int N){

        for(int i = N-1; i >= 0; i--)
                {
                    if(arr[i] != 9)
                    {
                        arr[i]++;
                        return arr;
                    }
                    arr[i] = 0;
                }
                if(arr[0] == 0 && arr[N-1] == 0){
                    arr[0] = 1;
                    arr.push_back(0);
                }
                return arr;
    }
};

int main(){
    int t;
    cin >> t;
    while(t--){
        int N;
        char c;
        
        cin >> N;
        vector<int> arr(N);
        for(int i=0; i<N; i++)
            cin >> arr[i];
        
        Solution ob;
        vector<int> res = ob.increment(arr, N);
        for(int i: res){
            cout << i << " ";
        }
        cout<<"\n";
    }
    return 0;
}
