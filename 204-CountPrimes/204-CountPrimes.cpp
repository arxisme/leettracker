// Last updated: 19/03/2026, 21:15:59
class Solution {
public:
    int countPrimes(int n) {
        if(n<=2) return 0;
        vector<bool> map(n, true);
        map[0]=false;
        map[1]=false;
        int i=2;
        while(i*i<n){
            if(map[i]){
                for(int j=i*i;j<n;j=j+i){
                    map[j]=false;
                }
            }
            i++;
        }
        int r =0;
      for(bool x:map) {
        if(x) r++;
      }
      return r;
    }
   
};