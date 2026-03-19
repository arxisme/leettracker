// Last updated: 19/03/2026, 21:18:35
class Solution {
public:
    vector<vector<int>> result;
    vector<int> curr;

    void solver(vector<int>& candi, int target, int start){
        if(start==candi.size())return;
        
        for(int i = start; i< candi.size(); i++){
            if(target-candi[i]<0)return;
            curr.push_back(candi[i]);
            if(target-candi[i]==0){
                result.push_back(curr);
                curr.pop_back();
                continue;
            }
            solver(candi, target-candi[i], i);
            curr.pop_back();
        }

    }


    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        solver(candidates, target,0);
        return result;

        
    }
};