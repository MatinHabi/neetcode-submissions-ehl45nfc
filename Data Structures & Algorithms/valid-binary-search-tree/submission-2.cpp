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
    bool dfs(TreeNode* n, int left, int right){
        if(!n) return true;
        //for the left side:
            //if n > max for left side (n->val)
        //for the right side:
            //if n < min for left side (n->val)
        //return false
        if(n->val >= right || n->val <= left ) return false;
        return dfs(n->left,left,n->val) && dfs(n->right,n->val,right);
    }
    bool isValidBST(TreeNode* root) {
        return dfs(root,-1001,1001);
    }
};
