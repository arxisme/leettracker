// Last updated: 19/03/2026, 21:15:24
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
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> result;
        string current;
        solver(root, result, current);
        return result;
    }

    void solver(TreeNode* root, vector<string>& result, string current) {
        if (root == nullptr) return;

        // Append current node value
        if (!current.empty()) current += "->";
        current += to_string(root->val);

        // Leaf node
        if (root->left == nullptr && root->right == nullptr) {
            result.push_back(current);
            return;
        }

        // Recurse left and right
        if (root->left) solver(root->left, result, current);
        if (root->right) solver(root->right, result, current);
    }
};