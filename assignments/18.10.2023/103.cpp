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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        queue<TreeNode *> q;
        vector<vector<int>> res;
        bool ltor = true;
        if(root==NULL) return res;
        q.push(root);
        while(!q.empty()){
            int n = q.size();
            vector<int> temp(n);

            for(int i = 0; i<n; i++){
                TreeNode *k = q.front();
                q.pop();
                int index = (ltor)? i:(n-1-i);

                temp[index] = k->val;

                if(k->left) q.push(k->left);
                if(k->right) q.push(k->right);

            }

            ltor = !ltor;
            res.push_back(temp);
        }
        return res;
    }
};