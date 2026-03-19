// Last updated: 19/03/2026, 21:19:05
class Solution {
public:
    string longestPalindrome(string s) {
        int res = 0;
        int len = 1;
        int n = s.size();
        auto expand =[&](int l , int r){
            
            while(l>=0 && r<n && s[l]==s[r]){
                if(r-l+1>len){
                    len = r-l+1;
                    res = l;
                    
                }
                l--;r++;
            }
        };
        for(int i = 0; i<n;i++){
            expand(i,i);
            expand(i,i+1);
        }
        return s.substr(res, len);
    }
};