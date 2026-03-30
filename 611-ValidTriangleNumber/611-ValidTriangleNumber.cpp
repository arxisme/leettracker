// Last updated: 31/03/2026, 02:53:53
1class Solution {
2public:
3    int triangleNumber(vector<int>& nums) {
4        
5        sort(nums.begin(), nums.end());
6        int res=0;
7        for(int i = nums.size()-1;i>=2;i--){
8            int left = 0;
9            int right = i-1;
10            while(left != right){
11                if (nums[left] + nums[right] > nums[i]) {
12                    res += right - left;
13                    right--;
14                } else {
15                    left++;
16                }
17
18
19            }
20
21        }
22       
23        return res;
24    }
25};