// Last updated: 19/03/2026, 21:15:01
class Solution {
public:
    string removeKdigits(string num, int k) {
        int n = num.size();
        stack<char> st;
        for(int i = 0 ; i < n ;  i++){
            while(!st.empty() && k > 0 && st.top() > num[i] ){
                st.pop();
               
                k--;
            }
            st.push(num[i]);

        }
        while (k > 0 && !st.empty()) {
            st.pop();
            k--;
        }
        string result;
        while(!st.empty()){
            result += st.top();
            st.pop();
        }
        reverse(result.begin(), result.end());
        size_t pos = result.find_first_not_of('0');
        result = (pos == std::string::npos) ? "0" : result.substr(pos);
        
        return result;

    }
};