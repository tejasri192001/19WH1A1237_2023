class MinStack {
public:
    /*MinStack() {
        
    }*/
    stack<int> st,mn;
    
    void push(int val) {
        if(st.empty() || val<=mn.top())
            mn.push(val);
        st.push(val);
    }
    
    void pop() {
        if(st.top()==mn.top()) 
            mn.pop();
        st.pop();
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        return mn.top(); 
    }
};
