class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int> result(temperatures.size(),0);
        stack<int>mystack;
        for(int i=temperatures.size()-1;i>=0;i--) {
            while(!mystack.empty()&&temperatures[i]>=temperatures[mystack.top()]) mystack.pop();
            if(!mystack.empty()) result[i]=mystack.top()-i;
            else result[i]=0;
            mystack.push(i);
        
        }
        return result;
    }
};
