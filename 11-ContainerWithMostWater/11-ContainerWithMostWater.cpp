// Last updated: 12/04/2026, 13:54:53
1class Solution {
2public:
3    int maxArea(vector<int>& height) {
4        int res = 0;
5        int i = 0;
6        int j = height.size()-1;
7        while(i<j){
8           int h ;
9           res = max(min (height[i], height[j])*(j-i), res);
10           if(height[i]<height[j]){
11            i++;
12           }
13           else{
14            j--;
15           }
16            
17        }
18        return res;
19    }
20};