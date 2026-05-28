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
    bool bfs(TreeNode* n, int left, int right){
        if(!n) return true;
        if(n->val >= left) return false;
        if(n->val <= right) return false;
        return bfs(n->left, min(n->val, left), right) && 
               bfs(n->right, left, max(n->val, right));
    }
    bool isValidBST(TreeNode* root) {
        return bfs(root, INT_MAX, INT_MIN);
    }
};
