#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        vector<vector<int>> res;
        int mini = INT_MAX;
        sort(arr.begin(),arr.end());
        for(int i=0; i<arr.size()-1; i++){
            mini = min(arr[i+1]-arr[i],mini);
        }
        for(int i=0; i<arr.size()-1; i++){
            if((arr[i+1]-arr[i])==mini){
                res.push_back({arr[i],arr[i+1]});
            }
        }
        return res;
    }
};