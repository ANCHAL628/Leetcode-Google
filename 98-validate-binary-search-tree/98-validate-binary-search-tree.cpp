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
    bool isValidBST(TreeNode* root) {
        bool found = true ;
        return isValid(root,LONG_MIN,LONG_MAX) ;
    }
    bool isValid(TreeNode* root,long lo,long hi){
        if(root == NULL){
            return true ;
        }
        //if(!isValid(root->left))
        if(root->val <= lo || root->val >= hi)
            return false;   
        return isValid(root->left,lo,root->val)&&isValid(root->right,root->val,hi) ;
    }
};