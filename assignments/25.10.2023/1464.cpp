#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        priority_queue<int> p(nums.begin(), nums.end());
        int a = p.top();
        p.pop();

        return (p.top()-1)*(a-1);
    }
};