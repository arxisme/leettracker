// Last updated: 19/03/2026, 21:16:14
class MinStack {
    deque<int> st;
    
public:
    MinStack() {
        

    
    }
    
    void push(int val) {
       
        if(st.empty()|| st.front()>val){
           st.push_back(val);
           st.push_front(val);
        }
        else{
           st.push_back(val);
           st.push_front(st.front());
        }
        
    }
    
    void pop() {
        st.pop_back();
        st.pop_front();
  
        
    }
    
    int top() {
        return st.back();

        
    }
    
    int getMin() {
        return st.front();
        
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */