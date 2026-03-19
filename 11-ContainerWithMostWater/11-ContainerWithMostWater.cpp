// Last updated: 19/03/2026, 21:19:01
class Solution {
public:
    int maxArea(vector<int>& height) {
        int res = 0;
        int i = 0;
        int j = height.size()-1;
        while(i<j){
            int water = (j-i)* min(height[j],height[i]);
            res  = max(res,water);
            if(height[j]>height[i] ){
                i++;
            }
            else{
                j--;
            }
        }
        return res;
    }
};