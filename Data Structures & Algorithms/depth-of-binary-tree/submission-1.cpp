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
    int rec(TreeNode* root, int depth){
        if(!root){
            return depth-1;
        }
        int l = rec(root->left, depth+1);
        int r = rec(root->right, depth+1);
        //cout << l << "," << r << "\n";
        return max(l,r);
    }
    int maxDepth(TreeNode* root) {
        int depth = 1;
        return rec(root, depth);
    }
};
