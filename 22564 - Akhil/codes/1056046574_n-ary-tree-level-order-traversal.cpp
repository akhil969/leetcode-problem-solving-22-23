/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        queue<Node*> myqueue;
        vector<vector<int>> result;
        if(root==nullptr)  return result;
        myqueue.push(root);
        while(!myqueue.empty()){
            int size=myqueue.size();
            vector<int> level;
            while(size!=0){

                Node* node=myqueue.front();
                // cout << node->children.size() <<" ";
                level.push_back(node->val);
                // if(node->left) myqueue.push(node->left);
                // if(node->right) myqueue.push(node->right);
                for(int i=0;i<node->children.size();i++) myqueue.push(node->children[i]);
                myqueue.pop();
                size--;
            }
            result.push_back(level);
        }
        return result;
    }
};