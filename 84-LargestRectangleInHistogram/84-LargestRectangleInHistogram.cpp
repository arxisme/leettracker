// Last updated: 19/03/2026, 21:17:36
class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        stack<int> st;
        int n = heights.size();
        int maxArea = 0;
        for(int i = 0 ; i <= n ; i++){
            int currH= (i==n?0:heights[i]);
            while(!st.empty() && currH < heights[st.top()]){
                int h = heights[st.top()];
                st.pop();
                int width = st.empty()?i: i-st.top()-1;
                maxArea  = max(maxArea, width*h);

            }
            st.push(i);
        }
        return maxArea;

        
        
    }
};