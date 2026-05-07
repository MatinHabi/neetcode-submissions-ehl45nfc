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
    TreeNode* dfs(TreeNode* n, TreeNode* p, TreeNode* q){
        if(!n||!p||!q) return nullptr;
        if(max(p->val, q->val) < n->val){
            return dfs(n->left, p, q);
        }else if (min(p->val,q->val) > n->val){
            return dfs(n->right, p,q);
        }else{
            return n;
        }
        
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        return dfs(root, p , q);
    }
};
