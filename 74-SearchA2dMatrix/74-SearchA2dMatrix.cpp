// Last updated: 19/03/2026, 21:17:50
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int r = matrix.size();
        int cols = matrix[0].size()-1;
        int top = 0 ;
        int bottom = r-1;
    
        while (top <= bottom) {
            int mid = top + (bottom - top) / 2;
            if (matrix[mid][0] <= target && matrix[mid][cols] >= target) {
                int r = mid;
                int left = 0;
                int right = cols;
                while (left <= right) {
                    int mid = left + (right - left) / 2;
                    if (matrix[r][mid] == target)
                        return 1;
                    else if (matrix[r][mid] > target) {
                        right = mid - 1;
                    } else {
                        left = mid + 1;
                    }
                }
                return 0;

            } else if (matrix[mid][cols] > target) {
                bottom = mid - 1;
            } else {
                top = mid + 1;
            }
        }
        return 0;
     
        
       
    }
    
   
};