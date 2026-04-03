// Last updated: 03/04/2026, 22:26:37
1class Solution {
2public:
3    unordered_map<string, vector<pair<string, double>>> graph;
4    unordered_map<string, bool> mp;
5
6    
7
8    vector<double> calcEquation(vector<vector<string>>& equations, vector<double>& values, vector<vector<string>>& queries) {
9        for(int i = 0  ; i< equations.size(); i++){
10            auto vars = equations[i];
11            double val = values[i];
12            string a = vars[0];
13            string b = vars[1];
14            graph[a].push_back({b, val});
15            graph[b].push_back({a, 1/val});
16        }
17        vector<double> res;
18        for(auto q : queries){
19            mp.clear();
20            res.push_back(dfs(q[0], q[1], 1));
21        }
22        return res;
23
24        
25    }
26    double dfs(string a, string b, double curr){
27        if(mp.find(a)!=mp.end()) return -1;
28        mp[a]=1;
29        for(auto edge : graph[a]){
30            
31            if(edge.first==b){
32                return  curr*edge.second;
33            }
34            else {
35                double k = dfs(edge.first, b, curr*edge.second);
36                if(k!=-1){
37                    return k;
38                }
39            }
40        }
41        return -1.0;
42    }
43};