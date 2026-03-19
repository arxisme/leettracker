// Last updated: 19/03/2026, 21:18:19
class Solution {
public:
    vector<vector<string>> result;
    vector<bool> r;
    vector<bool> c;
    vector<bool> d1;
    vector<bool> d2;
    
    vector<string> curr;
    
    vector<vector<string>> solveNQueens(int n) {
       

        
        
        r.resize(n,false);
        c.resize(n,false);
        d1.resize(2*n-1,false);
        d2.resize(2*n-1,false);
        solver(0,n);

       
        return result;


        
    }
    void solver(int row , int n ){
        string res(n,'.');
        if(row==n){
            result.push_back(curr);
            return;



        }
        for(int i = 0; i<n; i++){
            if(!c[i] && !d1[i-row+n-1]&& !d2[i+row]){
                c[i]=1;  d1[i-row+n-1]=1 ;d2[i+row]=1;
                res[i]='Q';
                curr.push_back(res);

                solver(row+1,n);
                curr.pop_back();
                res[i]='.';
              

                c[i]=0;  d1[i-row+n-1]=0 ;d2[i+row]=0;


            }
        }
    }

};