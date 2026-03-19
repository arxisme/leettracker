// Last updated: 19/03/2026, 21:18:13
class Solution {
public:
    bool canJump(vector<int>& nums) {
        for(int i = nums.size()-2; i>=0;  i--){
            if(nums[i]==0){
                int j = i;
                i--;
                if(i<0)return false;
                for(;i>=0;i--){
                    if(nums[i]>=j-i+1){
                        break;
                    }
                    else if(i==0){
                        return false;
                    }

                }

            }
        }
        return true;
        
    }
};