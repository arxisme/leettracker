// Last updated: 19/03/2026, 21:18:33
class Solution {
public:
    vector<vector<int>> result;
    vector<int> curr;

    void dfs(vector<int>& c, int start, int target) {

        if(target == 0){
            result.push_back(curr);
            return;
        }

        for(int i = start; i < c.size(); i++){

            // skip duplicates at same depth
            if(i > start && c[i] == c[i-1])
                continue;

            // pruning
            if(c[i] > target)
                break;

            curr.push_back(c[i]);

            dfs(c, i + 1, target - c[i]);

            curr.pop_back();
        }
    }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        dfs(candidates, 0, target);
        return result;
    }
};