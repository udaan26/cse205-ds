# include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int, int> m;
        int n = nums.size();
        for(int i = 0; i<n; i++){
            int x = nums[i];
            if(m.find(x)!=m.end() && i-m[x]<=k) return true;
            m[x] = i;
        }
        return false;
    }
};