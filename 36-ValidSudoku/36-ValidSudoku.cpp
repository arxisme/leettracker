// Last updated: 27/03/2026, 21:39:12
1class Solution {
2public:
3    bool isValidSudoku(vector<vector<char>>& board) {
4        vector<vector<bool>> r(9, vector<bool>(9, 0));
5        vector<vector<bool>> c(9, vector<bool>(9, 0));
6        vector<vector<bool>> g(9, vector<bool>(9, 0));
7
8        for (int i = 0; i < 9; i++) {
9            for (int j = 0; j < 9; j++) {
10                if(board[i][j]=='.')continue;
11                int num = board[i][j] - '0' - 1;
12                if (r[i][num])
13                    return false;
14                else
15                    r[i][num] = 1;
16
17                if (c[j][num])
18                    return false;
19                else
20                    c[j][num] = 1;
21
22                int k = (i / 3) * 3 + (j/3);
23
24                if (g[k][num])
25                    return false;
26                else
27                    g[k][num] = 1;
28            }
29        }
30        return true;
31    }
32};