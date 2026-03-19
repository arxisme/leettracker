// Last updated: 19/03/2026, 21:15:54
class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int len = INT_MAX;

        int i = 0;
        int sum = 0;
        for (int j = 0; j < nums.size(); j++) {
            sum += nums[j];

            while (sum >= target) {
                len = min(len, j - i + 1);
                sum -= nums[i++];
            }
        }
        return len == INT_MAX ? 0 : len;
    }
};