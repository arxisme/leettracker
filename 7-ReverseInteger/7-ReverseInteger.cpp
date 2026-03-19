// Last updated: 19/03/2026, 21:19:03
class Solution {
public:
    int reverse(int x) {
        int a = abs(x);
        
        int sign = 1;
        if(x<0){
            sign = -1;
        }
        string str = to_string(a);
        std::reverse(str.begin() , str.end());
        if(str.length() <10){
            return stoi(str)*sign;
        }
        string base = "2147483648";
        int flag = 0;
        for(int i = 0 ; i<str.length() && flag ==0; i++){
            if(str[i]>base[i]){
                flag =1;
            }
            if(str[i]<base[i]){
                flag = -1;
            }


        }
        if(flag == 1){
            return 0;
        }
        return stoi(str)*sign;


    }
};