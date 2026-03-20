// Last updated: 20/03/2026, 23:34:51
1class Solution {
2public:
3    int romanToInt(string s) {
4        unordered_map<char, int> mp = {
5            {'I',1}, {'V',5}, {'X',10}, {'L',50},
6            {'C',100}, {'D',500}, {'M',1000}
7        };
8        int res=0;
9        for(int i =0; i< s.size();i++){
10            if(i+1<s.size()&& mp[s[i]]<mp[s[i+1]]){
11                res-=mp[s[i]];
12
13            }
14            else{
15                res+=mp[s[i]];
16            }
17        }
18        return res;
19        
20    }
21};