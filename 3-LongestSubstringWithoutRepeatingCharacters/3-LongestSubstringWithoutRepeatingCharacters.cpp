// Last updated: 19/03/2026, 21:19:09
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> last;
        int i = 0, ans = 0;

        for (int j = 0; j < s.size(); j++) {
            if (last.count(s[j]) && last[s[j]] >= i) {
                i = last[s[j]] + 1;
            }
            last[s[j]] = j;
            ans = max(ans, j - i + 1);
        }
        return ans;
    }
};