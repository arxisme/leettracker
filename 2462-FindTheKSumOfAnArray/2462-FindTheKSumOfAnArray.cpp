// Last updated: 19/03/2026, 21:13:45
class Solution {
public:
    long long kSum(vector<int>& nums, int k) {
        long long base = 0;
        for (int &x : nums) {
            if (x > 0) base += x;
            x = abs(x);
        }
        sort(nums.begin(), nums.end());
        
        using T = pair<long long, int>;
        priority_queue<T, vector<T>, greater<T>> pq;
        pq.push({nums[0], 0});
        
        long long removed = 0;
        for (int i = 1; i < k; ++i) {
            auto [sum_removed, idx] = pq.top();
            pq.pop();
            removed = sum_removed;
            
            if (idx + 1 < nums.size()) {
                pq.push({sum_removed + nums[idx + 1], idx + 1});
                pq.push({sum_removed - nums[idx] + nums[idx + 1], idx + 1});
            }
        }
        return base - removed;
    }
};
