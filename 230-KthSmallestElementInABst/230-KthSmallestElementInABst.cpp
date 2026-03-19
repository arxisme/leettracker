// Last updated: 19/03/2026, 21:15:39
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
    vector<int> r;
public:
    int kthSmallest(TreeNode* root, int k) {
        solver(root,k);
        return r[k-1];
       

        
    }
    void solver(TreeNode* root, int k){
        if(r.size()==k)return;
        if(!root)return;
        solver(root->left,k);
        r.push_back(root->val);
        solver(root->right,k);

    
      
        
    }



};