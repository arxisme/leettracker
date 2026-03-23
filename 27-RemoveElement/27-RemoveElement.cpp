// Last updated: 23/03/2026, 10:35:12
1class Solution {
2public:
3    int removeElement(vector<int>& nums, int val) {
4        int n = nums.size();
5        int k = n-1;
6        for (int i = n-1; i >=0; i--) {
7            if (nums[i] == val)
8                swap(nums[i], nums[k--]);
9        }
10        return k+1;
11    }
12};