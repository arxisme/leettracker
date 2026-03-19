// Last updated: 19/03/2026, 21:17:53
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<vector<int>> val;
        val = matrix;
       
        for(int i = 0 ; i < matrix.size(); i++){
            for(int j=0 ; j < matrix[i].size() ; j++){
                if(matrix[i][j]==0 ){
                    for(int a = 0 ; a<j; a++ ){
                        matrix[i][a]=0; 
                    }
                    for(int a = j+1 ; a < matrix[i].size(); a++){
                        val[i][a]=0;

                    }

                    for(int a = 0 ; a < i; a++){
                        matrix[a][j]=0;

                    }
                    for(int a = i+1 ; a < matrix.size(); a++){
                        val[a][j]=0;

                    }


                    

                }
                else{
                    if(val[i][j]==0){
                        matrix[i][j]=0;

                    }



                }
            }
        }
        
    }
};