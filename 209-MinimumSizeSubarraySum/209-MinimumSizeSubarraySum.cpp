// Last updated: 24/03/2026, 14:50:55
1class Solution {
2public:
3    int minSubArrayLen(int target, vector<int>& nums) {
4        int n = nums.size();
5        if (n == 0)
6            return 0;
7        int curr_sum = 0;
8        int i = 0;
9        int j = 0;
10        int res = INT_MAX;
11        while(i<n && j<n) {
12
13            while (j < n && curr_sum < target) {
14                curr_sum += nums[j++];
15            }
16
17            while (i < n && curr_sum >= target) {
18                int len = j - i ;
19                res = min(res, len);
20                curr_sum -= nums[i++];
21            }
22        }
23        return res == INT_MAX ? 0 : res;
24    }
25};