// Last updated: 19/03/2026, 21:16:43
class Solution {
public:
    bool isPalindrome(string s) {
        int j = s.size()-1;
        int i =0;
        
        while(i<j){
            while(!isalnum(s[i])&&i<s.size()){
                i++;
                if(i==s.size())return true;
            }

            while(!isalnum(s[j])&&j>=0)j--;
            if(tolower(s[i])!=tolower(s[j]))return false;
            i++;j--;

        }
        return true;
        
    }
};