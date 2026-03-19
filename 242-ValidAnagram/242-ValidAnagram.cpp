// Last updated: 19/03/2026, 21:15:25
class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size())
            return false;
        unordered_map<char, int> mp;

        for (char c : s) {
            mp[c]++;
        }
        for (char c : t) {
            mp[c]--;
            if (mp[c] < 0)
                return false;
        }
        return true;
    }
};