// Last updated: 19/03/2026, 21:13:47
class Solution {
public:
    int minOperations(vector<int>& nums) {
        int c = 0;
        stack<int> st;
        for (int i = 0; i < nums.size(); i++) {
            while (!st.empty() && st.top()>nums[i]) {
                st.pop();

            } 
            if(nums[i]==0){
                continue;
            }
            if(st.empty() || st.top()<nums[i]){
                c++;
                st.push(nums[i]);
            }
        }
       
        return c;
    }
};