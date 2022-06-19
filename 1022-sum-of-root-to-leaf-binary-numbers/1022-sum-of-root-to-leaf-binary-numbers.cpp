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
    int sumRootToLeaf(TreeNode* root) {
        int sum = 0 ;
        string ans ;
        sumRoot(ans,sum,root) ;
        return sum ;
    }
    void sumRoot(string ans,int &sum,TreeNode* root){
        if(root == NULL){
            return ;
        }
        ans += to_string(root->val) ;
        if(root->left == NULL && root->right == NULL){
            bitset<1000>bi(ans) ;
            sum += bi.to_ulong() ;
        }
        sumRoot(ans,sum,root->left) ;
        sumRoot(ans,sum,root->right) ;
        ans.pop_back() ;
    }
};