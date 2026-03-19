// Last updated: 19/03/2026, 21:14:38
class Solution {
public:
    int countSubstrings(string s) {
        int count=0;

        auto expand=[&](int left ,int right){
            while(left>=0&&right<s.size()&& s[left]==s[right]){
                count++;
                left--;
                right++;


            }
        };

        for(int i = 0; i<s.size();i++){
            expand(i,i);
            expand(i,i+1);
        }
        return count;
        
    }
};