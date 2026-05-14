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
    vector<int> res;
    vector<int> dfs(TreeNode* n, int depth){
        if(!n) return {};
        if(depth > res.size()){
            res.push_back(n->val);
        } 
        dfs(n->right, depth+1);
        dfs(n->left, depth+1);
        return res;
    }
    vector<int> rightSideView(TreeNode* root) {
      return dfs(root,1);
    }
};
