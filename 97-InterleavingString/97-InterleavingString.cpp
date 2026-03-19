// Last updated: 19/03/2026, 21:17:21
class Solution {

public:
int mp[101][101];
    bool isInterleave(string s1, string s2, string s3) {
        if(s1.size()+s2.size()!= s3.size()) return false;
        for (int i = 0; i <= s1.length(); i++) {
            for (int j = 0; j <= s2.length(); j++) {
                mp[i][j] = -1;
            }}
        return solver(s1,s2,s3,0,0);

    }
    bool solver(string& s1, string &s2 , string &s3, int i, int j){
        
        if (i == s1.length() && j == s2.length()) return true;
        if(mp[i][j] != -1) return mp[i][j];
        bool res = false;
        int k = i+j;
        if (i < s1.length() && s1[i] == s3[k]) {
            res = solver(s1, s2, s3, i + 1, j);
        }
        if(!res && j<s2.length()&& s2[j]==s3[k]){
            res  = solver(s1,s2,s3, i, j+1);
        }
        return mp[i][j] = res;


    }
};