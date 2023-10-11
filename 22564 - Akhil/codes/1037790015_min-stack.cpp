class MinStack {
public:
int temp,min=INT_MAX; 
stack<int>MyStack1,MyStack2;
    MinStack() {
        // min=INT_MAX;
    }
    
    void push(int val) {
        MyStack1.push(val);
        if(min>=val) min=val;
        MyStack2.push(min);
    }
    
    void pop() { 
        if(!MyStack1.empty()){
            temp=MyStack2.top();
            MyStack1.pop();
            MyStack2.pop();
        }
        if(MyStack2.empty()) min=INT_MAX;
        else {
            if(min==temp){
                min=MyStack2.top();
            }
        }
    }
    
    int top() {
        return MyStack1.top();
    }
    
    int getMin() {
        return MyStack2.top();
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