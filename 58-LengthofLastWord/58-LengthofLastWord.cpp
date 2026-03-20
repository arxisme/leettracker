// Last updated: 20/03/2026, 21:56:26
1class Solution {
2public:
3    int lengthOfLastWord(string s) {
4        while(s[s.size()-1]==' '){
5            s.pop_back();
6        }
7        int res=0;
8        while( s.size()&& s[s.size()-1]!=' '){
9            res++;
10            s.pop_back();
11        }
12        return res;
13        
14    }
15};