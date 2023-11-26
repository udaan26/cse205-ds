# include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> maxSubsequence(vector<int>& nums, int k) {
        multiset<int> s;

        for(int i = 0; i < nums.size(); i++){
            s.insert(nums[i]);
            if(s.size()>k){
                s.erase(s.begin());
            }
        }
        vector<int> answer;
        for(int i = 0; i<nums.size(); i++){
            auto it = s.find(nums[i]);
            if(it!=s.end()){
                answer.push_back(nums[i]);
                s.erase(it);
            }
        }
        return answer;
    }
};