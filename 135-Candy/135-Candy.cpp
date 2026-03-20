// Last updated: 21/03/2026, 01:18:08
1class Solution {
2public:
3    int candy(vector<int>& ratings) {
4        int n = ratings.size();
5        vector<int> candies(n, 1);
6
7        for (int i = 1; i < n; i++) {
8            if (ratings[i] > ratings[i - 1]) {
9                candies[i] = candies[i - 1] + 1;
10            }
11        }
12
13   
14        for (int i = n - 2; i >= 0; i--) {
15            if (ratings[i] > ratings[i + 1]) {
16                candies[i] = max(candies[i], candies[i + 1] + 1);
17            }
18        }
19
20        return accumulate(candies.begin(), candies.end(), 0);
21    }
22};