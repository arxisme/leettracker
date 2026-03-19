// Last updated: 19/03/2026, 21:14:41
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int sum = 0;
        int res = 0;
        
        int i = 0;
        unordered_map<int,int> pref;
        pref[0]=1;
        for(int j = 0; j< nums.size(); j++){
            sum+=nums[j];
            
            if(pref.count(sum-k))res+=pref[sum-k];
            pref[sum]+=1;

            
        }
        
        return res;
    }
};