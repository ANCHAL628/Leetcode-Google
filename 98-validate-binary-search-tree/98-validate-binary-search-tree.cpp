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
       bool find = true ;
        //tc : O(n)
      return validate(root,LONG_MIN,LONG_MAX,find) ;
    }
    bool validate(TreeNode* root,long long minVal,long long maxVal,bool &find){
         if(root == NULL){
             return true ;
         }
        if(root->val <= minVal || root->val >= maxVal){
            return false ;
        }
        return validate(root->left,minVal,root->val,find)&&validate(root->right,root->val,maxVal,find) ;
    }
};