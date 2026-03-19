// Last updated: 19/03/2026, 21:14:30
class Solution {
public:
    vector<int> partitionLabels(string s) {
        vector<int> last(26,-1);
        for(int i =0; i< s.size(); i++){
            last[s[i]-'a']=i;
        }

        int start =0,end=0;
        vector<int> res;
        for(int i= 0 ; i< s.size(); i++){
            end=max(last[s[i]-'a'],end);
            if(i == end){
                res.push_back(end-start+1);
                start=i+1;
            }
        }
        return res;
    }
};