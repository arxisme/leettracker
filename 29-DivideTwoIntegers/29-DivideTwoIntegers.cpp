// Last updated: 19/03/2026, 21:18:44
class Solution {
public:
    int divide(int dividend, int divisor) {
    if (dividend == INT_MIN && divisor == -1)
        return INT_MAX;
    if (dividend == INT_MIN && divisor == 1)
        return INT_MIN;

    long long dvd = dividend;
    long long dvs = divisor;
    dvd = dvd < 0 ? -dvd : dvd;
    dvs = dvs < 0 ? -dvs : dvs;
    
    int result = 0;

    while (dvd >= dvs) {
        long long temp = dvs, multiple = 1;
        while (dvd >= (temp << 1)) {
            temp <<= 1;
            multiple <<= 1;
        }
        dvd -= temp;
        result += multiple;
    }

    return (dividend > 0) == (divisor > 0) ? result : -result;
        

        
    }
};