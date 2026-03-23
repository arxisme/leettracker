// Last updated: 23/03/2026, 20:56:59
1class Solution {
2public:
3    void rotate(vector<int>& nums, int k) {
4        int n = nums.size();
5        k = k % n;
6
7        int g = 0;
8        int j = __gcd(n, k);   // FIX
9
10        while (j--) {
11            int t = g++;
12            int start = t;
13            int s = nums[t];
14
15            t = (t + k) % n;
16
17            while (t != start) {
18                int temp = nums[t];
19                nums[t] = s;
20                s = temp;
21                t = (t + k) % n;
22            }
23
24            nums[start] = s;
25        }
26    }
27};