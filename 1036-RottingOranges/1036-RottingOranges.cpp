// Last updated: 19/03/2026, 21:14:16
class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        vector<vector<int>> visited(m, vector<int>(n, 0));

        queue<pair<int, pair<int, int>>> q;

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (grid[i][j] == 2) {
                    visited[i][j] = 2;
                    q.push({0, {i, j}});
                }
            }
        }
        vector<int> drow = {0, -1, 0, 1};
        vector<int> dcol = {-1, 0, 1, 0};
        int maxTime = 0;
        while (!q.empty()) {
            int time = q.front().first;
            int row = q.front().second.first;
            int col = q.front().second.second;
            q.pop();
            maxTime = max(time, maxTime);
            for (int i = 0; i < 4; i++) {
                int nrow = row + drow[i];
                int ncol = col + dcol[i];
                if (nrow >= 0 && nrow < m && ncol >= 0 && ncol < n &&
                    grid[nrow][ncol] == 1 && visited[nrow][ncol] != 2) {
                    q.push({time + 1, {nrow, ncol}});
                    visited[nrow][ncol] = 2;
                }
            }
        }
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (visited[i][j] != 2 && grid[i][j] == 1) {
                    return -1;
                }
            }
        }
        return maxTime;
    }
};
