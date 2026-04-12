// Last updated: 12/04/2026, 17:27:59
1class Solution {
2public:
3    bool isValidSudoku(vector<vector<char>>& board) {
4        int col[9] = {0};
5        int row[9] = {0};
6        int grid[9] = {0};
7        for (int i = 0; i < 9; i++) {
8            for (int j = 0; j < 9; j++) {
9                if (board[i][j] == '.')
10                    continue;
11                int num = board[i][j] - '1';
12                int g = (i / 3) * 3 + (j / 3);
13                int mask = 1 << num;
14                if (row[i] & mask)
15                    return false;
16                if (col[j] & mask)
17                    return false;
18                if (grid[g] & mask)
19                    return false;
20
21                row[i] |= mask;
22                col[j] |= mask;
23                grid[g] |= mask;
24            }
25        }
26        return true;
27    }
28};