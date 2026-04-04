// Last updated: 04/04/2026, 20:28:46
1class Solution {
2public:
3    int myAtoi(string s) {
4        int start = 0;
5        while (s[start] == ' ') {
6            start++;
7        }
8        int sign = 1;
9        if (s[start] == '-') {
10            start++;
11            sign = -1;
12
13        } else if (s[start] == '+') {
14            start++;
15        }
16
17        int num = 0;
18        int leftl = 0;
19        int leftr = 0;
20        for (int i = start; i < s.size(); i++) {
21
22            int dig = s[i] - '0';
23            if (dig < 0 || dig > 9) {
24                return num * sign;
25            }
26
27            if (sign == -1) {
28
29                if (num*sign < INT_MIN / 10 || (num*sign == INT_MIN / 10 && dig >= 8)) {
30                    return INT_MIN;
31                }
32            }
33            if (sign == 1) {
34
35                if (num > INT_MAX / 10 || (num == INT_MAX / 10 && dig >= 7)) {
36                    return INT_MAX;
37                }
38            }
39            num = num * 10 + dig;
40        }
41        return num * sign;
42    }
43};