class MinStack {
    stack<int>mp;
    stack<int>np;
public:
    MinStack() {
    }
    
    void push(int val) {
        mp.push(val);
        if(np.empty()) 
        {
            np.push(val);
        }
        else
        {
            np.push(min(mp.top(),np.top()));
        }
    }
    
    void pop() {
        mp.pop();
        np.pop();
    }
    
    int top() {
        return mp.top();
    }
    
    int getMin() {
       return np.top();
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