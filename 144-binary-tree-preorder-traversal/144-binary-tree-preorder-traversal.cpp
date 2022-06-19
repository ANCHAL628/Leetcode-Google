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
        PreOrderTrav(root,Node)  ;
        return Node;
    }
    void PreOrderTrav(TreeNode* root,vector<int>&Node){
        if(root == NULL){
            return ;
        }
        Node.push_back(root->val) ;
        PreOrderTrav(root->left,Node) ;
        PreOrderTrav(root->right,Node) ;
        return ;
        
    }
};