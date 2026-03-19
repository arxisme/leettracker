// Last updated: 19/03/2026, 21:16:55
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
    vector<vector<int>> res;
    
public:
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<int> r;
        solver(root, targetSum, r);
        return res;
    }
    void solver(TreeNode* root, int targetSum, vector<int>& r){
        if(!root) return;
        r.push_back(root->val);
        if(root->left == NULL && root->right == NULL){
            if(targetSum-root->val ==0){
                
                res.push_back(r);
            }
            
        }

        solver(root->left  , targetSum-root->val, r) ;
        solver(root->right, targetSum-root->val, r);
        r.pop_back();
    }
};