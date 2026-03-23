// Last updated: 24/03/2026, 01:38:09
1class Solution {
2public:
3    int maxArea(vector<int>& height) {
4        int res = 0;
5        int i = 0;
6        int j = height.size()-1;
7        while(i<j){
8            res = max(res, min(height[i],height[j])*(j-i));
9            if(height[i]<=height[j])i++;
10            else j--;
11        }
12        return res;
13    }
14};