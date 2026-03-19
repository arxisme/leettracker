// Last updated: 19/03/2026, 21:14:07
class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        int result = 0;
        int a, b , c;
        int n = points.size();
        for(int i = 1 ; i < n ; i++){
            a = points[i][0] -points[i-1][0];
            b = points[i][1] -points[i-1][1];

            result = result+ min(abs(a) , abs(b)) + abs(abs(a) -abs(b));


        }
        return result;

        
    }
};