// Last updated: 19/03/2026, 21:17:29
class Solution {
public:
    int numDecodings(string s) {
       int n = s.size();
       if(n==0|| (s[0] == '0')) return 0;
       vector<int> dp(n+1, 0);
       dp[n] = 1;
       dp[n-1] = (s[n-1]=='0')?0:1;

       for(int i = n-2; i>=0; i--){
        if(s[i]=='0'){
            dp[i]= 0;
            continue;
        }
        dp[i] = dp[i+1];
        int ww = (s[i]-'0')*10+ (s[i+1]-'0');
        if(ww<=26&& ww>=10) dp[i]+=dp[i+2];
       }
       return dp[0];
    }
};