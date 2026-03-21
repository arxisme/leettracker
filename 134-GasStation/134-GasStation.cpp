// Last updated: 21/03/2026, 16:40:55
1class Solution {
2public:
3    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
4        int total = 0;     
5        int tank = 0;       
6        int start = 0;
7
8        for (int i = 0; i < (int)gas.size(); ++i) {
9            int diff = gas[i] - cost[i];
10            total += diff;
11            tank  += diff;
12
13            if (tank < 0) {
14                tank = 0;
15                start = i + 1;
16            }
17        }
18
19        return (total >= 0) ? start : -1;
20    }
21};
22