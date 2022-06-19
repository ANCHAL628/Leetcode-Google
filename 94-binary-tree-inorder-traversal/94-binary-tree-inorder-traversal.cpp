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
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int>Node ;
        Inord(root,Node) ;
        return Node ;
    }
     void Inord(TreeNode* root,vector<int>&Node){
        if(root == NULL){
            return ;
        }
        Inord(root->left,Node) ;
        Node.push_back(root->val) ;
        Inord(root->right,Node) ;
      //  Node.push_back(root->val) ;
        return ;
        
    }
};