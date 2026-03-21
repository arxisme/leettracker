// Last updated: 21/03/2026, 16:43:49
1class Solution {
2public:
3    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
4        int start = 0;
5        int total = 0;
6        int tank=0;
7
8        for (int i = 0; i < gas.size(); i++) {
9            
10            int diff = gas[i] - cost[i];
11            total+=diff;
12            tank+=diff;
13            if (tank< 0) {
14                tank = 0;
15
16                start = i + 1;
17            } 
18        }
19        return total<0?-1:start;
20    }
21};
22