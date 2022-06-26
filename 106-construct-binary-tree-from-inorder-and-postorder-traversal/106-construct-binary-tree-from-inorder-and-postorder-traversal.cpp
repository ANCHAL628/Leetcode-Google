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

     TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
       vector<int>postIndex(1,postorder.size()-1) ;
       unordered_map<int,int>mp ;
       for(int i = 0 ; i < inorder.size() ; i++){
           mp[inorder[i]] = i ;
       }
       return constructTree(postorder,inorder,postIndex,0,inorder.size()-1,mp) ;
    }
    TreeNode* constructTree(vector<int>&postorder,vector<int>&inorder,vector<int>&postIndex,int start,int endIndex,unordered_map<int,int>&mp){
        if(postIndex[0] > postorder.size() || start > endIndex){
            return NULL ;
        }
        int currentval = postorder[postIndex[0]] ;
        TreeNode* Node = new TreeNode(postorder[postIndex[0]]) ;
        postIndex[0] -= 1 ;
        int i = mp[currentval] ;
        Node->right = constructTree(postorder,inorder,postIndex,i+1,endIndex,mp) ;
        Node->left = constructTree(postorder,inorder,postIndex,start,i-1,mp) ;
        return Node ;
        
        
    }
    
};