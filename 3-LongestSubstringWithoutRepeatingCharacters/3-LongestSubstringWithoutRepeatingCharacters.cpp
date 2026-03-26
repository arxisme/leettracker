// Last updated: 26/03/2026, 13:21:53
1class Solution {
2public:
3    int lengthOfLongestSubstring(string s) {
4        vector<int> last(256,-1);
5        int res = 0;
6        int start = 0;
7        for(int i =0; i<s.size();i++){
8            if(last[s[i]]>=start){
9                start=last[s[i]]+1;
10              
11            }
12            
13            last[s[i]]=i;
14            res = max(res,i-start+1);
15        }
16        return res;
17        
18    }
19};