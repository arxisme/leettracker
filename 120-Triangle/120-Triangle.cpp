// Last updated: 19/03/2026, 21:16:49
class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        vector<vector<int>> mem;
        if (triangle.size() == 1)
            return triangle[0][0];
        mem.push_back(triangle[0]);
        int mini = INT_MAX;
        for (int i = 1; i < triangle.size(); i++) {
            mem.push_back({});
            for (int j = 0; j < triangle[i].size(); j++) {
                int a = j >= triangle[i - 1].size() ? INT_MAX : mem[i - 1][j];
                int b = j - 1 < 0 ? INT_MAX : mem[i - 1][j - 1];
                int sum = min(a, b) + triangle[i][j];
                if (i == triangle.size() - 1) {
                    mini = min(mini, sum);
                }

                mem[i].push_back(sum);
            }
        }
        return mini;
    }
};