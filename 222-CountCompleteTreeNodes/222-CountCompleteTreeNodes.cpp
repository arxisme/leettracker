// Last updated: 19/03/2026, 21:15:43
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
    int getLeft(TreeNode* root){
        int k = 0 ;
        while(root){
            root=root->left;
            k++;
        }
        return k;
    }
     int getRight(TreeNode* root){
        int k = 0 ;
        while(root){
            root=root->right;
            k++;
        }
        return k;
    }
    int countNodes(TreeNode* root) {
        if(!root)return 0;
        int lh = getLeft(root);
        int rh= getRight(root);
        if(lh==rh){
            return (1<<lh)-1;
        }
        return 1+countNodes(root->left)+countNodes(root->right);
        
        
    }
};