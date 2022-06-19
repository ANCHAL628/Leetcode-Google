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
    vector<int> postorderTraversal(TreeNode* root) {
       vector<int>Node ;
       PostOr(root,Node)   ;
       return Node;
    }
    void PostOr(TreeNode* root,vector<int>&Node){
        if(root == NULL){
            return ;
        }
        PostOr(root->left,Node) ;
        PostOr(root->right,Node) ;
        Node.push_back(root->val) ;
        return ;
        
    }
};