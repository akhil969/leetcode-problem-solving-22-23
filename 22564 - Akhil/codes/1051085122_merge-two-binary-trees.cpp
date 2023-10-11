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
    TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2) {
        if(root1==nullptr && root2==nullptr) return nullptr;
        TreeNode* node1=root1;
        TreeNode* node2=root2;
        if(node1 && node2){
            node1->val=node1->val+node2->val;
            node1->left=mergeTrees(node1->left,node2->left);
            node1->right=mergeTrees(node1->right,node2->right);
        }
        else return node1 ? node1:node2;
        return node1;
    }
};