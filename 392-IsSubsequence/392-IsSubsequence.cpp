// Last updated: 24/03/2026, 01:21:15
1class Solution {
2public:
3    bool isSubsequence(string s, string t) {
4        if(s.size()==0)return true;
5        if(s.size()>t.size())return false;
6        int i =0;
7        int j = 0;
8        for(int k = 0; k<t.size();k++){
9            if(s[i]==t[k]){
10                i++;
11                if(i==s.size()){
12                    return true;
13
14                }
15            }
16        }
17        return false;
18        
19    }
20};