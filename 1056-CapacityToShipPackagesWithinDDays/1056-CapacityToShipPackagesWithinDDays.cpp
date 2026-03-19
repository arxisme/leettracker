// Last updated: 19/03/2026, 21:14:15
class Solution {
public:
    bool canship(vector<int>& weights, int days, int w) {
        int sum = 0;
        int k = 0;
        for (int i : weights) {
            if (sum + i > w) {
                k++;
                sum=0;
            }
            sum+=i;
        }
        
        return (k+1) <= days;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int low = *max_element(weights.begin(), weights.end());
        int high = accumulate(weights.begin(), weights.end(),0);
        
        while (low < high) {
            int w = low+(high-low) / 2;
            if (canship(weights, days, w)) {
                high = w;
                
            } else {
                low = w+1;
            }
        }
        return low;
    }
};