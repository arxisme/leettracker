// Last updated: 19/03/2026, 21:15:27
class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int z=k;
        priority_queue<pair<int,int>> pq;
        int last = 0;
        while(k--){
            pq.push({nums[last],last});
            last++;
        }
        vector<int> res;
        res.push_back(pq.top().first);
        for(;last<nums.size(); last++){
            
            pq.push({nums[last],last});
            while(pq.top().second<last-z+1){
                pq.pop();
            }
            res.push_back(pq.top().first);

        }
        return res;
        
    }
};