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
    int rec(TreeNode* root, int d){
        if(!root){
            return d-1;
        }
        int l = rec(root->left, d+1);
        int r = rec(root->right, d+1);
        return max(l,r);
    }
    int maxDepth(TreeNode* root) {
        
        return rec(root,1);
    }
};
