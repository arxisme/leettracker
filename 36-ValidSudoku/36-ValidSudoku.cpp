// Last updated: 27/03/2026, 20:52:51
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
13                int gr;
14                if (i < 3) {
15                    gr = 1;
16
17                } else if (i < 6) {
18                    gr = 2;
19                } else {
20                    gr = 3;
21                }
22                int gc;
23                if (j < 3) {
24                    gc = 0;
25
26                } else if (j < 6) {
27                    gc = 1;
28                } else {
29                    gc = 2;
30                }
31                int gn = gr + gc * 3 - 1;
32                int cn = j;
33                if (row[rn].count(num))
34                    return false;
35                else
36                    row[rn][num] = 1;
37                
38                if (col[cn].count(num))
39                    return false;
40                else
41                    col[cn][num] = 1;
42                if (grid[gn].count(num))
43                    return false;
44                else
45                    grid[gn][num] = 1;
46            }
47        }
48        return true;
49    }
50};