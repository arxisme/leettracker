// Last updated: 19/03/2026, 21:16:19
class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        if (tokens.empty())
            return 0;
        for (int i = 0; i < tokens.size(); i++) {
            if (tokens[i] == "+") {
                int b = st.top();
                st.pop();
                int a = st.top();
                st.pop();

                st.push(a + b);

            } else if (tokens[i] =="*") {
                int b = st.top();
                st.pop();
                int a = st.top();
                st.pop();

                st.push(a * b);

            } else if (tokens[i] == "-") {
                int b = st.top();
                st.pop();
                int a = st.top();
                st.pop();
                st.push(a - b);

            } else if (tokens[i] == "/") {
                int b = st.top();
                st.pop();
                int a = st.top();
                st.pop();
                st.push(a / b);
            } else {
                st.push(stoi(tokens[i]));
            }
        }
        return st.top();
    }
};