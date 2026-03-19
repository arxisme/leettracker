// Last updated: 19/03/2026, 21:14:51
class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n = nums.size();
        vector<int> a(n, -1);
        stack<int> s;
        for (int i = 2*n - 1; i >= 0; i--) {
            while (!s.empty() && s.top() <= nums[i%n]) {
                s.pop();
            }
            if (i<n) {
                a[i] = s.empty() ? -1 : s.top();
            }
            s.push(nums[i%n]);
        }
        return a;
    }
};
// class Solution {
// public:
//     vector<int> nextGreaterElements(vector<int>& nums) {
//         int n = nums.size();
//         stack<int> st;
//         vector<int> a(n,-1);
//         for(int i = 2*n -1 ;i>=0 ; i--){
//             while(!st.empty() && st.top()<=nums[i%n]){
//                 st.pop();
//             }
//             if(i<n){
//                 a[i] = st.empty() ? -1 : st.top();
//             }
            
//             st.push(nums[i%n]);
//         }
//         return a;
//     }
// };