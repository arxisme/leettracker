// Last updated: 28/03/2026, 00:47:05
1class Solution {
2public:
3    void setZeroes(vector<vector<int>>& matrix) {
4        int col0 = 1;
5        int row0 = 1;
6        for (int i = 0; i < matrix[0].size(); i++) {
7            if (matrix[0][i] == 0)
8                row0 = 0;
9        }
10        for (int i = 0; i < matrix.size(); i++) {
11            if (matrix[i][0] == 0)
12                col0 = 0;
13        }
14
15        for (int i = 0; i < matrix.size(); i++) {
16
17            for (int j = 0; j < matrix[0].size(); j++) {
18
19                if (matrix[i][j] == 0) {
20                    matrix[0][j] = 0;
21                    matrix[i][0] = 0;
22                }
23            }
24        }
25        for (int i = 1; i < matrix.size(); i++) {
26
27            for (int j = 1; j < matrix[0].size(); j++) {
28
29                if (matrix[i][0] == 0 || matrix[0][j] == 0) {
30                    matrix[i][j] = 0;
31                }
32            }
33        }
34        if (col0 == 0) {
35            for (int i = 0; i < matrix.size(); i++) {
36                matrix[i][0] = 0;
37            }
38        }
39        if (row0 == 0) {
40            for (int i = 0; i < matrix[0].size(); i++) {
41                matrix[0][i] = 0;
42            }
43        }
44    }
45};