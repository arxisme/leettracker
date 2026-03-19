// Last updated: 19/03/2026, 21:15:33
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
   
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(!root)return NULL;
        if(root ==p || root ==q){
            return root;
        }
        TreeNode* left = lowestCommonAncestor( root->left,  p, q);
        TreeNode* right = lowestCommonAncestor( root->right,  p, q);
        
        if(!left)return right;
        if(!right)return left;
        return root;
     
    }
};