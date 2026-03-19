// Last updated: 19/03/2026, 21:18:16
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int res = nums[0];
        int current = 0;
        for(int i = 0; i< nums.size();i++){
            current +=nums[i];
            res = max(res,current);
            current= max(current,0);
        }
        return res;
        
    }
};