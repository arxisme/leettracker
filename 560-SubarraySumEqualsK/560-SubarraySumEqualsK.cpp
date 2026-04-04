// Last updated: 04/04/2026, 17:54:46
1class Solution {
2public:
3    int subarraySum(vector<int>& nums, int k) {
4
5        unordered_map<int, int> mp;
6        mp[0] = 1;
7        int sum = 0;
8        int res = 0;
9
10        for (int i = 0; i < nums.size(); i++) {
11            sum += nums[i];
12            
13            if (mp.find(sum-k) != mp.end())
14                res += mp[sum-k];
15            mp[sum]++;
16        }
17        return res;
18    }
19};