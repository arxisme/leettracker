// Last updated: 23/03/2026, 23:13:38
1class Solution {
2public:
3    int maxProfit(vector<int>& prices) {
4        int n = prices.size();
5        int mini = prices[0];
6        int res =0;
7        for(int i = 1; i<n;i++){
8            res = max(prices[i]-mini, res);
9            mini = min(prices[i],mini);
10            
11        }
12        return  res;
13        
14        
15    }
16};