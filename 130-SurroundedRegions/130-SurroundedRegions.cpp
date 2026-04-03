// Last updated: 03/04/2026, 21:00:42
1class Solution {
2public:
3    void solve(vector<vector<char>>& board) {
4        int m = board.size();
5        int n = board[0].size();
6        // 1. Left & Right columns
7        for (int i = 0; i < m; i++) {
8            dfs(board, i, 0);     // left edge
9            dfs(board, i, n - 1); // right edge
10        }
11
12        // 2. Top & Bottom rows
13        for (int j = 0; j < n; j++) {
14            dfs(board, 0, j);     // top edge
15            dfs(board, m - 1, j); // bottom edge
16        }
17        for (int i = 0; i < m; i++) {
18            for (int j = 0; j < n; j++) {
19                if (board[i][j] == '#')
20                    board[i][j] = 'O';
21
22                else if (board[i][j] == 'O')
23                    board[i][j] = 'X';
24            }
25        }
26    }
27    void dfs(vector<vector<char>>& board, int i, int j) {
28        int m = board.size();
29        int n = board[0].size();
30        if (i < 0 || i >= m || j < 0 || j >= n)
31            return;
32        if (board[i][j] != 'O' )
33            return;
34        board[i][j] = '#';
35
36        vector<int> dx = {-1, 0, 1, 0};
37        vector<int> dy = {0, -1, 0, 1};
38        for (int k = 0; k < dx.size(); k++) {
39            dfs(board, i + dx[k], j + dy[k]);
40        }
41    }
42};