// Last updated: 21/03/2026, 22:25:04
1class Solution {
2public:
3    vector<vector<int>> threeSum(vector<int>& nums) {
4        vector<vector<int>> res;
5        sort(nums.begin(), nums.end());
6
7        for (int i = 0; i < nums.size() - 2; i++) {
8            if(i>0 && nums[i]==nums[i-1]) continue;
9            int j = i + 1;
10            int k = nums.size() - 1;
11            while (j < k) {
12                if (nums[i] + nums[j] + nums[k] == 0) {
13                    res.push_back({nums[i], nums[j], nums[k]});
14                    j++;
15                    k--;
16                    while (j < k && nums[j] == nums[j - 1])
17                        ++j;
18                    while (j < k && nums[k] == nums[k + 1])
19                        --k;
20                } else if (nums[i] + nums[j] + nums[k] > 0) {
21                    k--;
22                   
23                } else {
24                    j++;
25                   
26                }
27            }
28        }
29        return res;
30    }
31};