// Last updated: 12/04/2026, 18:57:49
1class Solution {
2public:
3    bool isValid(string s) {
4        stack<char> st;
5        for(auto c: s){
6            if(c == '(' || c=='['|| c=='{'){
7                st.push(c);
8            }
9            else{
10                if(st.empty())return false;
11                if(c == ')'){
12                    if(st.top()=='('){
13                        st.pop();
14
15                    }
16                    else return false;
17                }
18                else if(c == '}'){
19                    
20                    if(st.top()=='{'){
21                        st.pop();
22
23                    }
24                    else return false;
25                }
26                else{
27                    if(st.top()=='['){
28                        st.pop();
29
30                    }
31                    else return false;
32                }
33            }
34        }
35        return st.empty();
36        
37    }
38};