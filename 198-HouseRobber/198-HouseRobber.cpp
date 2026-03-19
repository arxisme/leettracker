// Last updated: 19/03/2026, 21:16:03
class Solution {
public:
    int rob(vector<int>& nums) {
        int prev1= nums[0];
        if(nums.size()==1)return prev1;;
        int prev2 = nums[1];
       
       if(nums.size()==2)return  max(prev1,prev2);
        for(int i = 2;i<nums.size(); i++){
            int temp = prev2;
            prev2 = nums[i]+prev1;
            prev1 = max(temp,prev1);

        }
        return max(prev1, prev2);


    }
};