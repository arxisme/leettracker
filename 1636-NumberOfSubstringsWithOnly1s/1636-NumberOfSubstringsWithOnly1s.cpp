// Last updated: 19/03/2026, 21:14:02
class Solution {
public:
    int numSub(string s) {
         const long long MOD = 1000000007LL;
        const long long INV2 = 500000004LL;
        long long k = 0;
        long long res=0;
        for (auto i:s) {
            

            if (i == '0') {
                if (k != 0) {
                    long long add = ( (k % MOD) * ((k + 1) % MOD) ) % MOD;
                add = (add * INV2) % MOD;
                res = (res + add) % MOD;
                    k = 0;
                }
            }

            if (i == '1')
                k++;
        }
        if(k>0){
            
             long long add = ( (k % MOD) * ((k + 1) % MOD) ) % MOD;
                add = (add * INV2) % MOD;
                res = (res + add) % MOD;
        }

        return res;
    }
};