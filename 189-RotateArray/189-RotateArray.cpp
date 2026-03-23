// Last updated: 23/03/2026, 18:28:37
1class Solution {
2public:
3    void rotate(vector<int>& nums, int k) {
4        int n = nums.size();
5        vector<int> re = nums;
6        k = k%n;
7
8        for (int i = 0; i < n; i++) {
9            nums[i] = re[(i - k+n) % n];
10        }
11
12        return;
13    }
14};