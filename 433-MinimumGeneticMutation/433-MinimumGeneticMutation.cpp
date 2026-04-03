// Last updated: 04/04/2026, 03:31:08
1class Solution {
2public:
3    unordered_map<string, int> visited;
4    unordered_map<string, int> mp;
5    string g = "ACGT";
6    int minMutation(string startGene, string endGene, vector<string>& bank) {
7
8        for (auto& s : bank) {
9            mp[s] = 1;
10        }
11        // if (mp.find(startGene) != mp.end())
12        //     return -1;
13        if (startGene == endGene)
14            return 0;
15        queue<pair<string, int>> q;
16        q.push({startGene, 0});
17        while (!q.empty()) {
18            string s = q.front().first;
19            int dist = q.front().second;
20            q.pop();
21
22            visited[s] = 1;
23
24            for (int i = 0; i < s.size(); i++) {
25                for (int j = 0; j < g.size(); j++) {
26                    char c = s[i];
27                    s[i] = g[j];
28
29                    if (mp.find(s) != mp.end()) {
30                        if (s == endGene) {
31                            return dist + 1;
32                        }
33                        if (mp.find(s) != mp.end() &&
34                            visited.find(s) == visited.end()) {
35                            q.push({s, dist + 1});
36                        }
37                    }
38                    s[i] = c;
39                }
40            }
41        }
42        return -1;
43    }
44};