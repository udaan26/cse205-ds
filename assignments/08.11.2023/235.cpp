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
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* n1, TreeNode* n2) {
        if (root == NULL) return NULL;
        if (root->val > n1->val && root->val > n2->val) 
            return lowestCommonAncestor(root->left, n1, n2);
        if (root->val < n1->val && root->val < n2->val) 
            return lowestCommonAncestor(root->right, n1, n2); 
        return root;
    }
};