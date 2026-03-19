// Last updated: 19/03/2026, 21:14:13
class Solution {
public:
    string smallestEquivalentString(string s1, string s2, string baseStr) {
        unordered_map<char, char> mp;
        unordered_map<char, char> rev;
        for (int i = 0; i < s1.size(); i++) {
            if (mp.find(s1[i]) == mp.end()) {
                mp[s1[i]] = s1[i];
                
            }
            if (mp.find(s2[i]) == mp.end()) {
                mp[s2[i]] = s2[i];
            }
            char now = mp[s1[i]] < mp[s2[i]] ? mp[s1[i]] : mp[s2[i]];
            if (mp.find(now) != mp.end()) {
                mp[mp[now]]= min(now,mp[now]);
                mp[now] = min(now,mp[now]);
                
                now = mp[now];
            }
            char a = mp[s2[i]];
            mp[s2[i]] = now;
            while(mp[a]>now ){
                char d=mp[a];
                mp[a]=now;
                a =d;

            }
            a =mp[s1[i]];
            mp[s1[i]] = now;
            while(mp[a]>now){
                char d=mp[a];
                mp[a]=now;
                a =d;

            }
            
        }
        string res = "";
        for (int i = 0; i < baseStr.size(); i++) {
            char a = baseStr[i];
            if (mp.find(a) == mp.end()) {
                res += a;

            } else {
                while (mp[a] != a) {
                    a = mp[a];
                }
                res+=a;
            }
        }
        return res;
    }
};