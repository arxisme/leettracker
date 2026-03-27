// Last updated: 28/03/2026, 00:06:21
1class Solution {
2public:
3    void setZeroes(vector<vector<int>>& matrix) {
4        vector<int> r(matrix.size(),0);
5        vector<int> c(matrix[0].size(),0);
6        for(int i = 0 ;i<matrix.size();i++){
7            for(int j =0; j<matrix[0].size();j++){
8                if(matrix[i][j]==0){
9                    r[i]=1;
10                    c[j]=1;
11
12                }
13            }
14        }
15        for(int i = 0 ;i<matrix.size();i++){
16            for(int j =0; j<matrix[0].size();j++){
17                if(r[i]||c[j]){
18                    matrix[i][j]=0;
19                }
20            }
21        }
22        
23    }
24};