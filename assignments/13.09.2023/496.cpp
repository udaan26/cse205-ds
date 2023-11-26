#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> res(nums1.size(), -1);
        stack<int> st;
        unordered_map<int, int> map;

        for(int i=nums2.size()-1; i>=0; i--){
            int element = nums2[i];
            while(!st.empty() && st.top()<=element)
                st.pop();
            
            if(st.empty())
                map[element] = -1;
            else
                map[element] = st.top();

            st.push(element);
        }

        vector<int> ans;
        for(int i=0; i<nums1.size(); i++){
            ans.push_back(map[nums1[i]]);
        }
        return ans;
    }
};