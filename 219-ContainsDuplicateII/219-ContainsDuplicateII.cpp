// Last updated: 04/04/2026, 17:39:56
1class Solution {
2public:
3    bool containsNearbyDuplicate(vector<int>& nums, int k) {
4        if(k>= nums.size()){
5            k = nums.size()-1;
6        }
7        unordered_map<int, int> mp;
8        int i = 0;
9        for( ; i<= k; i++ ){
10            mp[nums[i]]++;
11            if(mp[nums[i]]>1){
12                return true;
13            }
14        }
15        i = 0;
16        k++;
17        while(k<nums.size()){
18            mp[nums[i]]--;
19            i++;
20            mp[nums[k]]++;
21            if(mp[nums[k]]>1)return true;
22            k++;
23
24
25        }
26        return false;
27    }
28};