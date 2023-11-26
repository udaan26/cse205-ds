#include<bits/stdc++.h>
using namespace std;


//Definition for a binary tree node.
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
    TreeNode *solve(vector<int> preorder, int &preorderidx, int key, int min, int max, int n){
        if(preorderidx>n) return NULL;
        TreeNode * root = NULL;
        if(key>min && key<max){
            root = new TreeNode(key);
            preorderidx+=1;
            if(preorderidx<n){
                root->left = solve(preorder, preorderidx, preorder[preorderidx], min, key, n);
            }
            if(preorderidx<n){
                root->right = solve(preorder, preorderidx, preorder[preorderidx], key, max, n);
            }
        }
        return root;
    }

    TreeNode* bstFromPreorder(vector<int>& preorder) {
        int idx = 0;
        return solve(preorder, idx, preorder[0], INT_MIN, INT_MAX, preorder.size());
    }
};