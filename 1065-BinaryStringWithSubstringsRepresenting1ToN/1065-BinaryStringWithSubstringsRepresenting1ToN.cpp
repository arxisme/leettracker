// Last updated: 19/03/2026, 21:14:12
class Solution {
public:
    bool queryString(string s, int n) {
        for(int i = 1 ;i <= n ; i++){
            string a ="";
            if(i==0) a ="0";
            int k  = i;
            while(k!=0){
                int rem = k%2;

                a = to_string(rem)+a;
                k = k/2;


            }
            if(s.find(a) != std::string::npos){
                continue;
            }
            else {
                return false;
            }
        }
        return true;

        
    }
};