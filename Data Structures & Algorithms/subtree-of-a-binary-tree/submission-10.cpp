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
    bool dfs(TreeNode* n, TreeNode* s){
      if(!n && !s){return true;}
      if(s && n && s->val == n->val){
        return dfs(n->left, s->left) && dfs(n->right, s->right);
      }else{
        return false;
      }
    }
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
      if(!root)return false;
      if(!subRoot) return true;
      if(dfs(root,subRoot)){
        return true;
      }
      return isSubtree(root->left, subRoot) || isSubtree(root->right, subRoot);
    }
};
