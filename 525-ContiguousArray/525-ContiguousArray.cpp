// Last updated: 19/03/2026, 21:14:47
class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        vector<int> prefix;
        prefix.push_back(0);
        int s = 0 ;
        int res = 0;
      
        unordered_map<int,int> mp;
          mp[0] =-1;
        for(int i = 0 ; i <nums.size(); i++){
            int k = nums[i]==0?-1:1;
            s+= k ;
            prefix.push_back(s);
            if(mp.find(s)!= mp.end()){
                res = max(res,(i-mp[s]));
            }
            else{
                mp[s] = i;
            }
            



        }
        return res;
        

        
    }
};