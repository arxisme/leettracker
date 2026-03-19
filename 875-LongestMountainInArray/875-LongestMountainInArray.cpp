// Last updated: 19/03/2026, 21:14:25
class Solution {
public:
    int longestMountain(vector<int>& arr) {
        int start = 0;
        int peaked = 0;
        int len = 0; 
        int n = arr.size();

        for (int i = 1; i < n; i++) {
            if (arr[i] == arr[i - 1]  ) {
                if(!peaked){
                    start =i;
                }
                else if (peaked == 1){
                    len = max(len , i-start);
                    peaked =0;
                    start = i;
                }
                else{
                   start =i;
                   peaked =0;
                }
            }
            else if(arr[i]<arr[i-1]){
                if(peaked==2){
                    peaked =1;
                }else if(peaked == 0){
                    start = i;
                }

            }
            else if(arr[i]>arr[i-1]){
                if(peaked==1){
                    len= max(len, i-start);
                    start = i-1;
                    peaked =2;

                }
                else if(peaked==0){
                    peaked =2;
                    start = i-1;
                }
            }
            if(i == n-1 && peaked ==1){
                len = max(len , i-start+1);
            }
            
        }

        return len;
    }
};
