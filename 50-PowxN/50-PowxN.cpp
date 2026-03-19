// Last updated: 19/03/2026, 21:18:21
class Solution {
public:

    double myPow(double x, int n) {
        if(n<0){
            x= 1/x;

        }
        double result = 1;
        long num = labs(n);
        while(num){
            if(num & 1){
                result*= x;
            }
            x *=x;
            num>>= 1;
        }
        return result;



        }


        
};