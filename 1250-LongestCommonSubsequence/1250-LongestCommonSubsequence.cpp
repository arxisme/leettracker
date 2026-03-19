// Last updated: 19/03/2026, 21:14:10
class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
        int n1 = text1.size() + 1;
        int n2 = text2.size() + 1;

        vector<vector<int>> dp(n1, vector<int>(n2, 0));
        int res =0;
        
        for (int i = 1; i < n1; i++) {
            for (int j = 1; j < n2; j++) {
                if (text1[i - 1] == text2[j - 1]) {
                    dp[i][j] = dp[i - 1][j - 1] + 1;
                    res = max(res, dp[i][j]);

                } else {
                    dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
                }
            }
        }
        return res;
    }
};