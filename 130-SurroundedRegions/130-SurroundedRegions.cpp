// Last updated: 03/04/2026, 21:42:13
1class Solution {
2public:
3    void solve(vector<vector<char>>& board) {
4        int m = board.size();
5        int n = board[0].size();
6        // left & right
7        for (int i = 0; i < m; i++) {
8            dfs(board, i, 0);
9            dfs(board, i, n - 1);
10        }
11
12        // top & bottom (skip corners)
13        for (int j = 1; j < n - 1; j++) {
14            dfs(board, 0, j);
15            dfs(board, m - 1, j);
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
28        int m = board.size(), n = board[0].size();
29
30        if (i < 0 || i >= m || j < 0 || j >= n || board[i][j] != 'O')
31            return;
32
33        board[i][j] = '#';
34
35        dfs(board, i + 1, j);
36        dfs(board, i - 1, j);
37        dfs(board, i, j + 1);
38        dfs(board, i, j - 1);
39    }
40};