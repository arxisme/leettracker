// Last updated: 19/03/2026, 21:18:11
class Solution {
public:
    static bool comp(const vector<int>& a, const vector<int>& b) {
        if(a[0]!=b[0])return a[0]<b[0];
        return a[1]<b[1];
    };
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end(), comp);
        vector<vector<int>> res;
        for(int i = 0; i<intervals.size();i++){
            int k =1;
            while(i+k <intervals.size() && intervals[i][1]>=intervals[i+k][0]){
                intervals[i][1]=max(intervals[i][1],intervals[i+k][1]);
                k++;
                
            }
            res.push_back(intervals[i]);
            i=i+k-1;
            
        }
        return res;
    }
};