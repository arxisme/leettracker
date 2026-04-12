// Last updated: 12/04/2026, 16:35:46
1class Solution {
2public:
3    vector<int> searchRange(vector<int>& nums, int target) {
4        int l =-1;
5        int r =-1;
6        int i = 0;
7        int j = nums.size()-1;
8        while(i<=j){
9            int mid = (i+j)/2;
10            if(nums[mid]==target){
11                if(mid==0){
12                    l= mid;break;
13                }
14                if(nums[mid-1]==target){
15                    j = mid-1;
16                }
17                else{
18                    l = mid;break;
19                }
20            }
21            else if(nums[mid]>target){
22                j = mid-1;
23            }
24            else{
25                i= mid+1;
26            }
27        }
28         i = 0;
29         j = nums.size()-1;
30         while(i<=j){
31            int mid = (i+j)/2;
32            if(nums[mid]==target){
33                if(mid==nums.size()-1){
34                    r= mid;break;
35                }
36                if(nums[mid+1]==target){
37                    i = mid+1;
38                }
39                else{
40                    r = mid;break;
41                }
42            }
43            else if(nums[mid]>target){
44                j = mid-1;
45            }
46            else{
47                i= mid+1;
48            }
49        }
50        return {l,r};
51        
52    }
53};