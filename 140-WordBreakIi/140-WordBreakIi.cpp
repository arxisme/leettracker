// Last updated: 19/03/2026, 21:16:29
class Solution {
public:
    vector<string> wordBreak(string s, vector<string>& wordDict) {
        unordered_map<string, int> mp;
        for(auto s: wordDict){
            mp[s]=1;
        }
        vector<string> res;
        solver(s, mp, 0,res, "");
        return res;
        
    }
    void solver(string s, unordered_map<string, int> &mp, int start,vector<string> &res, string curr){
        if(start == s.size()){
            res.push_back(curr);
            return ;
        }
        else if (start > s.size()) {
            return;
        }
        
       
        for(int i = 1; start+i<=s.size(); i++){
            if(mp[s.substr(start,i)]){
                if(curr==""){
                     solver(s, mp, start+i,res,s.substr(start,i) );

                }
                else{
                    solver(s, mp, start+i,res,curr+" "+s.substr(start,i) );

                }
               

               
            }

            
        }
        
    }

};