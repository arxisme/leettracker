// Last updated: 19/03/2026, 21:13:10
1class Solution {
2public:
3    int strStr(string haystack, string needle) {
4        string s="";
5        int ns=needle.size();
6        int i = 0;
7
8        while(ns--){
9            s+=haystack[i++];
10        }
11        if(s==needle)return 0;
12        for(int k=1;i<haystack.size();k++){
13            s.erase(0,1);
14            s+=haystack[i++];
15            if(s==needle)return k;;
16            
17
18
19        }
20        return -1;
21        
22    }
23};