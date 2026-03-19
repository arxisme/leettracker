// Last updated: 19/03/2026, 21:13:48
class Solution {
public:
    int specialTriplets(vector<int>& nums) {
        unordered_map<int,int> sng;
        unordered_map<int,int> dbl;

        const int MOD = 1000000007;
        long long c = 0;   
  

        for (int x : nums) {
            
            if (dbl.find(x) != dbl.end()) {
                c += dbl[x];
                c %= MOD;
            }
            
            if (sng.find(2 * x) != sng.end()) {
                dbl[2 * x] += sng[2 * x];
                dbl[2 * x] %= MOD;
            }

            sng[x]++;
        }

     

        return (int)(c % MOD);
    }
};
