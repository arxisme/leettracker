// Last updated: 19/03/2026, 21:16:47
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mini = prices[0];
        int res=INT_MIN;
        for(int i =1; i<prices.size();i++ ){
            res = max(res, prices[i]-mini);

            mini = min(mini, prices[i]);
        }
        return res<0?0:res;
        
    }
};