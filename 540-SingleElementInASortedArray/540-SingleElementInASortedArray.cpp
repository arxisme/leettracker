// Last updated: 19/03/2026, 21:14:44
class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {

       int start = 0;
       int end = nums.size()-1;
       int mid =0;
       while(start<end){
        mid = start + (end-start)/2;
        if(mid%2 ==1) mid--;
        if(nums[mid] == nums[mid+1]){
            start = mid+2;
        }
        else end = mid;


       }
       return nums[start];
    }
    
};