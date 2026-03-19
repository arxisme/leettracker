// Last updated: 19/03/2026, 21:14:04
class Solution {
public:
  
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> result;
        vector<int> temp = nums;
        unordered_map<int , int> map ;
        sort(temp.begin() , temp.end());
        for( int i = 0 ; i < temp.size(); i++){
            if(map.find(temp[i]) == map.end()){
                map[temp[i]] = i;
            }
            
        }
        for( int i = 0 ; i < nums.size(); i++){
            result.push_back(map[nums[i]]);


        }
        return result;
        


        
    }
};