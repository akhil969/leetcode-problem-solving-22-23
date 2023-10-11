class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<string> mystack;
        int i=0,j=0;
        int temp;
        while(i<tokens.size()){
            if(tokens[i][0]=='-'&& tokens[i].length()!=1) j=1;
            switch(tokens[i][j]){
                case '+':
                temp= stoi(mystack.top());
                mystack.pop();
                temp=temp+stoi(mystack.top());
                mystack.pop();
                mystack.push(to_string(temp));break;
                case '*':
                temp= stoi(mystack.top());
                mystack.pop();
                temp=temp*stoi(mystack.top());
                mystack.pop();
                mystack.push(to_string(temp));break;
                case '-':
                temp= stoi(mystack.top());
                mystack.pop();
                temp=stoi(mystack.top())-temp;
                mystack.pop();
                mystack.push(to_string(temp));break;
                case '/':
                temp= stoi(mystack.top());
                mystack.pop();
                temp=stoi(mystack.top())/temp;
                // cout<<temp<<"";
                mystack.pop();
                mystack.push(to_string(temp));break;
                default:
                mystack.push(tokens[i]);
            }
            j=0;
            i+=1;
        }
        return stoi(mystack.top());
    }
};