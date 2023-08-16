#include<bits/stdc++.h>
using namespace std;

class Solution {
public:

    void helper(vector<int>& candidates, int target,vector<vector<int>> &output, vector<int> &temp, int index){
        if(index == candidates.size()){
            if(target == 0){
                output.push_back(temp);
            }
            return;
        }

        if(candidates[index] <= target){
            temp.push_back(candidates[index]);
            helper(candidates, target-candidates[index], output, temp, index);
            temp.pop_back();
        }
        helper(candidates, target, output, temp, index+1);        
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> output;
        vector<int> temp;
        helper(candidates, target, output, temp, 0);
        return output;
    }
};