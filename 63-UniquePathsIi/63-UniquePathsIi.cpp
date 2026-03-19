// Last updated: 19/03/2026, 21:18:04
class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int m = obstacleGrid.size();
        int n = obstacleGrid[0].size();
        vector<vector<int>> dp(m, vector<int>(n, 0));

        dp[0][0] = 1;
        if(obstacleGrid[0][0]==1)return 0;

        for(int s = 0; s < m+n-1; s++){

             for(int i = 0; i< m ; i++){

                int j = s-i;

                if(j>=n || j<0)continue;

                if(j+1<n && obstacleGrid[i][j+1] != 1){

                    dp[i][j+1]+= dp[i][j];

                }

                if(i+1<m&& obstacleGrid[i+1][j]!=1){

                    dp[i+1][j]+=dp[i][j];

                }

             }            

        }

        return dp[m-1][n-1];
    }
};