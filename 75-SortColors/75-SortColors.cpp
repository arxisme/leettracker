// Last updated: 19/03/2026, 21:17:48
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int num0 = 0;
        int num1 = 0;
        int temp ;
        for(int i = 0 ; i< nums.size() ; i++){
            if(nums[i] ==0 ){
                if(num1==num0){
                    temp =nums[num0];
                    nums[num0] = 0;
                    num0++;
                    num1++;


                    nums[i]=temp;

                }
                else{
                    temp = nums[num1];
                    nums[num0]=0;
                    nums[i]=temp;
                    nums[num1]= 1;
                    num0++;
                    num1++;


                }

            }
            else if(nums[i]==1){
                temp = nums[num1];
                nums[num1]=1;
                num1++;
                nums[i]= temp;
            }
        }
        // for(int i = 0 ; i<nums.size(); i++){
        //     if(nums[i]== 0){
        //         temp=nums[num0];
        //         nums[num0] = 0;
        //         nums[i]=temp;
        //         num0++;
                

        //     }
        // }
        // num1= num0;
        // for(int i = num0 ; i<nums.size(); i++){
        //     if(nums[i]==1 ){
        //         temp=nums[num1];
        //         nums[num1] = 1;
        //         nums[i]=temp;
        //         num1++;
                

        //     }
        // }
        
    }
};