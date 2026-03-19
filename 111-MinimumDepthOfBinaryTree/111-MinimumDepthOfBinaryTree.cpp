// Last updated: 19/03/2026, 21:16:59
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
    int minDepth(TreeNode* root) {
        if(!root ) return 0;
        return solver(root, 1);
        
    }
    int solver(TreeNode* root, int depth){
       
        if(root->left ==NULL && root->right ==NULL){
            return depth;
        }
        if(root->left ==NULL){
            return solver(root->right, depth+1);
        }
        if(root->right ==NULL){
            return solver(root->left, depth+1);
        }
        return min(solver(root->left,depth+1),solver(root->right, depth+1));

    }
};