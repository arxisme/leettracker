// Last updated: 24/03/2026, 01:24:30
1class Solution {
2public:
3    vector<int> twoSum(vector<int>& numbers, int target) {
4        int j=numbers.size()-1;
5
6        int i = 0;
7        while(i<j){
8            if(numbers[i]+numbers[j]==target){
9                return {i+1,j+1};
10            }
11            else if(numbers[i]+numbers[j]<target)i++;
12            else j--;
13        }
14       
15       
16        return {};
17        
18    }
19};