// Last updated: 19/03/2026, 21:16:45
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
    int res = INT_MIN;
    int maxPathSum(TreeNode* root) {
        solver(root);
        return res==INT_MIN?0:res;
        
    }
    int solver(TreeNode* root){
        if(!root)return 0;
        int left = solver(root->left);
        int right =solver(root->right);
        if(left<0)left=0;
        if(right<0)right=0;
        res = max(res, root->val+left+right);
        return root->val+max(left,right);

    }
};