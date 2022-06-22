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
    vector<int> preorderTraversal(TreeNode* root) {
         vector<int>Node ;
        stack<TreeNode*>tree ;
        if(root == NULL){
            return  Node ;
        }
        tree.push(root) ;
        while(!tree.empty()){
            TreeNode* curr = tree.top() ;
            Node.push_back(curr->val) ;
            tree.pop() ;
            
            if(curr->right != NULL){
                tree.push(curr->right) ;
            }
            if(curr->left != NULL){
                tree.push(curr->left) ;
            }
        }
        return Node ;
        
    }
};