# include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        map<int,int> m;
        for(auto i : nums){
            m[i]++;
        }
        vector<int> ans;
        for(auto i : m){
            if(i.second==2) ans.push_back(i.first); 
        }
        for(int i = 1; i<=nums.size(); i++){
            if(m.find(i)==m.end()){
                ans.push_back(i);
                break;
            }
        }
        return ans;
    }
};