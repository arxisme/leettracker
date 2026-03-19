// Last updated: 20/03/2026, 02:43:39
1class Solution {
2public:
3    string longestCommonPrefix(vector<string>& strs) {
4        
5        int i = 0;
6        int res=-1;
7        int b = 0;
8        char c;
9        while (!b) {
10            for (int j = 0; j < strs.size(); j++) {
11                
12                string str = strs[j];
13                if (i >= str.size()) {
14                    b = 1;
15                    break;
16                }
17                if (j == 0) {
18                    c = str[i];
19                    
20                }
21                if(str[i]!=c){
22                    b=1;
23                    break;
24                }
25                if(j==strs.size()-1){
26                    res++;
27                }
28               
29            }
30             i++;
31        }
32
33        return strs[0].substr(0,res+1);
34    }
35};