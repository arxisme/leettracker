// Last updated: 04/04/2026, 16:05:03
1class Solution {
2public:
3    int maximalSquare(vector<vector<char>>& matrix) {
4        int res = 0;
5        vector<vector<int>> dp(matrix.size(), vector<int> (matrix[0].size(), 0));
6        for(int i = 1 ; i< matrix.size(); i++){
7            dp[i][0]= matrix[i][0]-'0';
8            res= max(res, dp[i][0]);
9        }
10        for(int i = 0 ; i< matrix[0].size(); i++){
11            dp[0][i]= matrix[0][i]-'0';
12            res= max(res, dp[0][i]);
13        }
14        for(int i = 1; i< matrix.size(); i++){
15            for(int j = 1; j< matrix[0].size(); j++){
16                if(matrix[i][j] == '0')continue;
17                int a = min({dp[i-1][j], dp[i][j-1],dp[i-1][j-1]});
18                dp[i][j]=a+1;
19                res = max(a+1, res);
20            }
21        }
22        return res*res;
23        
24    }
25};