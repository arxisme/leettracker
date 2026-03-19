// Last updated: 19/03/2026, 21:15:20
class Solution {
public:
    int hIndex(vector<int>& citations) {
        sort(citations.begin(),citations.end());
        int n = citations.size();
        for(int i = 0; i<n;i++){
            if(citations[i]>=n-i){
                return n-i;

            }
        }
        return citations[0];
    }
};