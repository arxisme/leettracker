// Last updated: 19/03/2026, 21:14:09
class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        vector<vector<int>> result;
        sort(arr.begin(), arr.end());
        int min_diff = std::numeric_limits<int>::max();
        for (int i = 1; i < arr.size(); i++) {
            min_diff = min(min_diff, arr[i] - arr[i - 1]);
        }
        for (int i = 1; i < arr.size(); i++) {
            if (min_diff == arr[i] - arr[i - 1]) {
                result.push_back({arr[i-1], arr[i ]});
            }
        }
        return result;
    }
};