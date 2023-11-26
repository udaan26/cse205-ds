//Definition for a binary tree node.
#include<bits/stdc++.h>
using namespace std;

 struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode() : val(0), left(nullptr), right(nullptr) {}
     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 };

 /**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    map<int, map<int, multiset<int>>> m;
    void solve(TreeNode *root, int col, int row){
        if(!root) return;
        m[col][row].insert(root->val);
        solve(root->left, col-1, row+1);
        solve(root->right, col+1, row+1);
    }

    vector<vector<int>> verticalTraversal(TreeNode* root) {
        solve(root, 0, 0);
        vector<vector<int>> ans;
        for(auto i:m){
            ans.push_back({});
            for(auto j:i.second){
                for(auto k: j.second){
                    ans.back().push_back(k);
                }
            }
        }
        return ans;
    }
};