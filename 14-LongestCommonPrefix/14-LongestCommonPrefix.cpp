// Last updated: 20/03/2026, 21:53:24
1class Solution {
2public:
3    string longestCommonPrefix(vector<string>& strs) {
4        string prefix = strs[0];
5
6        for(int i = 0;i<strs.size();i++){
7            while(strs[i].find(prefix)!=0){
8                prefix.pop_back();
9            }
10            
11        }
12
13        return prefix;
14    }
15};