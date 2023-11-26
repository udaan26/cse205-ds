#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> st;
        for(int i=0; i<operations.size(); i++){
            if(operations[i]=="C" && !st.empty()) st.pop();
            else if(operations[i]=="D" && !st.empty()) st.push((st.top())*2);
            else if(operations[i]=="+" && !st.empty()){
                int val1=(st.top()); 
                st.pop();
                int val2=(st.top());
                st.pop();
                st.push(val2);
                st.push(val1);
                st.push(val1+val2);
            } 
            else{
                st.push(stoi(operations[i]));
            }
        }
        int ans=0;
        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }
        
        return ans;
    }
};