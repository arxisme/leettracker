// Last updated: 19/03/2026, 21:13:54
class Solution {
public:
    int countOperations(int num1, int num2) {
        int c=0;
        while(num1&&num2){
            if(num1>=num2)num1-=num2;
            else num2-=num1;
            c++;
        }
        return c;
        
    }
};