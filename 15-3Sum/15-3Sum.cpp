// Last updated: 12/04/2026, 14:18:12
1class Solution {
2public:
3    vector<vector<int>> threeSum(vector<int>& nums) {
4        sort(nums.begin(), nums.end());
5        vector<vector<int>> res;
6        int n = nums.size();
7
8        for (int i = 0; i < nums.size() - 2 && nums[i] <= 0; i++) {
9
10            int target = -nums[i];
11            int l = i + 1;
12            int r = n - 1;
13            while (l < r) {
14                int curr = nums[l] + nums[r];
15                if (curr == target) {
16                    res.push_back({nums[i], nums[l], nums[r]});
17                    while (l < r && nums[l] == nums[l + 1])
18                        l++;
19                    while (l < r && nums[r] == nums[r - 1])
20                        r--;
21
22                    l++;
23                    r--;
24                   
25                } else if (curr < target) {
26                   
27                    l++;
28                } else {
29                   
30                    r--;
31                }
32            }
33
34            while (i < n - 1 && nums[i] == nums[i + 1])
35                i++;
36        }
37        return res;
38    }
39};