// Last updated: 27/03/2026, 21:42:40
1class Solution {
2public:
3    bool isValidSudoku(vector<vector<char>>& board) {
4        int row[9] = {0}, col[9] = {0}, grid[9] = {0};
5
6        for (int i = 0; i < 9; i++) {
7            for (int j = 0; j < 9; j++) {
8                if (board[i][j] == '.') continue;
9
10                int num = board[i][j] - '1';   // 0 to 8
11                int mask = 1 << num;
12
13                int g = (i / 3) * 3 + (j / 3);
14
15                // check
16                if (row[i] & mask) return false;
17                if (col[j] & mask) return false;
18                if (grid[g] & mask) return false;
19
20                // set
21                row[i] |= mask;
22                col[j] |= mask;
23                grid[g] |= mask;
24            }
25        }
26        return true;
27    }
28};