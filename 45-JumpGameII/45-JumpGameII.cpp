// Last updated: 24/03/2026, 01:14:57
1class Solution {
2public:
3  int jump(vector<int>& nums) {
4    int n = nums.size();
5    int jumps = 0;
6    int end = 0;
7    int farthest = 0;
8
9    for (int i = 0; i < n - 1; i++) {
10        farthest = max(farthest, i+nums[i]);
11        if(i==end){
12            jumps++;
13            end=farthest;
14        }
15    }
16
17    return jumps;
18}
19};