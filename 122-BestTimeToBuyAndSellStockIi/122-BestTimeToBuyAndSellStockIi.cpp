// Last updated: 19/03/2026, 21:16:46
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;
        int prev = INT_MAX;
        for (int i = 0; i < prices.size(); i++) {
            if (i == prices.size() - 1) {
                if (prev < prices[i]) {
                    profit += prices[i] - prev;
                }

            } else {
                if (prices[i] < prev) {
                    prev = prices[i];
                    continue;
                }
                if (prices[i + 1] <= prices[i]) {
                    profit += prices[i] - prev;
                    prev = prices[i+1];
                }
            }
        }
        return profit;
    }
};