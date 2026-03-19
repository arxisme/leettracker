// Last updated: 19/03/2026, 21:15:29
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        long long  p = 1;
        int z =0;
        vector<int> res(nums.size(),0);
        vector<int> before(nums.size(), 1);
        vector<int> after(nums.size(),1);
        int b=1;
        int a=1;
        for(int i = 0 ; i<nums.size(); i++){
            b*=nums[i];
            a*=nums[nums.size()-1-i];
            before[i]=b;
            after[nums.size()-1-i]=a;

        }
        res[0]=after[1];
        res[nums.size()-1]=before[nums.size()-2];
        for(int i = 1 ; i<nums.size()-1; i++){
           res[i]=before[i-1]*after[i+1];

        }



        
      
        return res;
    }
};