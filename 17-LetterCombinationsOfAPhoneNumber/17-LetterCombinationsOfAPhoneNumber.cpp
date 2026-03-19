// Last updated: 19/03/2026, 21:18:58
class Solution {
public:
    vector<string> d2c = {"abc", "def",  "ghi", "jkl",
                          "mno", "pqrs", "tuv", "wxyz"};
    vector<string> res;
    string s;
    void solver(string digits, int start) {
        if (start == digits.size()) {
            res.push_back(s);
            return;
        }

        for (char c : d2c[digits[start] - '1' - 1]) {
            char k = s[start];
            s[start] = c;
            solver(digits, start + 1);

            s[start] = k;
        }

        return;
    }

    vector<string> letterCombinations(string digits) {
        s = digits;
        

        solver(digits, 0);
        return res;
    }
};