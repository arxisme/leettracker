// Last updated: 20/03/2026, 02:21:52
1class Solution {
2public:
3    string reverseWords(string s) {
4      
5        string res="";
6        string curr="";
7        for (int i = 0; i < s.size(); i++) {
8
9            while (i < s.size() && s[i] == ' ') {
10                i++;
11            }
12            while (i < s.size() && s[i] != ' ') {
13                curr += s[i];
14                i++;
15            }
16            if (curr != "")
17               res = " " +curr+res;
18               
19
20            curr = "";
21        }
22        res.erase(0,1);
23        return res;
24    }
25};