// Last updated: 11/04/2026, 16:59:54
1class Solution {
2public:
3    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
4        int m = nums1.size();
5        int n = nums2.size();
6        if(m>n)return findMedianSortedArrays(nums2, nums1);
7
8        int low = 0;
9        int high =m;
10
11        int medPos = (m+n+1)/2;
12        while(low <= high){
13            int partition1 = (low+high)/2;
14            int partition2 = medPos - partition1;
15            int maxLeft1 = partition1==0?INT_MIN: nums1[partition1-1];
16            int maxLeft2 = partition2==0?INT_MIN: nums2[partition2-1];
17            int minRight1 = partition1==m?INT_MAX:nums1[partition1];
18            int minRight2 = partition2==n?INT_MAX:nums2[partition2];
19            if(minRight2>=maxLeft1 && minRight1>=maxLeft2 ){
20                if((m+n)%2==0){
21                    return (max(maxLeft1, maxLeft2)+min(minRight1,minRight2))/2.0;
22
23                }else{
24                    return max(maxLeft1, maxLeft2);
25                }
26
27            }else if (maxLeft1 > minRight2) {
28                high = partition1 - 1;
29            } else {
30                low = partition1 + 1;
31            }
32        }
33        return 0.0;
34
35
36        
37    }
38};