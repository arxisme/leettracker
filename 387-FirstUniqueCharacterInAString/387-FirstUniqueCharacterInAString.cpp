// Last updated: 19/03/2026, 21:15:04
class Solution {
public:
    int firstUniqChar(string s) {
        vector<int> v(26, 0);

        for(int i = 0 ; i< s.size(); i++){
            char c = s[i];

            
            v[c-'a']++;


        }
        for(int i = 0 ; i< s.size(); i++){
            char c = s[i];

            if(v[c-'a']==1)return i; 
           
        }
        return -1;
        
    }
};