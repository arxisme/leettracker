// Last updated: 19/03/2026, 21:18:45
class Solution {
public:
    int strStr(string haystack, string needle) {
        string s="";
        int ns=needle.size();
        int i = 0;

        while(ns--){
            s+=haystack[i++];
        }
        if(s==needle)return 0;
        for(int k=1;i<haystack.size();k++){
            s.erase(0,1);
            s+=haystack[i++];
            if(s==needle)return k;;
            


        }
        return -1;
        
    }
};