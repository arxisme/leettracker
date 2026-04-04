// Last updated: 04/04/2026, 18:28:22
1class Solution {
2public:
3    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
4        sort(nums.begin(), nums.end());
5        vector<vector<int>> res = {{}};
6        map<std::vector<int>, int> mp;
7        mp[{}] = 1;
8        for (int i = 0; i < nums.size(); i++) {
9            int s = res.size();
10            for (int j = 0; j < s; j++) {
11                vector<int> a = res[j];
12                a.push_back(nums[i]);
13                if (mp.find(a) == mp.end()) {
14                    res.push_back(a);
15                    mp[a] = 1;
16                }
17            }
18        }
19        return res;
20    }
21};