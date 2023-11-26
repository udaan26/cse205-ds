#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> arr;
        unordered_map<int,int> mp;
        for(int a: nums){
            mp[a]++;
        }
        multimap<int,int,greater<int>> mp1;
        for(auto x: mp){
            mp1.insert({x.second,x.first});
        }
        auto it = mp1.begin();
        for(int j =0; j<k; j++){
            arr.push_back(mp1.begin()->second);
            mp1.erase(mp1.begin());
        }
        return arr;
    }
};