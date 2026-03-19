// Last updated: 19/03/2026, 21:18:02
class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {

        int m = grid.size();
        int n = grid[0].size();
        if (m == 1 && n == 1) {
            return grid[0][0];
        }
        vector<vector<int>> res(m, vector<int>(n, -1));
        res[m - 1][n - 1] = grid[m - 1][n - 1];
        queue<pair<int, int>> q;
        if (n - 2 >= 0) {
            q.push({m - 1, n - 2});
        }
        if (m - 2 >= 0) {
            q.push({m - 2, n - 1});
        }

        while (!q.empty()) {
            pair<int, int> curr = q.front();
            q.pop();

            if (res[curr.first][curr.second] != -1)
                continue;
            int right = INT_MAX;
            int down = INT_MAX;
            int local = grid[curr.first][curr.second];
            if (curr.first < m - 1) {
                down = res[curr.first + 1][curr.second] + local;
            }
            if (curr.second < n - 1) {
                right = res[curr.first][curr.second + 1] + local;
            }
            res[curr.first][curr.second] = min(down, right);
            if (curr.first > 0) {
                
                q.push({curr.first - 1, curr.second});
            }
            if (curr.second > 0) {
                q.push({curr.first, curr.second - 1});
            }
        }
        return res[0][0];
    }
};