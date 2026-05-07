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
    vector<vector<int>> res;
    void dfs(TreeNode* n, int depth){
        if(!n)return;
        if(res.size() == depth){
            res.push_back({});
        }
        res[depth].push_back(n->val);
        dfs(n->left, depth+1);
        dfs(n->right, depth+1);
        return;
    }
    vector<vector<int>> levelOrder(TreeNode* root) {
        dfs(root,0);
        return res;
    }
};
