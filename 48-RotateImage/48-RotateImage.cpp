// Last updated: 27/03/2026, 23:16:05
1class Solution {
2public:
3    void rotate(vector<vector<int>>& matrix) {
4        for(int i =0; i<matrix.size();i++){
5            for(int j = i+1 ; j<matrix.size();j++){
6                swap(matrix[j][i],matrix[i][j]);
7            }
8        }
9        int n = matrix.size()-1;
10        for(int i =0; i<matrix.size();i++){
11            reverse(matrix[i].begin(), matrix[i].end());            
12        }
13        return;
14        
15    }
16};