// Last updated: 19/03/2026, 21:17:43
class Solution {
public:
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> res;
        vector<int> comb(k);

        for(int i = 0; i < k; i++)
            comb[i] = i + 1;

        while(true){
            res.push_back(comb);
            int i = k-1;
            while(i>=0 && comb[i]==n-k+i+1)i--;
            if(i<0)break;
            comb[i]++;
            for(int j = i+1; j<k;j++){
                comb[j]=comb[j-1]+1;
            }

        }
        return res;

        return res;
    }
};