// Last updated: 23/03/2026, 23:43:59
1class Solution {
2public:
3    int maxProfit(vector<int>& prices) {
4        int profit = 0;
5        int n = prices.size();
6        int lastMin =0;
7        for(int i = 1 ; i<n;i++){
8            while(i<n && prices[i]>=prices[i-1]){
9                i++;
10            }
11           
12            profit+=(prices[i-1]-prices[lastMin]);
13            
14            lastMin=i;
15        }
16
17        return profit;
18    }
19};