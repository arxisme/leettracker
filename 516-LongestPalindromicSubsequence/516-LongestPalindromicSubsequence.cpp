// Last updated: 19/03/2026, 21:14:49
class Solution {
public:
    int longestPalindromeSubseq(string s) {
        if (s.empty())return 0;
        int n = s.length();
       
        vector<vector<int>> mem(n, vector<int>(n, 0));
        for (int i = 0; i < n; i++) {
            mem[i][i] = 1;
           
        }
        for(int len = 2; len <=n;len++){
            for(int i = 0 ;i<=n-len;i++){
                int j = i+len-1;
                if(s[i]==s[j]){
                    mem[i][j]=mem[i+1][j-1]+2;
                }
                else{
                    mem[i][j]=max(mem[i+1][j],mem[i][j-1]);
                }
            }
            
        }
        return mem[0][n-1];

       
    }
};