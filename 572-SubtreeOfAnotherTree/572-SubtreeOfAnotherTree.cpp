// Last updated: 19/03/2026, 21:14:39
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
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if(!root){
            if(!subRoot) return true;
            return false;
        }
        if(!subRoot) return false;
        if(root->val==subRoot->val){
            if( isSubtree2(root, subRoot)) return true;
        }
        return isSubtree(root->left, subRoot)||isSubtree(root->right, subRoot);
        
    }
    bool isSubtree2(TreeNode* root, TreeNode* subRoot){
        if(!root){
            if(!subRoot) return true;
            return false;
        }
        if(!subRoot) return false;
        if(root->val ==subRoot->val){
            return isSubtree2(root->left, subRoot->left)&&isSubtree2(root->right, subRoot->right);
        }
        return false;
    }
};