#include<bits/stdc++.h>
using namespace std;

vector<int> climbingLeaderboard(vector<int> ranked, vector<int> player) {
    vector<int> ranks, ans;
    int prev = ranked[0] + 1;
    int rank = 0;
    for(int i: ranked){
        if(i < prev){
            ranks.push_back(++rank);
        }
        if(i == prev){
            ranks.push_back(rank);
        }
        prev = i;
    }

    for(int i=0; i<player.size(); i++){
        int score = player[i];
        int st = 0, end = ranked.size()-1;
        
        while(st<=end){
            int mid = (st + end) / 2;
            if(ranked[mid] == score){
                ans.push_back(ranks[mid]); break;
            }
            else if(ranked[mid] > score){
                if(mid == end){
                    ans.push_back(ranks[mid] + 1);
                    break;
                }else {
                    st = mid+1;
                }
            }
            else if(ranked[mid] < score){
                if(mid == 0){
                    ans.push_back(1); break;
                } 
                else if (mid == st){
                    ans.push_back(ranks[mid] ); break;
                }
                else {
                    end = mid - 1;
                }
            }
        }
    }
    
    return ans;
}
int main()
{
    vector<int> ranked = {100, 90, 90, 80, 75, 60};
    vector<int> player = {50, 65, 77, 90, 102};
    vector<int> result = climbingLeaderboard(ranked, player);
    for(int i: result){
        cout<<i<<" ";
    }cout<<endl;
    return 0;
}