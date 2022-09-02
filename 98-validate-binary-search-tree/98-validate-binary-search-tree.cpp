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
    //Worst cast tc : O(n^2)
    //sc : O(h)
    /*Best case
    //extra
    //tc : O(n)
    //sc : O(h) if function call stack is considered else O(1)*/
    bool isValidBST(TreeNode* root) {
         return validateBST(root,LONG_MIN,LONG_MAX) ;
    } 
    bool validateBST(TreeNode* root,long long int mini,long long int maxi){
         if(root == NULL){
           return true ;
         }
        if((mini >= root->val) ||(maxi <= root->val)){
            return false ;
        } 
        return validateBST(root->left,mini,root->val)&&validateBST(root->right,root->val,maxi) ;
    }
};