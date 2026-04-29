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
    bool isBalanced(TreeNode* root) {
        //balance factor = height(left) - height(right) is [1,0,-1]
        if(!root){return true;}
        stack<TreeNode*> node;
        node.push(root);
        while(!node.empty()){
            auto n = node.top();
            node.pop();
            if(n->left) node.push(n->left);
            if(n->right) node.push(n->right);
            int left = height(n->left, 1);
            int right = height(n->right,1);
            cout << left << " " << right << "\n";
            if(left-right > 1 || left - right < -1){
                return false;
            }
        }
        return true;

    }
};
