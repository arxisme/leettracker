// Last updated: 19/03/2026, 21:18:55
class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        map<char, char> mp = {{'[',']'},{'(',')'},{'{','}'}};
        for( char c : s){
            if( c =='(' || c =='{'||c=='['){
                st.push(c);
            }
            else if(st.empty()) return false;
            else if(c ==mp[st.top()] ){
                st.pop();
            }
            else{
                return false;
            }
        }
        return st.empty()?true:false;
        
    }
};