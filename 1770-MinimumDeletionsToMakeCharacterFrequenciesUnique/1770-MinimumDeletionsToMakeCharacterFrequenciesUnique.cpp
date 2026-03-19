// Last updated: 19/03/2026, 21:13:58
class Solution {
public:
    int minDeletions(string s) {
      
        vector<int> freq(26,0);
        for(auto i : s){
            freq[i-'a']+=1;
        }
        int res=0;
        sort(freq.begin(),freq.end());
        for(int i =24;i>=0;i--){
            if(freq[i]==0)break;
            if(freq[i]>=freq[i+1]){
                int prev = freq[i];
                freq[i]=max(freq[i+1]-1,0);
                res+=(prev-freq[i]);

            }
        }
       
        return res;


        
        
    }
};