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
    int sumNumbers(TreeNode* root) {
        string s ;
        int sum = 0 ;
        sumOfNumbers(root,sum,s) ;
        return sum ;
    }
    void sumOfNumbers(TreeNode* root,int &sum,string s){
        if(root == NULL){
            return ;
        }
        s += to_string(root->val);
        if(root->left == NULL && root->right == NULL){
           sum += stoi(s);
           // cout << s << endl ;
            return ;
        }
        sumOfNumbers(root->left,sum,s) ;
        sumOfNumbers(root->right,sum,s) ;
        
    }
};