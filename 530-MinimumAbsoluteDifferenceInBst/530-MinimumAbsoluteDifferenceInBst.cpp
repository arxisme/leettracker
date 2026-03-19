// Last updated: 19/03/2026, 21:14:46
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
    vector<int> res;
    int mini=INT_MAX;


    int getMinimumDifference(TreeNode* root) {
        solver(root);
        return mini;
        
    }
    void solver( TreeNode* root){
        if(!root)return;
        solver(root->left);
        if(res.size()){
            mini = min(mini, root->val-res[res.size()-1]);
            
        }
        res.push_back(root->val);
        solver(root->right);


    }
};