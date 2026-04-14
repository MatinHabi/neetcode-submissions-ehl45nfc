class MinStack {
private:
    stack<int> s;
    stack<int> minStack;
public:
    MinStack(){}
    
    void push(int val) {
       s.push(val);
       val = min(minStack.empty() ? val : minStack.top(), val);
       minStack.push(val);
    }
    
    void pop() {
        minStack.pop();
        s.pop();
    }
    
    int top() {
        return s.top();
    }
    
    int getMin() {
        return minStack.top();
    }
};
