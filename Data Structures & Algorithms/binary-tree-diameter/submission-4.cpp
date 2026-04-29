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
    int height(TreeNode* root, int depth){
        if(!root) return depth;

        int left = height(root->left, depth+1);
        int right = height(root->right, depth+1);

        return max(left,right);
    }
public:
    int diameterOfBinaryTree(TreeNode* root) {
        int res = 0;
        queue<TreeNode*> nodes;
        nodes.push(root); 
        while(!nodes.empty()){
            auto n = nodes.front();
            nodes.pop();
            if(n->left)nodes.push(n->left);
            if(n->right)nodes.push(n->right);
            int l = height(n->left, 0);
            int r = height(n->right, 0);

            res = max(res, l+r);
            if(l+r < res){
                break;
            }
        }
        return res;

    }
};
