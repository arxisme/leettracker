// Last updated: 19/03/2026, 21:16:57
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
    bool hasPathSum(TreeNode* root, int targetSum) {
        
        return solver(root,targetSum);
        
        
    }
    bool solver(TreeNode* root, int targetSum){
        if(!root) return false;
        if(root->left == NULL && root->right == NULL){
            return targetSum-root->val ==0;
        }

        return solver(root->left  , targetSum-root->val) || solver(root->right, targetSum-root->val);
    }
};