// Last updated: 19/03/2026, 21:18:52
class Solution {
public:
    vector<string> result;
    int i = 0;
    void addLeft(string st, int left, int right) {
        st.push_back('(');
        left--;

        if (left > 0) {
            addLeft(st, left, right);
        }

        addRight(st, left, right);
    }
    void addRight(string st, int left, int right) {

        if (left == right)
            return;
        st.push_back(')');
        right--;

        if (right == 0) {
            result.push_back(st);
            return;
        }
        addRight(st, left, right);

        if (left > 0) {
            addLeft(st, left, right);
        }
    }

    vector<string> generateParenthesis(int n) {
        int left = n;
        int right = n;
        string st = "";
        addLeft(st, left, right);

        return result;
    }
};