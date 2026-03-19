// Last updated: 19/03/2026, 21:18:18
class Solution {

public:
    int res =0;
    unordered_map<int, int> rw;
    unordered_map<int, int> cm;
    unordered_map<int, int> di1;
    unordered_map<int, int> di2;
    int totalNQueens(int n) {
        backtrack(n,0);
        return res;
    }
    void backtrack(int n, int row){
        if(row== n){
            res++;
            return;
        }
        for(int i =0;  i <n; i++){
            if(cm[i]==0&&di1[i-row]==0&&di2[i+row]==0){
                cm[i]=1;di1[i-row]=1;di2[i+row]=1;
                backtrack(n, row+1);
                cm[i]=0;di1[i-row]=0;di2[i+row]=0;
            }
        }
    }
};