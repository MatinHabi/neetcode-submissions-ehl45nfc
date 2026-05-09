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
    int dfs(TreeNode* n, int d){
        if(!n){
            res = max(res, d-1); return 0;
        }
        dfs(n->left, d+1);
        dfs(n->right, d+1);
        return res;
    }
    int maxDepth(TreeNode* root) {
        res = 1;
        return dfs(root, res);
    }
};
