// Last updated: 19/03/2026, 21:17:57
class Solution {
public:
    int mySqrt(int x) {
        if(x ==0) return 0;
        long long j = 1;
        int result = 1;
        for(int i =3 ; i<2147483647;i= i+2 ){
             j = j+i;
            if(j>x) return result;
            else result++;
           
         }
         
         return result;

        
    }
};