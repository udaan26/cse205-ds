#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count=0;
        int maxi=0;
        for(auto&i: nums){
            if(i==1){
                count++;
            }
            else{
                count=0;
            }
            maxi=max(maxi,count);
        }
        return maxi;
    }
};