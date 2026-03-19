// Last updated: 19/03/2026, 21:15:22
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        vector<int> got(nums.size() + 1, 0);
        for (int i : nums) {
            got[i] = 1;
        }
        for (int i = 0; i <= nums.size(); i++) {
            if (got[i] == 0)
                return i;
        }
        return 0;
    }
};