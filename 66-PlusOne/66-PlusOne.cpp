// Last updated: 19/03/2026, 21:18:01
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
       bool x = true;
       int len = digits.size();
      
       for(int i = len-1 ; i>=0&& x;i-- ){
        if(digits[i]==9){
            digits[i]=0;
            if(i-1<0){
                digits.insert(digits.begin(), 1);
                return digits;
            }
        }
        else{
            digits[i]= digits[i]+1;
            x =false;
        }
       }
       return digits;
        
    }
};