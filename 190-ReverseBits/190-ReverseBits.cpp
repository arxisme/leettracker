// Last updated: 19/03/2026, 21:16:06
class Solution {
public:
    int reverseBits(int n) {
        uint32_t ans = 0;
        for(int i = 0; i < 32; ++i){
            uint32_t  temp = n & 1;
            ans += (temp << (31 - i));
            n = n >> 1;
        }
        return ans;
    }
};