// Last updated: 12/04/2026, 19:00:48
1class MinStack {
2public: 
3    stack<int> st;
4    stack<int> mst;
5    MinStack() {
6        
7    }
8    
9    void push(int val) {
10        st.push(val);
11        if(st.size()== 1){
12            mst.push(val);
13        }
14        else{
15            if(mst.top()<val){
16                mst.push(mst.top());
17            }
18            else{
19                mst.push(val);
20            }
21        }
22
23        
24    }
25    
26    void pop() {
27        st.pop();
28        mst.pop();
29        
30    }
31    
32    int top() {
33        return st.top();
34        
35    }
36    
37    int getMin() {
38        return mst.top();
39        
40    }
41};
42
43/**
44 * Your MinStack object will be instantiated and called as such:
45 * MinStack* obj = new MinStack();
46 * obj->push(val);
47 * obj->pop();
48 * int param_3 = obj->top();
49 * int param_4 = obj->getMin();
50 */