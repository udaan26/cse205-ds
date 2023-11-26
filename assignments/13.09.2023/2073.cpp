#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        queue<int> q;
        int count=0;
        for(int i=0; i<tickets.size(); i++){
            q.push(i);
        }
        while(!q.empty()){
            int temp = q.front();
            q.pop();
            if(tickets[temp]>=1){
                tickets[temp]--;
                count++;
            }
            if (temp!=k && tickets[temp]==0){
                continue;
            }
            if(temp==k && tickets[temp]==0){
                break;
            }
            q.push(temp);
        }
        return count;
    }
};