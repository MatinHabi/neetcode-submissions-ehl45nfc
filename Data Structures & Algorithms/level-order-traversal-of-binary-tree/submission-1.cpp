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
    void dfs(TreeNode* n,vector<int> curr,int d){
      if(!n) return;

      if(res.size() == d){
        res.push_back(curr);
      }
      res[d].push_back(n->val);
      dfs(n->left, curr, d+1);
      dfs(n->right, curr, d+1);
      return;
    }
    vector<vector<int>> levelOrder(TreeNode* root) {
        dfs(root, {}, 0);
        return res;
    }
};
