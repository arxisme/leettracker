// Last updated: 19/03/2026, 21:14:54
class Solution {
public:
    int hammingDistance(int x, int y) {
         unsigned int a = x;
         unsigned int b = y;
        int k  =0;
        while( a!=0 || b!=0){
            k+=(a&1)^(b&1);
            a>>=1;
            b>>=1;


        }
        return k;
        
    }
};