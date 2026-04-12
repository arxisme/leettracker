// Last updated: 12/04/2026, 23:23:10
1class Solution {
2public:
3    int characterReplacement(string s, int k) {
4        vector<int> count(26, 0);
5        int start = 0;
6        int maxF = 0;
7        int res = 0;
8        for(int i = 0; i<s.size(); i++){
9            count[s[i]-'A']++;
10            maxF = max(maxF, count[s[i]-'A']);
11
12            while((i-start+1)-maxF >k){
13                count[s[start]-'A']--;
14                start++;
15            }
16            res = max(res, i-start+1);
17
18        }
19        return res;
20
21        
22    }
23};