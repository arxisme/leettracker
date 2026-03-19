// Last updated: 19/03/2026, 21:14:59
class Solution {
public:
    int m, n;
   
    int dx[4] = {-1, 1, 0, 0};
    int dy[4] = {0, 0, -1, 1};

    vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) {
        if (heights.empty()) return {};

        m = heights.size();
        n = heights[0].size();
        
       
        vector<vector<bool>> pacific(m, vector<bool>(n, false));
        vector<vector<bool>> atlantic(m, vector<bool>(n, false));

        // 1. DFS from Left and Right borders
        for (int i = 0; i < m; i++) {
            dfs(heights, pacific, i, 0);          // Pacific (Left edge)
            dfs(heights, atlantic, i, n - 1);     // Atlantic (Right edge)
        }

        // 2. DFS from Top and Bottom borders
        for (int j = 0; j < n; j++) {
            dfs(heights, pacific, 0, j);          // Pacific (Top edge)
            dfs(heights, atlantic, m - 1, j);     // Atlantic (Bottom edge)
        }

        // 3. Collect cells reachable from BOTH oceans
        vector<vector<int>> result;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (pacific[i][j] && atlantic[i][j]) {
                    result.push_back({i, j});
                }
            }
        }
        return result;
    }

private:
    void dfs(vector<vector<int>>& heights, vector<vector<bool>>& visited, int r, int c) {
        visited[r][c] = true;

        for (int i = 0; i < 4; i++) {
            int nr = r + dx[i];
            int nc = c + dy[i];

            // Check bounds
            if (nr < 0 || nr >= m || nc < 0 || nc >= n) continue;
            
            // Check if already visited
            if (visited[nr][nc]) continue;

            // Check height condition: 
            // We are moving from Ocean -> Land, so flow is valid if Land >= Current
            if (heights[nr][nc] < heights[r][c]) continue;

            dfs(heights, visited, nr, nc);
        }
    }
};