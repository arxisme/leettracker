// Last updated: 19/03/2026, 21:18:30
class Solution {
public:
    int trap(vector<int>& height) {

        int water = 0;
        int left = 0;
        int right = height.size() - 1;
        int max_left = 0;
        int max_right = 0;
        while (left < right) {
            if (height[left] < height[right]) {
                water += max(0, max_left - height[left]);
                max_left = max(height[left], max_left);
                left++;

            } else {
                water += max(0, max_right - height[right]);
                max_right = max(height[right], max_right);
                right--;
            }
        }
        return water;
    }
};