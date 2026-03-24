// Last updated: 24/03/2026, 15:14:16
1class Solution {
2public:
3    int lengthOfLongestSubstring(string s) {
4        vector<int> last(256, -1);
5        
6        int res = 0;
7        int start = 0;
8
9        for (int i = 0; i < s.size(); i++) {
10            if (last[s[i]] >= start) {
11                start = last[s[i]] + 1;
12            }
13
14            last[s[i]] = i;
15            res = max(res, i - start + 1);
16        }
17
18        return res;
19    }
20};