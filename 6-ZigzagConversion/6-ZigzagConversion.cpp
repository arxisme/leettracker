// Last updated: 20/03/2026, 00:22:34
class Solution {
public:
    string convert(string s, int numRows) {
        // If only one row or string is short, no zigzag happens
        if (numRows == 1 || s.length() <= numRows) return s;

        vector<string> rows(min(numRows, int(s.length())));
        int currRow = 0;
        bool goingDown = false;

        for (char c : s) {
            rows[currRow] += c;
            // Reverse direction when we hit the top or bottom
            if (currRow == 0 || currRow == numRows - 1) {
                goingDown = !goingDown;
            }
            currRow += goingDown ? 1 : -1;
        }

        string result;
        for (string row : rows) {
            result += row;
        }
        return result;
    }
};
