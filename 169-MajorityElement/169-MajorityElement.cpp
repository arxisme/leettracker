// Last updated: 23/03/2026, 17:03:51
1class Solution {
2public:
3    int majorityElement(vector<int>& nums) {
4        sort(nums.begin(), nums.end());
5        int res = 1;
6        int f = 0;
7        int result = nums[0];
8        for(int i = 1; i<nums.size(); i++){
9            if(nums[i]==nums[i-1]){
10                res++;
11                if(f<res){
12                    f = res;
13                    result = nums[i];
14
15                }
16
17            }else{
18                res =1;
19            }
20        }
21        return result;
22
23
24        
25    }
26};