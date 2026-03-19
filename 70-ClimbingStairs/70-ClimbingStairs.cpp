// Last updated: 19/03/2026, 21:17:56
class Solution {
public:
    int climbStairs(int n) {
        if(n==1)return 1;
        if(n==2)return 2;
        vector<int> res(n+1,0);
        res[0]=0;res[1]=1;res[2]=2;
        for(int i = 3; i<=n;i++){
            res[i]=res[i-1]+res[i-2];

        }
        return res[n];

        
        
    }
};