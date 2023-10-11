// class Solution {
// public:
//     int evalRPN(vector<string>& tokens) {
//         stack<string> mystack;
//         int i=0,j=0;
//         int temp;
//         while(i<tokens.size()){
//             if(tokens[i][0]=='-'&& tokens[i].length()!=1) j=1;
//             switch(tokens[i][j]){
//                 case '+':
//                 temp= stoi(mystack.top());
//                 mystack.pop();
//                 temp=temp+stoi(mystack.top());
//                 mystack.pop();
//                 mystack.push(to_string(temp));break;
//                 case '*':
//                 temp= stoi(mystack.top());
//                 mystack.pop();
//                 temp=temp*stoi(mystack.top());
//                 mystack.pop();
//                 mystack.push(to_string(temp));break;
//                 case '-':
//                 temp= stoi(mystack.top());
//                 mystack.pop();
//                 temp=stoi(mystack.top())-temp;
//                 mystack.pop();
//                 mystack.push(to_string(temp));break;
//                 case '/':
//                 temp= stoi(mystack.top());
//                 mystack.pop();
//                 temp=stoi(mystack.top())/temp;
//                 // cout<<temp<<"";
//                 mystack.pop();
//                 mystack.push(to_string(temp));break;
//                 default:
//                 mystack.push(tokens[i]);
//             }
//             j=0;
//             i+=1;
//         }
//         return stoi(mystack.top());
//     }
// };
class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> mystack;
        for (const string& token : tokens) {
            if (isOperator(token)) {
                int operand2 = mystack.top();
                mystack.pop();
                int operand1 = mystack.top();
                mystack.pop();
                mystack.push(applyOperator(token[0], operand1, operand2));
            } else {
                mystack.push(stoi(token));
            }
        }
        return mystack.top();
    }

private:
    bool isOperator(const string& token) {
        return token.size() == 1 && (token[0] == '+' || token[0] == '-' || token[0] == '*' || token[0] == '/');
    }

    int applyOperator(char op, int operand1, int operand2) {
        switch (op) {
            case '+':
                return operand1 + operand2;
            case '-':
                return operand1 - operand2;
            case '*':
                return operand1 * operand2;
            case '/':
                return operand1 / operand2; // Note: Be cautious of division by zero.
        }
        return 0; // Handle invalid operators if needed.
    }
};
