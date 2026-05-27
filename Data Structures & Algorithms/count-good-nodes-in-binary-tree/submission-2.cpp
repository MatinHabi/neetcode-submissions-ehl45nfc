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
    int res;
    void dfs(TreeNode* n, int r){
        if(!n) return;
        if(n->val >= r){
            res+=1;
        }
        dfs(n->left,max(n->val,r));
        dfs(n->right,max(n->val,r));
        return;
    }
    int goodNodes(TreeNode* root) {
        res = 0;
        dfs(root, INT_MIN);
        return res;
    }
};
