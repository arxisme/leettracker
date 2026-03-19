// Last updated: 19/03/2026, 21:14:57
class Solution {
public:
    int characterReplacement(string s, int k) {
        vector<int> count(26, 0);
        int maxFreq = 0;
        int i = 0, ans = 0;

        for (int j = 0; j < s.size(); j++) {
            count[s[j] - 'A']++;
            maxFreq = max(maxFreq, count[s[j] - 'A']);

            while ((j - i + 1) - maxFreq > k) {
                count[s[i] - 'A']--;
                i++;
            }

            ans = max(ans, j - i + 1);
        }
        return ans;
    }
};