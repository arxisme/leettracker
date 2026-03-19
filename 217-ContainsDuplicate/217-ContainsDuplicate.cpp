// Last updated: 19/03/2026, 21:15:45
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        for(int i = 1; i<nums.size();i++){
            if(nums[i]==nums[i-1])return true;
        }
        return false;
        
    }
};