#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> res;
        for(int i=1; i<=numRows; i++){
            vector<int> row={};
            for(int j=0; j<i; j++){
                if(j==0 || j==i-1){
                    row.push_back(1);
                }else{
                    row.push_back(res[i-2][j]+res[i-2][j-1]);
                }
            }
            res.push_back(row);
        }
        return res;
    }
};