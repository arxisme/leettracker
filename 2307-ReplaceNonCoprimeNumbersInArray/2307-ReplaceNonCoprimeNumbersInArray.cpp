// Last updated: 19/03/2026, 21:13:52
class Solution {
public:
    vector<int> replaceNonCoprimes(vector<int>& nums) {
       
        for(int i =1; i< nums.size(); i++){
            if(i<1) i =1;
             
            int g = gcd(nums[i], nums[i-1]);
            if(g != 1){

                nums[i] = (max(nums[i],nums[i-1])/g)*min(nums[i],nums[i-1]);
                if(nums.size()>1){
                nums.erase(nums.begin()+i-1);
                i=i-2;
                }
                
            }
        }
        return nums;
    }
};