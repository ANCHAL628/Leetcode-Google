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
    unordered_set<int>dp ;
    vector<TreeNode*>res ;
    void delteRoot(TreeNode* &root){
        if(root != NULL){
        delteRoot(root->left) ;
        delteRoot(root->right) ;
        if(dp.find(root->val) != dp.end()){
            if(root->left != NULL){
                res.push_back(root->left) ;
            }
             if(root->right != NULL){
                res.push_back(root->right) ;
            }
            root = NULL ;
            delete root ;
            
        }
        }
    }
    vector<TreeNode*> delNodes(TreeNode* root, vector<int>& to_delete) {
       for(int i = 0 ; i < to_delete.size() ; i++) {
           dp.insert(to_delete[i]) ;
       }
       delteRoot(root) ;
        if(root)
            res.push_back(root);
        return res;
    }
};