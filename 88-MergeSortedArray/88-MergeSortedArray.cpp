// Last updated: 19/03/2026, 21:17:33
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
        nums1.erase(nums1.end()-n,nums1.end());
        if(n==0)return;
     
        if(nums1.size()== 0){
            nums1=nums2;
            return;
        }
        if(nums2.size() == 0){
            return;
        }
        
        int i = 0;
        int j = 0;
        for (; i < nums1.size() &&j<nums2.size(); ) {
            if (nums1[i] <= nums2[j]) {
                i++;
            } else {
                nums1.insert(nums1.begin() + i, nums2[j]);
                i++;
                j++;
            }
        }
        while (j < nums2.size()) {
            nums1.push_back(nums2[j]);
            j++;
        }
        return ;
    }
};