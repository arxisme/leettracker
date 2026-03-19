// Last updated: 19/03/2026, 21:17:39
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int count = nums.size();
        if (count == 1 || count == 2)
            return count;
        int flag = 0;
        for (int i = 1; i < count; i++) {

            if (nums[i] == nums[i - 1]) {
                flag++;
                if (flag == 2) {
                    nums.erase(nums.begin() + i);
                    i--;
                    count--;
                    flag--;
                    if (count == 1 || count == 2)
                        return count;
                }

            } else {
                flag=0;
            }
        }

        return count;
    }
};