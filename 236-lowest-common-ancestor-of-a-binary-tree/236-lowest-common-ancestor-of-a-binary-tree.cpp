/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
    //time complexity :O(n)
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
           if(root == NULL){
               return root ;
           }      
          if(root == p || root == q){
              return root ;
          }
          TreeNode* leftAns = lowestCommonAncestor(root->left,p,q) ;
          TreeNode* rightAns = lowestCommonAncestor(root->right,p,q) ;
          if(leftAns != NULL && rightAns != NULL){
              return root ;
          }
           if(leftAns != NULL){
              return leftAns ;
          }
             if(rightAns != NULL){
              return rightAns ;
          }
        return NULL ;
          
    }
};