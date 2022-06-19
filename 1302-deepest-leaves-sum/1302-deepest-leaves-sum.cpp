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
    int deepestLeavesSum(TreeNode* root) {
        int maxH = maxHeight(root) ;
        int sum = 0 ;
        sumOfDeepest(root,sum,maxH) ;
        return sum ;
    }
    int maxHeight(TreeNode* root){
        if(root == NULL){
            return 0 ;
        }
        int leftHeight = 1+maxHeight(root->left) ;
        int rightHeight = 1+maxHeight(root->right) ;
        return max(leftHeight,rightHeight) ;
    }
    void sumOfDeepest(TreeNode* root,int &sum,int maxH){
        if(root == NULL){
            return ;
        }
        if(maxH == 1){
            sum += root->val ;
            return ;
        }
        sumOfDeepest(root->left,sum,maxH-1) ;
        sumOfDeepest(root->right,sum,maxH-1) ;
        
        
    }
};