// Last updated: 23/03/2026, 12:36:17
1class Solution {
2public:
3    int removeDuplicates(vector<int>& nums) {
4        int k = 0;
5
6        for (int i = 0; i < nums.size(); i++) {
7            if (k < 2 || nums[i] != nums[k - 2]) {
8                nums[k++] = nums[i];
9            }
10        }
11
12        return k;
13    }
14};