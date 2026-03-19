// Last updated: 19/03/2026, 21:17:31
class Solution {
public:
    vector<int> grayCode(int n) {
        
        vector<int> res;
        for(int i = 0; i < (1 << n) ; i++){
            res.push_back(i ^ (i >> 1));
        }
        return res;


        
        
    }
    
};