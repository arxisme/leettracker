// Last updated: 19/03/2026, 21:15:48
class Solution {
public:
    int rob(vector<int>& nums) {
        if (nums.size() == 1)
            return nums[0];
        if (nums.size() == 2)
            return max(nums[0], nums[1]);
        int prev1 = nums[0];
        if (nums.size() == 1)
            return prev1;
        ;
        int prev2 = nums[1];

        if (nums.size() == 2)
            return max(prev1, prev2);
        for (int i = 2; i < nums.size() - 1; i++) {
            int temp = prev2;
            prev2 = nums[i] + prev1;
            prev1 = max(temp, prev1);
        }
        int res1 = max(prev1, prev2);
        prev1 = nums[1];
       
        prev2 = nums[2];

        if (nums.size() == 2)
            return max(prev1, prev2);
        for (int i = 3; i < nums.size() ; i++) {
            int temp = prev2;
            prev2 = nums[i] + prev1;
            prev1 = max(temp, prev1);
        }
        int res2 = max(prev1, prev2);
        return max(res1, res2);
    }
};