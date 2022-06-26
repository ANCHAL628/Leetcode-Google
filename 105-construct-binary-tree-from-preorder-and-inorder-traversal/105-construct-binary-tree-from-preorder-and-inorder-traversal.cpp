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
   /* tc: o(N^2)
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
       vector<int>preIndex(1,0) ;
       return constructTree(preorder,inorder,preIndex,0,inorder.size()-1) ;
    }
    TreeNode* constructTree(vector<int>&preorder,vector<int>&inorder,vector<int>&preIndex,int start,int endIndex){
        if(preIndex[0] > preorder.size()-1 || start > endIndex){
            return NULL ;
        }
        int currentval = preorder[preIndex[0]] ;
        TreeNode* Node = new TreeNode(preorder[preIndex[0]]) ;
        preIndex[0] += 1 ;
        int i ;
        for(i = start ; i < endIndex ; i++){
            if(inorder[i] == currentval){
                break ;
            }
        }
        Node->left = constructTree(preorder,inorder,preIndex,start,i-1) ;
        Node->right = constructTree(preorder,inorder,preIndex,i+1,endIndex) ;
        return Node ;
        
        
    }*/
  //  tc:O(n)
   TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
       vector<int>preIndex(1,0) ;
       unordered_map<int,int>mp ;
       for(int i = 0 ; i < inorder.size() ; i++){
           mp[inorder[i]] = i ;
       }
       return constructTree(preorder,inorder,preIndex,0,inorder.size()-1,mp) ;
    }
    TreeNode* constructTree(vector<int>&preorder,vector<int>&inorder,vector<int>&preIndex,int start,int endIndex,unordered_map<int,int>&mp){
        if(preIndex[0] > preorder.size()-1 || start > endIndex){
            return NULL ;
        }
        int currentval = preorder[preIndex[0]] ;
        TreeNode* Node = new TreeNode(preorder[preIndex[0]]) ;
        preIndex[0] += 1 ;
        int i = mp[currentval] ;
        Node->left = constructTree(preorder,inorder,preIndex,start,i-1,mp) ;
        Node->right = constructTree(preorder,inorder,preIndex,i+1,endIndex,mp) ;
        return Node ;
        
        
    }
    
};