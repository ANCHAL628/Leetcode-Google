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
    TreeNode* searchBST(TreeNode* root, int val) {
        if(root == NULL){
            return root ;
        }
        if(root->val == val){
            return root ;
        }
        TreeNode* curr = new TreeNode(NULL) ;
        if(val < root->val){
            curr = searchBST(root->left,val) ;
        }
        if(val > root->val){
            curr = searchBST(root->right,val) ;
        }
        return curr ;
        
    }
};