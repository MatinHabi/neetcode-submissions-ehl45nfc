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
    int dfs(TreeNode* root, int depth, int res = 0){
        if(!root){
            return depth-1;
        }
        int l = dfs(root->left, depth+1);
        int r = dfs(root->right, depth+1);
        res = max(l,r);
        return res;
    }
    int diameterOfBinaryTree(TreeNode* root) {
        queue<TreeNode*>bfs;
        bfs.push(root);
        int ret = 0;
        while(!bfs.empty()){
            TreeNode* curr = bfs.front();bfs.pop();
            if(curr->left) bfs.push(curr->left);
            if(curr->right) bfs.push(curr->right);
            int l = dfs(curr->left,1);
            int r = dfs(curr->right,1);
            ret = max(ret, l+r);
        }
        return ret;
    }
};
