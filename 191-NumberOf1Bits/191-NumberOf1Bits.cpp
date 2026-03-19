// Last updated: 19/03/2026, 21:16:05
class Solution {
public:
    int hammingWeight(int n) {
        int k =0;

        while(n!=0){
            if( n&1 ==1 )k++;
            n>>=1;

        }
        return k;
        
    }
};