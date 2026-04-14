class MinStack {
private:
    stack<int> main, min;
public:
    MinStack(){}
    
    void push(int val) {
        main.push(val);
        if(min.empty()){
            min.push(val);
        }else if(val <= min.top()){
            min.push(val);
        }
    }
    
    void pop() {
        if(main.top() == min.top()){
            min.pop();
        }
        main.pop();
    }
    
    int top() {
        return main.top();
    }
    
    int getMin() {
        return min.top();
    }
};
