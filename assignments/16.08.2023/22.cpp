#include<bits/stdc++.h>
using namespace std;

class Solution {
public:

    void helper(vector<string>& ans, string& temp, int open, int close, int n) {
        if (temp.length() == n * 2) {
            ans.push_back(temp);
            return;
        }
        if (open > 0) {
            temp += "(";
            helper(ans, temp, open - 1, close, n);
            temp.pop_back();
        }
        if (close > open) {
            temp += ")";
            helper(ans, temp, open, close - 1, n);
            temp.pop_back();
        }
    }

    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        string temp;
        helper(ans, temp, n, n, n);
        return ans;
    }
};