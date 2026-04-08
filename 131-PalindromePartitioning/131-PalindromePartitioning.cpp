// Last updated: 08/04/2026, 23:11:57
1class Solution {
2public:
3    vector<vector<string>> res;
4
5    bool isPalindrome(string &s, int l, int r) {
6        while (l < r) {
7            if (s[l++] != s[r--]) return false;
8        }
9        return true;
10    }
11
12    void backtrack(string &s, int start, vector<string> &path) {
13        if (start == s.size()) {
14            res.push_back(path);
15            return;
16        }
17
18        for (int i = start; i < s.size(); i++) {
19            if (isPalindrome(s, start, i)) {
20                path.push_back(s.substr(start, i - start + 1));
21                backtrack(s, i + 1, path);
22                path.pop_back(); // backtrack
23            }
24        }
25    }
26
27    vector<vector<string>> partition(string s) {
28        vector<string> path;
29        backtrack(s, 0, path);
30        return res;
31    }
32};