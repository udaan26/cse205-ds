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
    
    TreeNode* helper(vector<int>& preorder, vector<int>& inorder, int start, int end, int& i){
        if(start>end) return NULL;
        TreeNode *node = new TreeNode(preorder[i]);
        i++;
        int pos;
        for(int j=start; j<=end; j++){
            if(inorder[j]==node->val) {
                pos = j;
                break;
            }
        }
        node->left = helper(preorder, inorder, start, pos-1, i);
        node->right = helper(preorder, inorder, pos+1, end, i);

        return node;
    }

    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int i = 0;
        return helper(preorder, inorder, 0, inorder.size()-1, i);
    }
};