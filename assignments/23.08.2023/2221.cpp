#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int triangularSum(vector<int>& nums) {
        int n=nums.size();
        while(n>1){
            vector<int> temp;
            for(int j=1; j<n; j++){
                temp.push_back((nums[j]+nums[j-1])%10);
            }
            nums=temp;
            n--;
        }
        return nums[0];
    }
};