// Last updated: 23/03/2026, 20:18:03
1class Solution {
2public:
3    void rotate(vector<int>& nums, int k) {
4        int n = nums.size();
5        k %= n;
6
7        int count = 0;
8
9        for (int start = 0; count < n; start++) {
10            int current = start;
11            int prev = nums[start];
12
13            do {
14                int next = (current + k) % n;
15                int temp = nums[next];
16                nums[next] = prev;
17                prev = temp;
18                current = next;
19                count++;
20            } while (start != current);
21        }
22    }
23};