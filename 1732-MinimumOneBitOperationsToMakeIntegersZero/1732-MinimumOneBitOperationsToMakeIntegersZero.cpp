// Last updated: 19/03/2026, 21:13:59
class Solution {
public:
    int minimumOneBitOperations(int n) {
        if(n==0)return 0;
        if (n==1)return 1;
        int len = floor(log2(n));
        int i =0;
        int res = 0;
        while(len>=0){
            int j = (1 << len) & n;
            int k = 0;
            if(j) k =1;

            if(k^i){
                res+= 1<<len;
            }
            i =k^i;
            
            len--;

        }
        

        return res;
        
    }
   

};
