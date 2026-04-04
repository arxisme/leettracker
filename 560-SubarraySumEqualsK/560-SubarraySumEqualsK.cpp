// Last updated: 04/04/2026, 18:38:08
1class Solution {
2public:
3    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
4        sort(nums.begin(), nums.end());
5        vector<vector<int>> res = {{}};
6        
7        int start = 0, end = 0;
8        
9        for (int i = 0; i < nums.size(); i++) {
10           
11            if (i > 0 && nums[i] == nums[i-1]) {
12                start = end;
13            } else {
14                start = 0;
15            }
16            
17            end = res.size(); 
18            for (int j = start; j < end; j++) {
19                vector<int> sub = res[j];
20                sub.push_back(nums[i]);
21                res.push_back(sub);
22            }
23        }
24        return res;
25    }
26};