#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        map<int,int> mp;
        vector<int> ans;
        for(auto i: arr1){
            mp[i]++;
        }
        for(auto j:arr2){
            if(mp.find(j)!=mp.end()){
                int x = mp[j];
                vector<int> temp(x, j);
                ans.insert(ans.end(), temp.begin(), temp.end());
                mp.erase(j);
            }
        }
        for(auto x: mp){
            vector<int> temp1(x.second, x.first);
            ans.insert(ans.end(), temp1.begin(), temp1.end());
        }
        return ans;
    }
};