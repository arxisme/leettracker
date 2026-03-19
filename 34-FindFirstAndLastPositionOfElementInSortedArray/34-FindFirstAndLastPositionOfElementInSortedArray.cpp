// Last updated: 19/03/2026, 21:18:39
class Solution {
    int right(vector<int>& nums, int target) {
        int ans = -1;
        int low = 0;
        int high = nums.size() - 1;
        while (low <= high) {
            int mid = (low + high) / 2;
            if (nums[mid] <= target) {
                if (nums[mid] == target)
                    ans = mid;
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        return ans;
    }
    int left(vector<int>& nums, int target) {
        int ans = -1;
        int low = 0;
        int high = nums.size() - 1;
        while (low <= high) {
            int mid = (low + high) / 2;
            if (nums[mid] >= target) {
                if (nums[mid] == target)
                    ans = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return ans;
    }

public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int l = left(nums, target);
        int r = right(nums, target);
        return {l, r};
    }
};