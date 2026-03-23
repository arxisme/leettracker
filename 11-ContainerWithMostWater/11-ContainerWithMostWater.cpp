// Last updated: 24/03/2026, 01:41:48
1class Solution {
2public:
3    int maxArea(vector<int>& height) {
4        int res = 0;
5        int i = 0;
6        int j = height.size()-1;
7        while(i<j){
8           int h ;
9            if(height[i]<=height[j]){
10                h = height[i];
11                i++;
12                
13            }
14            else {
15                h = height[j--];
16
17            }
18            res =max(res, h*(j-i+1));
19            
20        }
21        return res;
22    }
23};