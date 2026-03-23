// Last updated: 23/03/2026, 23:01:35
1class Solution {
2public:
3    void rotate(vector<int>& nums, int k) {
4        int n = nums.size();
5        k %= n;
6
7        reverse(nums.begin(), nums.end());
8        reverse(nums.begin(), nums.begin() + k);
9        reverse(nums.begin() + k, nums.end());
10    }
11};