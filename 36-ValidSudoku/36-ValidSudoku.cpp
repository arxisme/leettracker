// Last updated: 27/03/2026, 20:56:28
1class Solution {
2public:
3    bool isValidSudoku(vector<vector<char>>& board) {
4        vector<unordered_map<int, int>> row(9);
5        vector<unordered_map<int, int>> col(9);
6        vector<unordered_map<int, int>> grid(9);
7
8        for (int i = 0; i < 9; i++) {
9            for (int j = 0; j < 9; j++) {
10                if(board[i][j]=='.')continue;
11                int num = board[i][j]-'0';
12                int rn = i;
13                int gn = (i/3)*3+j/3;
14                int cn = j;
15                if (row[rn].count(num))
16                    return false;
17                else
18                    row[rn][num] = 1;
19                
20                if (col[cn].count(num))
21                    return false;
22                else
23                    col[cn][num] = 1;
24                if (grid[gn].count(num))
25                    return false;
26                else
27                    grid[gn][num] = 1;
28            }
29        }
30        return true;
31    }
32};