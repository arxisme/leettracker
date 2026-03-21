// Last updated: 21/03/2026, 16:52:37
1class Solution {
2public:
3    vector<int> productExceptSelf(vector<int>& nums) {
4        long long  p = 1;
5        int z =0;
6        vector<int> res(nums.size(),0);
7        vector<int> before(nums.size(), 1);
8        vector<int> after(nums.size(),1);
9        int b=1;
10        int a=1;
11        for(int i = 0 ; i<nums.size(); i++){
12            b*=nums[i];
13            a*=nums[nums.size()-1-i];
14            before[i]=b;
15            after[nums.size()-1-i]=a;
16
17        }
18        res[0]=after[1];
19        res[nums.size()-1]=before[nums.size()-2];
20        for(int i = 1 ; i<nums.size()-1; i++){
21           res[i]=before[i-1]*after[i+1];
22
23        }
24
25
26
27        
28      
29        return res;
30    }
31};