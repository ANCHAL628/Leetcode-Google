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
    vector<int> rightSideView(TreeNode* root) {
        vector<int>ans ;
        rightview(ans,0,root) ;
        return ans;
    }
    void rightview(vector<int>&ans,int currentLevel,TreeNode* root){
         if(root == NULL){
             return  ;
         }
        if(ans.size() == currentLevel){
            ans.push_back(root->val) ;
        }
        rightview(ans,currentLevel+1,root->right) ;
         rightview(ans,currentLevel+1,root->left) ;
        
    }
};