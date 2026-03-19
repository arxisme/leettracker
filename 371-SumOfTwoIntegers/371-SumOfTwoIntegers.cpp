// Last updated: 19/03/2026, 21:15:07
class Solution {
public:
    int getSum(int a, int b) {
        while(b!= 0){
            int carry = (a & b) <<1;
            a = a^b;
            b = carry;

        }
        return a;
        
    }
};