// Last updated: 19/03/2026, 21:17:45
class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> result;
        if(nums.size() == 1){
            result.push_back({});
            result.push_back(nums);
            return result;
        }
        int temp = nums[0];
        nums.erase(nums.begin());
        vector<vector<int>> result1 = subsets(nums);
        result = result1;
        
        for(auto &s : result1){
            s.insert(s.begin() , temp);
        }
        result.insert(result.end(), result1.begin(), result1.end());
        return result;
    }
};