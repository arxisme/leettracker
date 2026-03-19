// Last updated: 19/03/2026, 21:18:23
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> mp;
        for(string s: strs){
            string k = s;
            sort(s.begin(),s.end());
            if(mp.find(s)== mp.end()){
                vector<string> v;
                mp[s]=v;
            }
            mp[s].push_back(k);

        }
        vector<vector<string>> res;
        for(auto& [_,a]:mp){
            res.push_back(a);


        }
        return res;
    }
    
};