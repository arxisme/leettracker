// Last updated: 19/03/2026, 21:16:10
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int target = nums.size() / 2; 
        unordered_map<int, int> map;

        for (int i = 0; i < nums.size(); i++) {
            map[nums[i]]++;
            if (map[nums[i]] > target) {
                return nums[i];
            }
        }

        return 0; // This line is theoretically unreachable if a majority element is guaranteed
    }
};
