#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void sort(vector<int>& nums){
        int n = nums.size();
        int i,key,j;
        for(int i=1; i<n; i++){
            key = nums[i];
            j = i - 1;
            while(j>=0 && key<nums[j]){
                nums[j+1]=nums[j];
                j--;
            }
            nums[j+1]=key;
        }
    }

    int majorityElement(vector<int>& nums) {
        sort(nums);
        int n = nums.size();
        return nums[n/2];
    }
};