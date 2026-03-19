// Last updated: 19/03/2026, 21:15:10
class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> ans;
        ans.push_back(0);
        if(n==0){
            return ans;
        }

      
        int k  =0;
        int temp=0;
        for(int i = 1; i< n+1; i++){
            temp = i-1;
            while(temp%2 !=0 ){
                temp>>=1;
                k++;
            }
            if(k ==0 ){
                ans.push_back(ans[i-1]+1);

            }
            else{
                ans.push_back(ans[i-1]-k+1);
                k=0;

            }
            


        }
        return ans;
        
    }
};