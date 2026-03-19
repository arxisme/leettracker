// Last updated: 19/03/2026, 21:14:01
class Solution {
public:
    int dp[101][101] ;
    int solver(int start, int end, vector<int>& cuts , int left , int right){
        if(left > right) return 0;
        if(dp[left][right] != -1) return dp[left][right] ;
        int cost = INT_MAX;
        for(int i = left ;  i<= right ; i++){
            int left_cost = solver(start , cuts[i], cuts , left , i -1);
            int right_cost = solver(cuts[i] , end , cuts, i +1, right);
            int curr_cost = (end -start) + left_cost + right_cost;
            cost = min(cost, curr_cost);
        }
         dp[left][right] = cost;
         return cost;
    }
    int minCost(int n, vector<int>& cuts) {
         memset(dp,-1,sizeof(dp));
        sort(cuts.begin(), cuts.end());
       
        
        return solver(0,n , cuts, 0, cuts.size()-1);
        
    }
   
    
};