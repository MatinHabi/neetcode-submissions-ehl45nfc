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

//keeping going down left and right and ++count until parent > child
class Solution {
public:
    int res;
    void dfs(TreeNode* n, int max){
        if(!n) return;
        if(n->val >= max){
            res+=1;
            max = n->val;
        }
        dfs(n->left, max);
        dfs(n->right, max);
        return;
    }
    int goodNodes(TreeNode* root) {
        res = 0;
        dfs(root, -101);
        return res;
    }
};
