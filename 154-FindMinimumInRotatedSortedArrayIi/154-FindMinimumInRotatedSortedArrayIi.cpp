// Last updated: 19/03/2026, 21:16:17
class Solution {
public:
    int findMin(vector<int>& nums) {
        return solver(nums, 0, nums.size() - 1);
        int l = 0;
        int r = nums.size() - 1;

        while (r > l) {
            
            int mid = (l + r) / 2;
            if (nums[mid] < nums[mid + 1] && nums[mid] < nums[mid - 1]) {
                return nums[mid];
            }
            if (nums[mid] < nums[r]) {
                r=mid;
            } else if (nums[mid] > nums[r]) {
               l = mid;
            } else {
                r--;
            }
        }
        return nums[l];
    }
    int solver(vector<int>& nums, int start, int end) {
        if (start == end)
            return nums[start];
        if (start == end - 1) {
            return min(nums[start], nums[end]);
        }
        int mid = (start + end) / 2;
        if (nums[mid] < nums[mid + 1] && nums[mid] < nums[mid - 1]) {
            return nums[mid];
        }
        if (nums[mid] < nums[end]) {
            return solver(nums, start, mid);
        } else if (nums[mid] > nums[end]) {
            return solver(nums, mid + 1, end);
        } else {
            return solver(nums, start, end - 1);
        }
    }
};