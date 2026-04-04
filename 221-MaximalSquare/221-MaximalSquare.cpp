// Last updated: 04/04/2026, 16:22:18
class Solution {
public:
    int maximalSquare(vector<vector<char>>& matrix) {
        if (matrix.size() == 0) {
            return 0;
        }
        // vector<vector<int>> dp(matrix.size(), vector<int>(matrix[0].size(), 0));
        vector<int> prev(matrix[0].size(), 0);
        vector<int> curr(matrix[0].size(), 0);
        int ans = 0;
        for (int i = 0; i < matrix.size(); i++) {
            for (int j = 0; j < matrix[i].size(); j++) {
                if (i == 0 || j == 0 || matrix[i][j] == '0') {
                    curr[j] = matrix[i][j] - '0';
                } else {
                    curr[j] =
                        min(curr[j - 1], min(prev[j - 1], prev[j])) +
                        1;
                }
                ans = max(curr[j], ans);
            }
            prev = curr;
        }
        return ans * ans;
    }
};