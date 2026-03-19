// Last updated: 19/03/2026, 21:14:29
class Solution {
public:
    string reorganizeString(string s) {
        for(int i = 0;i<s.size()-1;i++){
            if(s[i]==s[i+1]){
                int j =i+1;
                int f =1;
                while(s[j]==s[i]){
                    j++;
                    if(j==s.size()) {
                        f = 0;
                    }
                }
                if(f!=0){
                     char t= s[j];
                s[j]=s[i+1];
                s[i+1]=t;
                }
                f =1;
               
            }

        }
        for(int i = s.size();i>0;i--){
            if(s[i]==s[i-1]){
                int j =i-1;
                while(s[j]==s[i]){
                    j--;
                    if(j<0) return "";
                }
                char t= s[j];
                s[j]=s[i-1];
                s[i-1]=t;
            }

        }
        return s;
        
    }
};