// Last updated: 19/03/2026, 21:15:19
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i = 0;
        for(int j = 0; j< nums.size(); j++){
            if(nums[j]!=0){
                swap(nums[i],nums[j]);i++;
            }
        }
        
    }
};