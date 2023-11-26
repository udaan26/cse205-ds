# include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void sort(vector<int>& nums){
        int n = nums.size();
        for(int i=0; i<n; i++){
            int Max = nums[i];
            int idx = i;
            for(int j=0; j<n-i; j++){
                idx=(Max == max(Max, nums[j]))? idx : j;
                Max = max(Max, nums[j]);
            }
            swap(nums[n-i - 1], nums[idx]);
        }
    }

    int findNonMinOrMax(vector<int>& nums) {
        sort(nums);
        if(nums.size()<=2){
            return -1;
        }
        return nums[1];
    }
};