// Last updated: 19/03/2026, 21:15:02
class Solution {
public:
    string decodeString(string s) {
        if (s == "")
            return "";
        if (isalpha(s[0])) {

            return s[0] + decodeString(s.substr(1));
        }
        int num = 0;
        int i = 0;

        while (i < s.size() && isdigit(s[i])) {
            num = (num * 10) + (s[i] - '0');
            i++;
        }
        string ss = "";
        stack<char> st;
        st.push('[');
        i++;
        while (!st.empty()) {
            if (s[i] == ']')
                st.pop();
            if (st.empty())
                break;
            if (s[i] == '[')
                st.push('[');
            ss += s[i];
            i++;
        }
        i++;
        string sss = decodeString(ss);
        string res = "";
        while (num--) {
            res += sss;
        }
        return res + decodeString(s.substr(i));
    }
};