// Last updated: 19/03/2026, 21:18:09
class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        vector<vector<int>> res;
        
        for (auto &it : intervals) {
            if (it[1] < newInterval[0]) {
                res.push_back(it);
            }
            else if (it[0] > newInterval[1]) {
                res.push_back(newInterval);
                newInterval = it;  // shift newInterval forward
            }
            else {
                // merge
                newInterval[0] = min(newInterval[0], it[0]);
                newInterval[1] = max(newInterval[1], it[1]);
            }
        }
        
        res.push_back(newInterval);
        return res;
    }
};