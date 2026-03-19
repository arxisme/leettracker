// Last updated: 19/03/2026, 21:14:27
class Solution {

public:
    vector<char> digits = {'1', '2', '3', '4', '5', '6', '7', '8', '9', '0'};
    vector<string> letterCasePermutation(string s) {
        vector<string> result;

        if (s.size() == 1) {
            if (find(digits.begin(), digits.end(), s[0]) == digits.end()) {
                string str = s;
                std::transform(str.begin(), str.end(), str.begin(), ::toupper);
                result.push_back(str);
                std::transform(str.begin(), str.end(), str.begin(), ::tolower);
                result.push_back(str);

            } else {
                result.push_back(s);
            }
            return result;
        }
        result = letterCasePermutation(s.substr(1));
        vector<string> result1 = result;
        char c = s[0];
        if (find(digits.begin(), digits.end(), c) == digits.end()) {
            for (auto &str : result) {
                str.insert(str.begin(), toupper(c));
                 
            }
            for (auto &str : result1) {
                str.insert(str.begin(), tolower(c));
               
            }
            result.insert(result.end(), result1.begin(), result1.end());
        } else {
            for (auto &str : result) {
                str.insert(str.begin(), c);
            }
        }
        return result;
    }
};