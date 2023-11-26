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
    int helper(TreeNode *root, int& maxi){
        if(root==NULL) return 0;
        int lf = helper(root->left, maxi);
        int ri = helper(root->right, maxi);

        int maxRightLeft = max(lf,ri);
        int maxRoot = max(root->val, (root->val+maxRightLeft));
        int maxAll = max(maxRoot, lf+ri+root->val);

        maxi = max(maxi, maxAll);

        return maxRoot;
    }

    int maxPathSum(TreeNode* root) {
        int maxi = INT_MIN;
        helper(root, maxi);
        return maxi;
    }
};