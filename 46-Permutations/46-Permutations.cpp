// Last updated: 19/03/2026, 21:18:26
class Solution {
public:
    
     vector<vector<int>> result;
   
    void solver(int index,vector<int> & nums){
        if(index == nums.size()){
            result.push_back(nums);
        }
        for(int i = index ; i<nums.size(); i++){
            swap(nums[i], nums[index]);
            solver(index+1, nums);
            swap(nums[i], nums[index]);
        }

       
    }
    vector<vector<int>> permute(vector<int>& nums) {
        solver(0,nums);
        return result;
        


        
    }
    
};