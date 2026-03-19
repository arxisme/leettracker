// Last updated: 19/03/2026, 21:18:42
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int i = nums.size()-1;
         int ind = -1;
        for(int j = i-1; j>=0; j--){
            if(nums[j]<nums[j+1]) {
                ind = j;
                break;
            }
            
           
            
        }
        if(ind == -1){

        reverse(nums.begin(), nums.end());
        return ;}
        int mini = INT_MAX;
        int dd = -1;
        for(int j = i; j>ind; j--){
            if(nums[j]>nums[ind]&& nums[j]<mini){
                mini = nums[j];
                dd = j;
            }
        }
        swap(nums[ind], nums[dd]);
        reverse(nums.begin()+ind+1, nums.end());
        return;
    }
};