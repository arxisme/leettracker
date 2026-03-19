// Last updated: 19/03/2026, 21:18:28
class Solution {
public:
    int jump(vector<int>& nums) {
        int n =nums.size();
        if(n==1)return 0;

        int jumps  = 0,farthest = 0, current_end =0 ;
        for(int i = 0; i<n;i++){
            farthest= max(farthest , i+nums[i]);
            if(i == current_end){
                current_end = farthest;
                jumps++;
                if(farthest>=n-1){
                    break;
                }
            }

        }
        return jumps;



        
        
    }
};