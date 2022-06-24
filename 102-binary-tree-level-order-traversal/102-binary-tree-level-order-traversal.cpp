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
    vector<vector<int>> levelOrder(TreeNode* root) {
         vector<vector<int>>nodes ;
         queue<TreeNode*>tempNode ;
         if(root == NULL){
             return nodes ;
         }
        tempNode.push(root) ;
        while(!tempNode.empty()){
            vector<int>levelNode ;
            int size = tempNode.size() ;
            for(int i = 0 ; i < size ; i++){
                TreeNode *Node = tempNode.front() ;
                tempNode.pop() ;
                if(Node->left){
                    tempNode.push(Node->left) ;
                }
                 if(Node->right){
                    tempNode.push(Node->right) ;
                }
                levelNode.push_back(Node->val) ;
            }  
            nodes.push_back(levelNode) ;
        }
        return nodes ;
    }
};