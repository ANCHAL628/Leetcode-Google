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
    vector<string> binaryTreePaths(TreeNode* root) {
        string s ;
        vector<string>answer ;
        binaryPath(root,answer,s) ;
        return answer ;
    }
    void binaryPath(TreeNode* root,vector<string>&answer,string s){
        if(root == NULL){
            return ;
        }
        s += to_string(root->val) ;
        if(root->left == NULL && root->right == NULL){
            answer.push_back(s) ;
            return ;
        }
        s += "->" ;
        binaryPath(root->left,answer,s) ;
        binaryPath(root->right,answer,s) ;
        
        
    }
    
};