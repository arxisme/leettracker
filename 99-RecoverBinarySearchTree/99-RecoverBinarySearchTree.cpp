// Last updated: 19/03/2026, 21:17:18
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right)
 *         : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void recoverTree(TreeNode* root) {
        TreeNode* small = nullptr;
        TreeNode* big = nullptr;
        TreeNode* prev = nullptr;
        TreeNode* curr = root;

        while (curr) {
            if (!curr->left) {
                
                if (prev && prev->val > curr->val) {
                    if (!small)
                        small = prev;
                    big = curr;
                }
                prev = curr;
                curr = curr->right;
            } else {
               
                TreeNode* pred = curr->left;
                while (pred->right && pred->right != curr)
                    pred = pred->right;

                if (!pred->right) {
                    
                    pred->right = curr;
                    curr = curr->left;
                } else {
                    
                    pred->right = nullptr;
                    if (prev && prev->val > curr->val) {
                        if (!small)
                            small = prev;
                        big = curr;
                    }
                    prev = curr;
                    curr = curr->right;
                }
            }
        }

        if (small && big)
            swap(small->val, big->val);
    }
};
