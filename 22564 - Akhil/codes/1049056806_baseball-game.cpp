class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> mystack;
        int ele;
        int eleadd;
        for(int i=0;i< operations.size();i++){
            if(operations[i]=="+"){
                ele=mystack.top();
                mystack.pop();
                eleadd=mystack.top()+ele;
                mystack.push(ele);
                mystack.push(eleadd);
            }
            else if(operations[i]=="C") {
                mystack.pop();
            }
            else if(operations[i]=="D"){
                ele=2*mystack.top();
                mystack.push(ele);
            }
            else {
                ele=stoi(operations[i]);
                mystack.push(ele);
            }
        }
        eleadd=0;
        while(!mystack.empty()){
            eleadd=mystack.top()+eleadd;
            mystack.pop();
        }
        return eleadd;
    }
};