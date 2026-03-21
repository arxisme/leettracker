// Last updated: 21/03/2026, 17:01:21
1class Solution {
2public:
3    vector<int> productExceptSelf(vector<int>& nums) {
4        if(nums.size()==1)return nums;
5        int n = nums.size();
6        vector<int> pre(n,1);
7        vector<int> after(n,1);
8        for(int i =0;i<n;i++){
9            pre[i]=i-1+1?pre[i-1]*nums[i]:nums[i];
10            after[n-i-1]=n-i<n?after[n-i]*nums[n-i-1]:nums[n-i-1];
11
12        }
13        vector<int> res(n,1);
14        res[0]=after[1];
15        res[n-1]=pre[n-2];
16        for(int i = 1; i<n-1;i++){
17            res[i]=after[i+1]*pre[i-1];
18
19
20        }
21        return res;
22
23       
24    }
25};