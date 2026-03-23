// Last updated: 24/03/2026, 02:04:27
1class Solution {
2public:
3    vector<vector<int>> threeSum(vector<int>& nums) {
4        sort(nums.begin(), nums.end());
5
6        vector<vector<int>> res;
7        for (int i = 0; i < nums.size() - 2 && nums[i] <= 0;) {
8            int j = i + 1;
9            int k = nums.size() - 1;
10            while (j < k) {
11                int sum = nums[i] + nums[j] + nums[k];
12                if (sum == 0) {
13                    res.push_back({nums[i], nums[j], nums[k]});
14                    j++;
15                    while (j < k && nums[j] == nums[j - 1])
16                        j++;
17                    k--;
18                     while (j < k && nums[k] == nums[k + 1])
19                        k--;
20                } else if (sum > 0) {
21                    k--;
22                    while (j < k && nums[k] == nums[k + 1])
23                        k--;
24
25                } else {
26                    j++;
27                    while (j < k && nums[j] == nums[j - 1])
28                        j++;
29                }
30            }
31
32            i++;
33            while (i < nums.size() && nums[i] == nums[i - 1])
34                i++;
35        }
36        return res;
37    }
38};