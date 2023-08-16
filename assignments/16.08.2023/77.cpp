#include<bits/stdc++.h>
using namespace std;

class Solution {
public:

    void help(int n, int k, int i, vector<int>& temp, vector<vector<int>>& ans){
        if(k==0){
            ans.push_back(temp);
            return;
        }
        if(i>n){
            return;
        }
        temp.push_back(i);
        help(n, k-1, i+1, temp, ans);
        temp.pop_back();
        help(n, k, i+1, temp, ans);
    }

    vector<vector<int>> combine(int n, int k) {
        vector<int> temp;
        vector<vector<int>> ans;
        help(n,k, 1, temp , ans);
        return ans;
    }
};