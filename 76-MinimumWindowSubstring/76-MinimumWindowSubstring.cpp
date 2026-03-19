// Last updated: 19/03/2026, 21:17:46
class Solution {
public:
    string minWindow(string s, string t) {
        
        if (t.length() == 0)
            return "";
       
        if (s.size() < t.size())
            return "";
        string res = "";
        unordered_map<char, int> mp;
        unordered_map<char, int> mp2;
        for (auto c : t) {
            mp[c]++;
        }
        int start = 0;
        int len = 0;
        int done = 0;
        int mini = INT_MAX;
        int resultin = -1;

        for (int i = 0; i < s.size(); i++) {
           
            if (mp.find(s[i]) == mp.end()) {
                len++;
                continue;
            }
            mp2[s[i]]++;
            len++;
            if (mp2[s[i]] == mp[s[i]])
                done+=mp[s[i]];


            while (mp.find(s[start]) == mp.end() ||
                   mp2[s[start]] > mp[s[start]]) {
                if (mp.find(s[start]) != mp.end())
                    mp2[s[start]]--;
                start++;
                len--;
            }
            if (done == t.size()) {
                if (len < mini) {
                    resultin = start;
                    

                }
                mini = min(len, mini);
            }
        }
        if(resultin==-1) return "";
        
        return s.substr(resultin,mini);
    }
};