/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        //store the parent of every node
        //find parent
        unordered_map<TreeNode*,TreeNode*>par ;
        vector<int>answer ;
        parent(par,root,0) ;
        findNodesAtK(root,target,k,answer,par) ;
        return answer ;
        
    }
    void findNodesAtK(TreeNode* root,TreeNode* target,int k,vector<int>&answer,unordered_map<TreeNode*,TreeNode*>&mp){
        unordered_set<TreeNode*>visited ;
        iterateTree(target,k,answer,visited,mp) ;
        
    }
    void iterateTree(TreeNode* target,int k,vector<int>&answer,unordered_set<TreeNode*>&S1,unordered_map<TreeNode*,TreeNode*>&mp){
         if(target == NULL || S1.find(target) !=S1.end()){
             return ;
         }
        S1.insert(target) ;
        if(k == 0){
            answer.push_back(target->val) ;
        }
        iterateTree(target->left,k-1,answer,S1,mp) ;
        iterateTree(target->right,k-1,answer,S1,mp) ;
        iterateTree(mp[target],k-1,answer,S1,mp) ;
        
    }

void parent(unordered_map<TreeNode*,TreeNode*>&par,TreeNode* root,TreeNode* currParent){
        if(root == NULL){
            return ;
        }
       par.insert({root,currParent}) ;
       parent(par,root->left,root) ;
       parent(par,root->right,root) ;
       
    }
};