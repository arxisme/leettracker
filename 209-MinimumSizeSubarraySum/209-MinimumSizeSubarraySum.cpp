// Last updated: 12/04/2026, 23:37:00
1class Solution {
2public:
3    int minSubArrayLen(int target, vector<int>& nums) {
4        int start = 0;
5        int currS = 0;
6        int res = INT_MAX;
7        for(int i = 0 ; i< nums.size(); i++){
8            currS += nums[i];
9            
10            while(currS >target && start<i){
11                res = min(res, i-start+1);
12                currS-=nums[start++];
13            }
14            if(currS>=target){
15                res = min(res, i-start+1);
16            }
17           
18
19        }
20        return res==INT_MAX?0:res;
21        
22    }
23};