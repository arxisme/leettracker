// Last updated: 19/03/2026, 21:14:52
class Solution {
public:
    int findMaxForm(vector<string>& strs, int m, int n) {
        vector<vector<int>> dp(m+1,vector<int>(n+1,0));
        for(string& s : strs){
            int zeros = count(s.begin(),s.end(),'0');
            int ones = count(s.begin(),s.end(),'1');
            for(int i = m ;i>=zeros;i--){
                for(int j = n; j>=ones;j--){
                    dp[i][j]= max(dp[i][j],dp[i-zeros][j-ones]+1);
                }
            }
        }
        return dp[m][n];
    }
    
};