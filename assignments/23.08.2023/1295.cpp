#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count=0;
        for(auto&i:nums){
            if((i>=10 && i<100) || (i>=1000 && i<=9999) || (i>=100000)){
                count++;
            }
        }
        return count;
    }
};