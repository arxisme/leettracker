// Last updated: 19/03/2026, 21:17:07
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int preIdx = 0;
        unordered_map<int, int> rec;
        for (int i = 0; i < inorder.size(); i++) {
            rec[inorder[i]] = i;
        }
        return build(preorder, inorder, preIdx, 0, inorder.size() - 1, rec);
    }

    TreeNode* build(vector<int>& preorder, vector<int>& inorder, int& preIdx,
                    int inStart, int inEnd, unordered_map<int, int>& rec) {
        if (inStart > inEnd)
            return nullptr;

        int rootVal = preorder[preIdx++];
        TreeNode* root = new TreeNode(rootVal);

        int inIdx = rec[rootVal];

        

        root->left = build(preorder, inorder, preIdx, inStart, inIdx - 1, rec);
        root->right = build(preorder, inorder, preIdx, inIdx + 1, inEnd, rec);

        return root;
    }

    // TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {

    //     TreeNode* result = solver(preorder, inorder);
    //     return result;
    // }
    // TreeNode* solver(vector<int>& preorder, vector<int>& inorder) {

    //     TreeNode* result = new TreeNode;
    //     if (inorder.size() == 0) {

    //         return NULL;
    //     }

    //     if (inorder.size() == 1) {
    //         result->val = inorder[0];

    //         return result;
    //     }
    //     result->val = preorder[0];
    //     int i = 0;
    //     while (preorder[0] != inorder[i])
    //         i++;

    //     preorder.erase(preorder.begin());
    //     vector<int> inorderleft(inorder.begin(), inorder.begin() + i);

    //     vector<int> inorderight(inorder.begin() + i + 1, inorder.end());

    //     TreeNode* left = solver(preorder, inorderleft);
    //     TreeNode* right = solver(preorder, inorderight);
    //     result->left = left;
    //     result->right = right;
    //     return result;
    // }
};