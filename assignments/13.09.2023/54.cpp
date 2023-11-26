#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        int top = 0, left = 0, bottom = matrix.size()-1, right = matrix[0].size()-1;
        int count=0;
        int total=matrix.size()*matrix[0].size();
        while(count<total){
            for(int i=left; i<=right; i++){
                ans.push_back(matrix[top][i]);
                count++;
            }
            top++;
            for(int j=top; j<=bottom; j++){
                ans.push_back(matrix[j][right]);
                count++;
            }
            right--;
            for(int k=right; count<total && k>=left; k--){
                ans.push_back(matrix[bottom][k]);
                count++;
            }
            bottom--;
            for(int l=bottom; count<total && l>=top; l--){
                ans.push_back(matrix[l][left]);
                count++;
            }
            left++;
        }
        return ans;
    }
};