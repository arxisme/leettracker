// Last updated: 19/03/2026, 21:18:31
class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
      int res = nums.size();
      for(int j = 0 ; j< nums.size(); j++){
        if(nums[j]==j+1) continue;
       
        if(nums[j]>0&& nums[j]<= res ){
            if(nums[nums[j]-1]==nums[j]) continue;
            swap(nums[j], nums[nums[j]-1]);
            j =  j-1;
            
        }
        

      }
      for(int i = 0 ; i< nums.size(); i++){
       
        
        if(nums[i]!= i+1) return i+1;
        

      }
      

      return res+1;

        
    }
};