// Last updated: 27/03/2026, 23:59:56
1class Solution {
2public:
3    vector<int> spiralOrder(vector<vector<int>>& matrix) {
4        int mini = 0;
5        int maxi = matrix.size()-1;
6        int minj = 0;
7        int maxj = matrix[0].size()-1;
8        int r = 1;
9        int c = 0;
10        vector<int> res;
11        int i = 0;
12        int j = 0;
13        while(mini <=maxi && minj<=maxj ){
14           for(int j = minj; j<= maxj;j++){
15            res.push_back(matrix[mini][j]);
16           }
17           mini++;
18           for(int i = mini;i<=maxi;i++){
19             res.push_back(matrix[i][maxj]);
20           }
21           maxj--;
22          if (mini <= maxi) {
23                for (int j = maxj; j >= minj; j--)
24                    res.push_back(matrix[maxi][j]);
25                maxi--;
26            }
27
28           
29            if (minj <= maxj) {
30                for (int i = maxi; i >= mini; i--)
31                    res.push_back(matrix[i][minj]);
32                minj++;
33            }
34        }
35        return res;
36        
37        
38    }
39};