// Last updated: 24/03/2026, 00:10:05
1class Solution {
2public:
3    bool canJump(vector<int>& nums) {
4        if(nums.size()==1)return 1;
5        
6        int n = nums.size();
7        int minStep =1;
8        for(int i = n-2; i>0; i--){
9            if(nums[i]<minStep){
10                minStep++;
11                
12            }
13            else{
14                minStep=1;
15            }
16        }
17        return nums[0]>=minStep;
18    }
19};