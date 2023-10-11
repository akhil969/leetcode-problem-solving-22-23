/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {

        queue<TreeNode*> myqueue;
        vector<vector<int>> result;
        if(root==nullptr)  return result;
        myqueue.push(root);
        while(!myqueue.empty()){
            int size=myqueue.size();
            vector<int> level;
            while(size!=0){

                TreeNode* node=myqueue.front();
                cout << node->val <<" ";
                level.push_back(node->val);
                if(node->left) myqueue.push(node->left);
                if(node->right) myqueue.push(node->right);
                myqueue.pop();
                size--;
            }
            result.push_back(level);
        }
        return result;
    }
};