// Last updated: 19/03/2026, 21:17:24
class Solution {
public:
    // memo[start][end] stores the list of trees for that range
    vector<TreeNode*> memo[10][10]; 

    vector<TreeNode*> generateTrees(int n) {
        if (n == 0) return {};
        return build(1, n);
    }

    vector<TreeNode*> build(int start, int end) {
        if (start > end) {
            return {nullptr};
        }
        
        // If already calculated, return memoized result
        if (!memo[start][end].empty()) {
            return memo[start][end];
        }

        vector<TreeNode*> result;

        for (int i = start; i <= end; i++) {
            // Generate all left and right subtrees
            vector<TreeNode*> leftTrees = build(start, i - 1);
            vector<TreeNode*> rightTrees = build(i + 1, end);

            // Combine subtrees with current root i
            for (auto l : leftTrees) {
                for (auto r : rightTrees) {
                    TreeNode* root = new TreeNode(i);
                    root->left = l;
                    root->right = r;
                    result.push_back(root);
                }
            }
        }
        
        return memo[start][end] = result;
    }
};