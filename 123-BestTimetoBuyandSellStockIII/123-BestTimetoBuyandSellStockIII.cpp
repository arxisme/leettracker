// Last updated: 30/03/2026, 15:13:29
1class Solution {
2public:
3    int maxProfit(vector<int>& prices) {
4        int n = prices.size();
5        int res = 0;
6        int mini = prices[0];
7        vector<int> first(prices.size(),0);
8    
9        for(int i = 1; i<n;i++){
10            res = max(prices[i]-mini, res);
11            first[i]=res;
12            mini = min(prices[i],mini);
13            
14        }
15        res =0;
16        int final =0;
17
18        int maxi=prices[n-1];
19        for(int i = n-1; i>=0;i--){
20            res = max(maxi-prices[i], res);
21            final = max( final,first[i]+res);
22
23            
24            maxi = max(prices[i],maxi);
25            
26        }
27        return  final;
28        
29        
30    }
31};