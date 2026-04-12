// Last updated: 12/04/2026, 20:54:32
1class Solution {
2public:
3    vector<int> dailyTemperatures(vector<int>& temperatures) {
4        vector<int> res(temperatures.size(), 0);
5        stack<int> st;
6        int n = temperatures.size();
7        st.push(n - 1);
8        for (int i = n - 2; i >= 0; i--) {
9
10            while (!st.empty() && temperatures[st.top()] <= temperatures[i]) {
11                st.pop();
12            }
13            if (!st.empty()) {
14                res[i] = st.top() - i;
15            }
16            st.push(i);
17        }
18        return res;
19    }
20};