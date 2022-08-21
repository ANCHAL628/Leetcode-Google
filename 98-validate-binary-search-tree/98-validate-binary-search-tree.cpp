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
    //tc : O(n)
    bool isValidBST(TreeNode* root) {
         bool find = true ;
         return validateBST(root,LONG_MIN,LONG_MAX) ;
    } 
    bool validateBST(TreeNode* root,long long int left,long long int right){
         if(root == NULL){
             return true ;
         }if((left >= root->val) || (right <= root->val)){
             return false ;
         }
        return validateBST(root->left,left,root->val)&&validateBST(root->right,root->val,right) ;
         
    }
};