// Last updated: 19/03/2026, 21:14:23
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
    vector<int> res;
    unordered_map<TreeNode*, TreeNode*> mp;

public:
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        build(root);
        fromChild(target, k,target);
        fromParent(target, k, target);

        return res;
    }

    void build(TreeNode* root) {
        if (!root)
            return;
        if (root->left)
            mp[root->left] = root;
        if (root->right)
            mp[root->right] = root;
        build(root->left);
        build(root->right);
    }

    void fromChild(TreeNode* target, int k, TreeNode* dont) {
        if (!target)
            return;
        if (k == 0 && target!= dont) {
            res.push_back(target->val);
        }
        k--;
        fromChild(target->left, k,dont);
        fromChild(target->right, k,dont);
    }
    void fromParent(TreeNode* target, int k, TreeNode* dont) {
        if (!target)
            return;
        if (k == 0) {
            res.push_back(target->val);
        }
        if (mp[target]) {
            TreeNode* parent = mp[target];
            if (parent->left != target) {
                fromChild(parent->left, k -2, dont);
            }
            if (parent->right != target) {
                fromChild(parent->right, k - 2, dont);
            }
            fromParent(parent,k-1, dont);
        }
    }
};