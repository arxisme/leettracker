// Last updated: 19/03/2026, 21:15:14
class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();
        vector<int> dp(n,1);
     
        int res= 1;
        for(int i = 1; i<nums.size();i++){
            for(int j = 0; j<i; j++){
                if(nums[j]<nums[i]){
                    dp[i]= max(dp[j]+1, dp[i]);
                }
            }
            res = max(dp[i],res);
        }
        return res;
    }
};