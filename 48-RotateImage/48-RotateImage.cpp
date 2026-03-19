// Last updated: 19/03/2026, 21:18:25
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int temp;
        for(int i = 0 ; i<matrix.size(); i++){
            for(int j=0 ; j<matrix[i].size(); j++){
                if(j>i){
                    temp = matrix[i][j];
                    matrix[i][j]= matrix[j][i];
                    matrix[j][i]= temp;
                    


                
               
                }
            }

        }
        int lenght = matrix[0].size();
        for(int i = 0 ; i<lenght; i++){
            for(int j =0; j<(lenght/2); j++){
                if(j<(lenght/2)){
                    temp = matrix[i][j];
                     matrix[i][j]= matrix[i][lenght-j-1];
                     matrix[i][lenght-j-1]= temp;




                }
                
                
            }

        }
        
    }
};