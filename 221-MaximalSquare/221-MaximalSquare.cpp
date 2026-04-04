// Last updated: 04/04/2026, 16:21:19
1class Solution {
2public:
3    int maximalSquare(vector<vector<char>>& matrix) {
4        int m = matrix.size(), n = matrix[0].size();
5        int res = 0;
6
7       
8        vector<vector<int>> dp(m, vector<int>(n));
9
10        for (int i = 0; i < m; i++) {
11            for (int j = 0; j < n; j++) {
12                dp[i][j] = matrix[i][j] - '0';
13            }
14        }
15
16        for (int i = 0; i < m; i++) res = max(res, dp[i][0]);
17        for (int j = 0; j < n; j++) res = max(res, dp[0][j]);
18
19        for (int i = 1; i < m; i++) {
20            for (int j = 1; j < n; j++) {
21                if (dp[i][j] == 1) {
22                    dp[i][j] = 1 + min({dp[i-1][j], dp[i][j-1], dp[i-1][j-1]});
23                    res = max(res, dp[i][j]);
24                }
25            }
26        }
27
28        return res * res;
29    }
30};