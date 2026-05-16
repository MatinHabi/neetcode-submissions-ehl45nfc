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
    void dfs(TreeNode* n, int d){
      if(!n) return;
      if(res.size() == d){
        res.push_back(n->val);
      }
      dfs(n->right, d+=1);
      dfs(n->left, d);
    }
    vector<int> rightSideView(TreeNode* root) {
        res = {};
        dfs(root, 0);
        return res;
    }
};
