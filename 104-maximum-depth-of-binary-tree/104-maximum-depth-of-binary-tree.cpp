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
    /*//tc -> O(n) where n is max No of nodes
    //sc = O(H)*/
    int maxDepth(TreeNode* root) {
        return maxHeight(root) ;
    }
    int maxHeight(TreeNode* root){
        if(root == NULL){
            return 0 ;
        }
        return max(1+maxHeight(root->left),1+maxHeight(root->right) );
    }
};