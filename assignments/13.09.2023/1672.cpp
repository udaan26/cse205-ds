#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int wealth=0;
        int maxi=0;
        for(int i=0; i<accounts.size(); i++){
            wealth=0;
            for(int j=0; j<accounts[i].size(); j++){
                wealth += accounts[i][j]; 
            }
            maxi=max(wealth,maxi);
        }
        return maxi;
    }
};